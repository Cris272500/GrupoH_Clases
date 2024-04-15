#include <stdio.h>

int main(void)
{
    int n = 0;
    FILE *f = fopen("number.txt", "r");

    if (!f)
        return 1;

    fscanf(f, "%d", &n);
    
    printf("El numero es: %d\n", n);
    fclose(f);
}
