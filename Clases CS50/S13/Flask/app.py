from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/Hola")
def hola():
    name = request.args.get("name")
    return render_template("Saludo.html",n = name)

@app.route("/saludo")
def saludo():
    name = request.args.get("name","world")
    if not name:
        return render_template("error.html", message= "No ingresaste un nombre")
    return render_template("saludo2.html", name = name)
