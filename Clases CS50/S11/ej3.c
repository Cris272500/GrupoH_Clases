#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Ingrese mas argumentos\n");
        return 1;
    }
    for(int i = 0; i< argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}
