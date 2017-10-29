#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <allegro.h>

struct Card {
    BITMAP *image;
    //coordenadas
    int x, y;
    //ancho y alto
    int ancho, alto;
    //enumeracion carta
    int numero;



    //funciones de la estructura carta
    void iniciar(char *ruta, int numero);
    void setCoordinates(int x, int y);
    void pintar(BITMAP *buffer);
    void mover();
};

#endif // CARD_H_INCLUDED
