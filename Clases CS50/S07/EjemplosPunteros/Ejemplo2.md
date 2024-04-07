En este ejemplo se puede observar la distancia de direccion de memoria que hay entre ambas variables

```c
#include <stdio.h>

/*--Resta de dos punteros--
La resta de dos punteros sólo es posible cuando tienen el mismo tipo de datos. El resultado
se genera calculando la diferencia entre las direcciones de los dos punteros y calculando
cuántos bits de datos es según el tipo de datos del puntero. La resta de dos punteros da
los incrementos entre los dos punteros.
*/

int main(void)
{
    int a = 6, b = 10, c = 20;
    int *pa = &a, *pb = &b, *pc = &c;

    printf("pa = %p, pb = %p, pc = %p\n", pa, pb, pc);
    a = pc - pa;

    printf("La distancia entre ambos punteros es: %d\n", a);
}

```

La salida daria esto:

![image](https://github.com/Cris272500/GrupoH_Clases/assets/113935131/18b95273-963f-4d47-8671-cf9ff34e63a3)