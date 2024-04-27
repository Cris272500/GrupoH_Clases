for i in [0,1,2]:
    print(f"{i}. Hello World",end="! \n")
print("Segunda forma de ciclo")
for i in range(3):
    print(f"{i}. Hello World",end="! \n")

print("Se repetira hasta que diga SI")
centinela = 'SI'
letra = ''
while (letra != centinela):
    letra = input("Desea salir \n")
print("Saliste")
