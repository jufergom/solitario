#ifndef LISTAAPUNTADORES_H_INCLUDED
#define LISTAAPUNTADORES_H_INCLUDED

#include "Nodo.h"

class ListaApuntadores {
private:

    Nodo *nodoInicio;
    Nodo *nodoFinal;
    int cantidadElementos;

    ListaApuntadores* extraerSubLista(int, int);

public:

    ListaApuntadores();

    int add(Card);
    int insertar(Card, int);
    void eliminar(int);
    int buscar(Card);
    void print_list();
    ListaApuntadores* clonar();
    ListaApuntadores* extraerSubLista(int);
    ListaApuntadores* unir(ListaApuntadores*, ListaApuntadores*);
    ListaApuntadores* interseccion(ListaApuntadores*, ListaApuntadores*);
};

#endif // LISTAAPUNTADORES_H_INCLUDED
