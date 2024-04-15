#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE *f = fopen("calificaciones.csv", "a");
    if (!f)
        return 1;

    string name = get_string("Nombre completo: ");
    int n1 = get_int("Nota 1: ");
    int n2 = get_int("Nota 2: ");
    int n3 = get_int("Nota 3: ");

    fprintf(f, "%s,%d,%d,%d\n", name, n1, n2, n3);

    fclose(f);
}
