#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // En este programa contara cuantas palabras, letras y oraciones tiene un archivo
    int n_words = 0, n_letras = 0, n_oraciones = 0;

    FILE *f = fopen("words.txt", "r");

    if (!f)
        return 1;

    char c;

    while (fread(&c, sizeof(char), 1, f))
    {
        printf("%c", c);
        if (isalpha(c)) // Letras
            n_letras++;
        else if (c == ' ' || c == '\n')  // Palabras
            n_words++;
        else if (c == '.' || c == '?' || c == '!') // Oraciones
            n_oraciones++;
        else
            continue;
    }
    printf("\nCantidad de palabras: %d\n"
            "Cantidad de letras: %d\n"
            "Cantidad de oraciones: %d\n", n_words, n_letras, n_oraciones);

    fclose(f);
}
