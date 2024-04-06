En este ejemplo se pretender ver que con los punteros tambien pueden ser comparados con el valor de NULL 

```c
#include <stdio.h>

/*--Comparacion con NULL--
Un puntero se puede comparar o asignar un valor NULL independientemente de cuál sea el tipo de 
puntero. Estos punteros se denominan punteros NULL y se utilizan en varios métodos de control 
de errores relacionados con el puntero.
*/

int main(void)
{
    int *p = NULL;

    if (p == NULL)
    {
        printf("El puntero es Nulo\n");
    }
    else
    {
        printf("El puntero no es Nulo\n");
    }
}
```

La salida por consola es:

![image](https://github.com/Cris272500/GrupoH_Clases/assets/113935131/0f384ed3-89a5-47a2-95b8-37d374dc4d85)