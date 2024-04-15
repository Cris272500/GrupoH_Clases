#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE *f = fopen("content.txt", "a");
    if (!f)
        return 1;

    string contenido = get_string("Ingrese contenido: ");

    fprintf(f, "%s\n", contenido);

    fclose(f);
}
