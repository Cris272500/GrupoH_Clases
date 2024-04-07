En este ejemplo se puede confirmar que con el uso de punteros tambien podemos hacer comparaciones con operadores relaciones

```
#include <stdio.h>
/*Podemos comparar los dos punteros usando los operadores de comparación en C. 
Podemos implementar esto usando todos los operadores en C >, >=, <, <=, ==, !=. 
Devuelve true para la condición válida y devuelve false para la condición no satisfecha.

Paso 1: Inicialice los valores enteros y apunte estos valores enteros al puntero.
Paso 2: Ahora, compruebe la condición mediante el uso de operadores de comparación o relacionales en variables de puntero.
Paso 3: Mostrar la salida.*/

int main(void)
{
    int a = 5, b = 10, c = 5;
    int *pa = &a, *pb = &b, *pc = &c;

    // Comparamos los punteros
    if (*pa < *pb)
    {
        printf("%d es menor que %d", *pa, *pb);
    }
    if (*pb > *pa)
    {
        printf("\n%d es mayor que %d", *pb, *pa);
    }
    if (*pa == *pc)
    {
        printf("\nAmbos son iguales\n");
    }

}
```

La salida en consola es:

![image](https://github.com/Cris272500/GrupoH_Clases/assets/113935131/b6d188b0-221e-41a0-87b9-1d4cf5a2424c)