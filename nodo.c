#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int dato;
    struct list *next;
}nodo;

nodo *lista;
nodo *fin;

int lenlist(nodo *lista);
void imprimir(nodo *lista);
nodo *inserfin(nodo *lista, nodo *listan);
nodo *crear(int n);
nodo *inserini(nodo *lista, nodo *new);


int main(){
    lista=crear(5);
    lista=inserfin(lista, crear(8));
    lista=inserini(lista,crear(10));
    lista=inserfin(lista,crear(30));
    imprimir(lista);
return 0;
}

nodo *crear(int n){
    nodo *lista;
    lista=(nodo *)malloc(sizeof(nodo));
    lista->dato=n;
    lista->next=NULL;
    return lista;
}
nodo *inserfin(nodo *lista,nodo *listan){
    nodo *p;
    for (p=lista;p->next!=NULL;p=p->next){};
    p->next = listan;   
    return lista;
}
void imprimir(nodo *lista){
    for(;lista!=NULL;lista=lista->next){
        printf("%d\n",lista->dato);
    }
}
int lenlist(nodo *lista){
    int i=0;
    for(;lista!=NULL;lista=lista->next){
        i++;
    }return i;
}
nodo *inserini(nodo *lista, nodo *new){
new->next=lista;
return new;
}