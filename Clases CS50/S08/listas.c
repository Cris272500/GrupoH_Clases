#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} nodo;


void agregarNodo(int dato, nodo *raiz){

    nodo *actual = raiz;
    while(actual->siguiente != NULL){
        actual = actual->siguiente;
    }

    nodo *nuevoNodo = malloc(sizeof(nodo));

    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    actual->siguiente = nuevoNodo;


}

int main (void){

    nodo *raiz = malloc(sizeof(nodo));
    nodo *nodo1 = malloc(sizeof(nodo));
    nodo *nodo2 = malloc(sizeof(nodo));

    raiz->dato = 10;
    raiz->siguiente = nodo1;

    nodo1->dato = 11;
    nodo1->siguiente = nodo2;

    nodo2->dato = 12;
    nodo2->siguiente = NULL;

    agregarNodo(13, raiz);
    agregarNodo(14, raiz);
    agregarNodo(15, raiz);
    agregarNodo(16, raiz);

    for(nodo *actual = raiz; actual != NULL ; actual = actual->siguiente ){
        printf("%d \n", actual->dato);

    }

    free(raiz);







}
