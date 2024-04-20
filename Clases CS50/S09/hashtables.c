#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

typedef struct node
{
    char word[46];
    struct node *next;
} node;

node *hashtable[26];

/* Prototipo de las funciones */
int hash(string palabra);
void insertar(string palabra);
void mostrar(void);
void buscar(string palabra);
void free_hash(void);

int main(void)
{
    string dato;

    for(int i = 0; i < 5; i++)
    {
        dato = get_string("Ingrese la palabra a insertar: ");
        insertar(dato);
    }
    mostrar();
    buscar("Arroz");
    free_hash();
    return 0;
}

/* Definicion de las funciones */
int hash(string palabra)
{
    int pos = toupper(palabra[0]) - 'A';
    return pos;
}

void insertar(string palabra)
{
    node *nuevo_nodo = malloc(sizeof(node));
    if (nuevo_nodo == NULL)
    {
        return;
    }
    strcpy(nuevo_nodo->word, palabra);
    int pos = hash(palabra); // Para saber la pos
    // Verificar si mi hashtable está vacia
    if(hashtable[pos] == NULL)
    {
        nuevo_nodo->next = NULL;
        hashtable[pos] = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->next = hashtable[pos];
        hashtable[pos] = nuevo_nodo;
    }
}

void mostrar(void)
{
    node *temp = NULL;
    char l = 'A';
    for(int i = 0; i < 26; i++)
    {
        temp = hashtable[i];
        printf("%c---------------------------------\n", l + i);
        while(temp != NULL)
        {
            printf("%s\n", temp->word);
            temp = temp->next;
        }
    }
}

void free_hash(void)
{
    node *temp = NULL;
    node *eliminar = NULL;
    for(int i = 0; i < 26; i++)
    {
        temp = hashtable[i];
        while(temp != NULL)
        {
            eliminar = temp;
            temp = temp->next;
            free(eliminar);
        }

    }
}

void buscar(string palabra)
{
    //arroz
    int pos = hash(palabra);
    node *temp = hashtable[pos];
    while (temp != NULL)
    {
        // temp->word = Arroz
        // Arroz == arrOz
        if(strcasecmp(temp->word, palabra) == 0)
        {
            printf("Encontramos el dato que está buscando.\n");
            return;
        }
        temp = temp->next;
    }
    printf("El dato no se encontró.\n");
}
