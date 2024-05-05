#include<stdio.h>
#include<string.h>

int main(void)
{
    char *frase = "Examen CS50";
    int longitud = strlen(frase);
    for(char *c = frase + longitud; c>= frase; c--)
    {
        printf("%c",*c);
    }
    printf("\n");
}
