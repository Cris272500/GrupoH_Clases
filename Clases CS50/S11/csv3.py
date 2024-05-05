import csv

edad = {
}
for i in range (100):
    edad[i] = 0

with open("tonio.csv","r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
        edad[int(row[2])] += 1
        
for item in edad:
    if edad[item] != 0:
        print(f"Tenemos {edad[item]} de {item} años ")
