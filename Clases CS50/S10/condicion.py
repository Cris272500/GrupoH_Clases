edad = 10

if (edad >= 18):
    print("Eres mayor de edad")
else:
    print("Eres menor de edad")

nota = int(input("Ingrese la nota: "))
if (nota >= 0 and nota < 60):
    print("Reprobaste la clase ")
elif (nota >= 60 and nota <=100):
    print("Aprobaste")
else:
    print("Nota no valida")
