from sys import argv, exit

if len(argv) < 2:
    print("Error")
    exit(1)

name = argv[1]
edad = int(argv[2])
print(f"Tu nombre es {name}, edad: {edad}")
