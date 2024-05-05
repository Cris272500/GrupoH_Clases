import csv
from cs50 import get_string, get_int

nombre = []
numero = []
cantidad = get_int("Cuantas personas vas a ingresar: ")
for i in range(cantidad):
    n = get_string("Nombre: ")
    num = get_int("Numero: ")
    nombre.append(n)
    numero.append(num)

with open("agenda2.csv","a") as file:
    writer = csv.writer(file)
    for i in range(cantidad):
        writer.writerow((nombre[i],numero[i]))
