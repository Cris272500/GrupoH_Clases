#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *f = fopen("agenda.csv", "a");

    if (!f)
        return 1;

    string name = get_string("Nombre: ");
    string age = get_string("Edad: ");
    fprintf(f, "%s,%s\n", name, age);
    fclose(f);
}
