import csv
from csv import writer
from cs50 import get_string, get_int
file = open("agenda.csv","a")
nombre = get_string("Nombre: ")
edad = get_int("Edad: ")
writer = csv.writer(file)
writer.writerow([nombre,edad])
file.close()
