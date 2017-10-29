#include "Nodo.h"
#include <iostream>

Nodo::Nodo(Card carta)
{
    this->carta = carta;
    siguiente = NULL;
    anterior = NULL;
}
