En el siguiente ejemplo se pretende cambiar la posicion de memoria en la que se encuentra el puntero utilizando el operador `-=`

```c
#include <stdio.h>

/*Cuando se resta un puntero con un valor entero, el valor se multiplica primero por el tamaño
del tipo de datos y, a continuación, se resta del puntero de forma similar a una suma.*/

int main(void)
{
    int n = 10;
    int *p = &n;

    printf("Posicion inicial: %p\n", p);
    p-=5;

    printf("Posicion actualizada: %p\n", p);
}


```

Aca hay un ejemplo de como se visualizaria por consola

 ![image](https://github.com/Cris272500/GrupoH_Clases/assets/113935131/e2201ee8-e1d2-42e8-8201-c83c30bcc511)
