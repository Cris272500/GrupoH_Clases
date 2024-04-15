#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f = fopen("name.txt", "r");
    char *name = (char *) malloc(50 * sizeof(char));
    if (!f || !name)
        return 1;

    fscanf(f, "%s", name);
    printf("Hola: %s\n", name);
    fclose(f);
    free(name);
}
