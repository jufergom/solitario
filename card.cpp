#include "card.h"
#include "ListaApuntadores.h"
#include "inicia.h"

bool colision(int x1, int y1, int w1, int h1,
              int x2, int y2, int w2, int h2)
{
    return ((x1 < x2 + w2) && (x2 < x1 + w1) && (y1 < y2 + h2) && (y2 < y1 + h1));
}

bool colision_cartas(Card carta1, Card carta2) {
    return colision(carta1.x, carta1.y, carta1.ancho, carta1.alto,
                    carta2.x, carta2.y, carta2.ancho, carta2.alto);
}

/*la ruta de la imagen de la carta, la enumeracion de la carta y las
coordenadas x y y de la carta*/
void Card::iniciar(char *ruta, int numero) {
    image = load_bitmap(ruta, NULL);
    this->numero = numero;
    ancho = 71;
    alto = 96;
}

void Card::setCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

void Card::pintar(BITMAP *buffer) {
    masked_blit(image, buffer, 0, 0, x, y, ancho, alto);
}

//variables sub1 son de el cursor, variables sub dos seran de las cartas
//w1 = 13, h1 = 22

//drag and drop
void Card::mover() {
    if(colision(mouse_x, mouse_y, 13, 22, x, y, ancho, alto)) {
        if(mouse_b & 1) {
            x = mouse_x - 36;
            y = mouse_y - 90;
        }
    }
}

