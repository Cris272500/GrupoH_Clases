
CREATE TABLE "persona" (
    id INTEGER PRIMARY KEY,
    nombre TEXT,
    edad INTEGER,
    genero TEXT
);

CREATE TABLE "telefono" (
    id INTEGER PRIMARY KEY,
    persona_id INTEGER,
    num TEXT,
    FOREIGN KEY (persona_id) REFERENCES "persona"(id)
);

INSERT INTO persona(nombre, edad, genero)
VALUES ("Pepe", 19, "Helicoptero");

INSERT INTO telefono(persona_id, num)
VALUES (1, "3333-1111");

SELECT * FROM persona WHERE persona.id IN (
    SELECT persona_id FROM telefono WHERE telefono.num = "2222-1111"
);
