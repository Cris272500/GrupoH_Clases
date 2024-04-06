En este ejemplo propuesto, podemos observar que nos desplazamos a traves de un array mediante el uso de punteros

```c
#include <stdio.h>

int main(void)
{
    int n = 10;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;

    p = nums;
    printf("%p\n", p);

    int n_pares = 0, n_impares = 0;

    for (int i = 0; i < n; i++)
    {
        if (*p % 2 == 0)
        {
            n_pares++;
        }
        else
        {
            n_impares++;
        }
        p++;
    }

    printf("Cantidad de numeros pares: %d\n", n_pares);
    printf("Cantidad de numeros impares: %d\n", n_impares);
}

```

El proposito es de contar la cantidad de numeros pares e impares.

La salida es:

![image](https://github.com/Cris272500/GrupoH_Clases/assets/113935131/0fd77e55-2cf9-4c74-a727-58c433f59038)