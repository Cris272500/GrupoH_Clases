from cs50 import SQL
db = SQL("sqlite:///registros.db")

# 1. Mostrar todos los registros
def Mostrar():
    registros = db.execute('''
        SELECT * FROM persona
    ''')

    for registro in registros:
        print(f"Id: {registro['id']}||Nombre: {registro['nombre']}||Edad: {registro['edad']}||G: {registro['genero']}")
    return

# 2. Insertar registros
def Insertar():
    name = input("Nombre: ")
    edad = int(input("Edad: "))
    genero = input("Genero: ")

    db.execute(
        '''
            INSERT INTO persona(nombre, edad, genero)
            VALUES (?, ?, ?);
        ''', name, edad, genero)
    return

#3. Eliminar
def Eliminar():
    id = input("Digite el id del usuario por eliminar: ")

    result = db.execute(
        '''
            DELETE FROM persona
            WHERE id = ?
        ''', id)
    if result == 0:
        print("El usuario no existe")
        return
    print(f"Se borro exitosamente")
    return

# 4. Actualizar
def Actualizar():
    id = int(input("Digite el id del usuario por actualizar: "))

    result = db.execute(
        '''
            SELECT * FROM persona WHERE persona.id = ?
        ''', id)
    # si el usuario no existe
    if len(result) == 0:
        print("El usuario no existe")
        return
    # si el usuario si existe, actualizamos sus campos
    # pidiendo nuevos datos
    nuevo_nombre = input("Ingrese el nuevo nombre: ")
    edad = int(input("Digite la nueva edad: "))
    genero = input("Genero: ")

    db.execute('''
        UPDATE persona
        SET nombre = ?, edad = ?, genero = ?
        WHERE id = ?
    ''', nuevo_nombre, edad, genero, id)
    print("El registro se actualizo")
    return
# 5. Mostrar informacion de un usuario
def Descripcion():
    id = int(input("Digite el id del usuario a buscar: "))

    result = db.execute(
        '''
            SELECT * FROM persona WHERE persona.id = ?
        ''', id)
    # si el usuario no existe
    if len(result) == 0:
        print("El usuario no existe")
        return
    # si el usuario existe
    result = db.execute(
        '''
            SELECT persona.nombre, persona.edad, GROUP_CONCAT(telefono.num) AS telefonos
            FROM PERSONA
            INNER JOIN telefono
            ON persona.id = telefono.persona_id
            WHERE telefono.persona_id = ?
            GROUP BY persona.nombre
        ''', id)
    # Mostrando la info del cliente
    print("-----> Info del cliente <-----")
    for r in result:
        print(f"Nombre: {r['nombre']}||Edad: {r['edad']}||Telefonos: {r['telefonos']}")
    return

# Main, donde se llaman todas las funciones
def main():
    while True:
        print('''
            1. Mostrar todos los registros
            2. Insertar registros
            3. Eliminar
            4. Actualizar
            5. Mostrar informacion de un usuario
        ''')
        opc = int(input("Escoja una opc: "))
        if (opc == 1):
            Mostrar()
            break
        elif (opc == 2):
            Insertar()
            break
        elif (opc == 3):
            Eliminar()
            break
        elif (opc == 4):
            Actualizar()
            break
        elif (opc == 5):
            Descripcion()
            break

    print("Tenga un buen dia")

if __name__ == "__main__":
    main()
