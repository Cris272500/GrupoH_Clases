from cs50 import get_int

n = get_int("Tamaño: ")
numeros = []

for i in range(n):
    edad = get_int("Edad: ")
    numeros.append(edad)

for i in numeros:
    print(f"Elemento: {i}")
