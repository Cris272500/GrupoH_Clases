#include<cs50.h>
#include<stdio.h>
void saludo(string nombre);
int main(void)
{
    string nombre = get_string("Dime tu nombre");
    saludo(nombre);
}
void saludo(string nombre)
{
    printf("Hola %s\n",nombre);
}
