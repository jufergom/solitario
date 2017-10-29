#include "Nodo.h"
#include "ListaApuntadores.h"
#include "card.h"
#include <iostream>

using namespace std;

ListaApuntadores::ListaApuntadores() {
    nodoFinal = NULL;
    nodoInicio = NULL;
    cantidadElementos = 0;
}

int ListaApuntadores::add(Card carta) {
    Nodo *nuevo = new Nodo(carta);
    if(nodoInicio == NULL && nodoFinal == NULL) {
        nodoInicio = nuevo;
        nodoFinal = nuevo;
    }
    else {
        nodoFinal->siguiente = nuevo;
        nodoFinal->siguiente->anterior = nodoFinal;
        nodoFinal = nodoFinal->siguiente;
    }
    cantidadElementos++;
    return 0;
}

int ListaApuntadores::insertar(Card carta, int posicion) {
    if(posicion < 0 || posicion > cantidadElementos)
        return -1;
    Nodo *nuevo = new Nodo(carta);
    if(posicion == 0) {
        nuevo->siguiente = nodoInicio;
        nodoInicio = nuevo;
    }
    else if(posicion == cantidadElementos) {
        nodoFinal->siguiente = nuevo;
        nodoFinal->siguiente->anterior = nodoFinal;
        nodoFinal = nodoFinal->siguiente;
    }
    else {
        Nodo *iterador = nodoInicio;
        for(int i = 0; i < posicion - 1; i++)
            iterador = iterador->siguiente;
        iterador->siguiente->anterior = nuevo;
        nuevo->anterior = iterador;
        nuevo->siguiente = iterador->siguiente;
        iterador->siguiente = nuevo;
    }
    cantidadElementos++;
    return 0;
}

void ListaApuntadores::eliminar(int posicion) {
    if(posicion < 0 || posicion >= cantidadElementos)
        return;

    Nodo *eliminar;
    if(posicion == 0) {
        eliminar = nodoInicio;
        nodoInicio = nodoInicio->siguiente;
    }
    if(cantidadElementos == 1) {
        eliminar = nodoInicio;
        //retorno = eliminar->carta;
        nodoInicio = NULL;
        nodoFinal = NULL;
    }
    else {
        Nodo *iterador = nodoInicio;
        for(int i = 0; i < posicion - 1; i++)
        {
            iterador = iterador->siguiente;
        }
        eliminar = iterador->siguiente;
        //retorno = eliminar->carta;
        iterador->siguiente = eliminar->siguiente;
        eliminar->siguiente->anterior = iterador;
    }
    delete eliminar;
    cantidadElementos--;
}
/*
int ListaApuntadores::buscar(Card carta) {
    Nodo *iterador = nodoInicio;
    for(int i = 0; i < cantidadElementos; i++) {
        if(iterador->carta == carta)
            return i;
        iterador = iterador->siguiente;
    }
    return -1;
}
*/
ListaApuntadores* ListaApuntadores::clonar() {
    ListaApuntadores *pambisito = new ListaApuntadores();
    Nodo *iterador = nodoInicio;
    for(int i = 0; i < cantidadElementos; i++) {
        Card carta = iterador->carta;
        pambisito->add(carta);
        iterador = iterador->siguiente;
    }
    return pambisito;
}

ListaApuntadores* ListaApuntadores::extraerSubLista(int desde) {
    if(desde < cantidadElementos)
        return extraerSubLista(desde, cantidadElementos - 1);
}

ListaApuntadores* ListaApuntadores::extraerSubLista(int desde, int hasta) {
    ListaApuntadores *pambisito = new ListaApuntadores();
    Nodo *iterador = nodoInicio;
    int contador = hasta - desde + 1;
    for (int i = 0; i < contador ; i++) {
        Card carta = iterador->carta;
        pambisito->add(carta);
        iterador = iterador->siguiente;
    }
    return pambisito;
}
/*
ListaApuntadores* ListaApuntadores::unir(ListaApuntadores *lista1, ListaApuntadores *lista2) {
    ListaApuntadores *lista3 = new ListaApuntadores();
    Nodo *iterador = lista1->nodoInicio;
    for (int i = 0; i < lista1->cantidadElementos; i++) {
        if(buscar(iterador->carta) == -1)
            lista3->add(iterador->carta);
        iterador = iterador->siguiente;
    }
    iterador = lista2->nodoInicio;
    for (int j = 0; j < lista2->cantidadElementos; j++) {
        lista3->add(iterador->carta);
        iterador = iterador->siguiente;
    }
    return lista3;
}

ListaApuntadores* ListaApuntadores::interseccion(ListaApuntadores *lista1, ListaApuntadores *lista2) {
    ListaApuntadores *lista3 = new ListaApuntadores();
    Nodo *iterador = lista1->nodoInicio;
    for (int i = 0; i < lista1->cantidadElementos; i++) {
        if (buscar(iterador->carta) != -1)
            lista3->add(iterador->carta);
        iterador = iterador->siguiente;
    }
    return lista3;
}
*/
