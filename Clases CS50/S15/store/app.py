from cs50 import SQL
from flask import Flask, redirect, render_template, request, session
from flask_session import Session

# objeto App
app = Flask(__name__)

# Conexion a db
db = SQL("sqlite:///store.db")

#configuraciones de las sesiones
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

@app.route("/")
def index():
    books = db.execute("SELECT * FROM books")
    return render_template("index.html", books=books)

@app.route("/cart", methods=["GET", "POST"])
def cart():
    # si no hay ningun libro en el carrito
    if "cart" not in session:
        session["cart"] = []
    # POST
    if request.method == "POST":
        id = int(request.form.get("id"))

        if id:
            if id not in session["cart"]:
                carrito = session["cart"]
                carrito.append(id)
                session["cart"] = carrito
            return redirect("/cart")
    # GET
    else:
        # si hay libros en el carrito
        if session["cart"]:
            cart_books = db.execute("SELECT * FROM books WHERE id IN(?)", session["cart"])
        else:
            cart_books = []
        return render_template("carrito.html", cart_books=cart_books)
