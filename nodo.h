#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include "card.h"

struct Nodo {
    Card carta;
    Nodo *siguiente;
    Nodo *anterior;

    Nodo(Card);
};

#endif // NODO_H_INCLUDED
