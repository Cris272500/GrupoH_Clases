'''producto = {
    'nombre':"Zapatos",
    'precio': 360.7,
    'cantidad': 5
}'''
productos = [
    {
        'nombre':"Zapatos",
        'precio': 360.7,
        'cantidad': 5
    },
    {
        'nombre':"Camisa",
        'precio': 100,
        'cantidad': 10
    },
    {
        'nombre':"Refrigeradora",
        'precio': 1500,
        'cantidad': 1
    }
]

for product in productos:
    print(f"Nombre: {product['nombre']} || {product['precio']}")



