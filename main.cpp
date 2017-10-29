#include <iostream>
#include <allegro.h>
#include <vector>
#include "inicia.h"
#include "card.h"


#define ANCHO 1300
#define ALTO 660

using namespace std;



void shuffle(int shuffled, vector<Card> cards) {
    Card temp;
    int j;
    for(int x = 0; x < shuffled; x++) {
        for(int i = 0; i < 52; i++) {
            j = rand() % 52;
            temp = cards[i];
            cards[i] = cards[j];
            cards[j] = temp;
        }
    }
}

int main() {

    //iniciando allegro
    inicia_allegro(ANCHO, ALTO);
    inicia_audio(190, 190);

    //pantalla
    BITMAP *buffer = create_bitmap(ANCHO, ALTO);

    BITMAP *cursor = load_bitmap("cursor.bmp", NULL);

    //direccion de la carta, numero de carta
    Card carta1;
    carta1.iniciar("Cartas/c01.bmp", 1);
    Card carta2;
    carta2.iniciar("Cartas/c02.bmp", 2);
    Card carta3;
    carta3.iniciar("Cartas/c03.bmp", 3);
    Card carta4;
    carta4.iniciar("Cartas/c04.bmp", 4);
    Card carta5;
    carta5.iniciar("Cartas/c05.bmp", 5);
    Card carta6;
    carta6.iniciar("Cartas/c06.bmp", 6);
    Card carta7;
    carta7.iniciar("Cartas/c07.bmp", 7);
    Card carta8;
    carta8.iniciar("Cartas/c08.bmp", 8);
    Card carta9;
    carta9.iniciar("Cartas/c09.bmp", 9);
    Card carta10;
    carta10.iniciar("Cartas/c10.bmp", 10);
    Card carta11;
    carta11.iniciar("Cartas/c11.bmp", 11);
    Card carta12;
    carta12.iniciar("Cartas/c12.bmp", 12);
    Card carta13;
    carta13.iniciar("Cartas/c13.bmp", 13);
    Card carta14;
    carta14.iniciar("Cartas/d01.bmp", 14);
    Card carta15;
    carta15.iniciar("Cartas/d02.bmp", 15);
    Card carta16;
    carta16.iniciar("Cartas/d03.bmp", 16);
    Card carta17;
    carta17.iniciar("Cartas/d04.bmp", 17);
    Card carta18;
    carta18.iniciar("Cartas/d05.bmp", 18);
    Card carta19;
    carta19.iniciar("Cartas/d06.bmp", 19);
    Card carta20;
    carta20.iniciar("Cartas/d07.bmp", 20);
    Card carta21;
    carta21.iniciar("Cartas/d08.bmp", 21);
    Card carta22;
    carta22.iniciar("Cartas/d09.bmp", 22);
    Card carta23;
    carta23.iniciar("Cartas/d10.bmp", 23);
    Card carta24;
    carta24.iniciar("Cartas/d11.bmp", 24);
    Card carta25;
    carta25.iniciar("Cartas/d12.bmp", 25);
    Card carta26;
    carta26.iniciar("Cartas/d13.bmp", 26);
    Card carta27;
    carta27.iniciar("Cartas/h01.bmp", 27);
    Card carta28;
    carta28.iniciar("Cartas/h02.bmp", 28);
    Card carta29;
    carta29.iniciar("Cartas/h03.bmp", 29);
    Card carta30;
    carta30.iniciar("Cartas/h04.bmp", 30);
    Card carta31;
    carta31.iniciar("Cartas/h05.bmp", 31);
    Card carta32;
    carta32.iniciar("Cartas/h06.bmp", 32);
    Card carta33;
    carta33.iniciar("Cartas/h07.bmp", 33);
    Card carta34;
    carta34.iniciar("Cartas/h08.bmp", 34);
    Card carta35;
    carta35.iniciar("Cartas/h09.bmp", 35);
    Card carta36;
    carta36.iniciar("Cartas/h10.bmp", 36);
    Card carta37;
    carta37.iniciar("Cartas/h11.bmp", 37);
    Card carta38;
    carta38.iniciar("Cartas/h12.bmp", 38);
    Card carta39;
    carta39.iniciar("Cartas/h13.bmp", 39);
    Card carta40;
    carta40.iniciar("Cartas/s01.bmp", 40);
    Card carta41;
    carta41.iniciar("Cartas/s02.bmp", 41);
    Card carta42;
    carta42.iniciar("Cartas/s03.bmp", 42);
    Card carta43;
    carta43.iniciar("Cartas/s04.bmp", 43);
    Card carta44;
    carta44.iniciar("Cartas/s05.bmp", 44);
    Card carta45;
    carta45.iniciar("Cartas/s06.bmp", 45);
    Card carta46;
    carta46.iniciar("Cartas/s07.bmp", 46);
    Card carta47;
    carta47.iniciar("Cartas/s08.bmp", 47);
    Card carta48;
    carta48.iniciar("Cartas/s09.bmp", 48);
    Card carta49;
    carta49.iniciar("Cartas/s10.bmp", 49);
    Card carta50;
    carta50.iniciar("Cartas/s11.bmp", 50);
    Card carta51;
    carta51.iniciar("Cartas/s12.bmp", 51);
    Card carta52;
    carta52.iniciar("Cartas/s13.bmp", 52);

    vector<Card> cards;

    cards.push_back(carta1);
    cards.push_back(carta2);
    cards.push_back(carta3);
    cards.push_back(carta4);
    cards.push_back(carta5);
    cards.push_back(carta6);
    cards.push_back(carta7);
    cards.push_back(carta8);
    cards.push_back(carta9);
    cards.push_back(carta10);
    cards.push_back(carta11);
    cards.push_back(carta12);
    cards.push_back(carta13);
    cards.push_back(carta14);
    cards.push_back(carta15);
    cards.push_back(carta16);
    cards.push_back(carta17);
    cards.push_back(carta18);
    cards.push_back(carta19);
    cards.push_back(carta20);
    cards.push_back(carta21);
    cards.push_back(carta22);
    cards.push_back(carta23);
    cards.push_back(carta24);
    cards.push_back(carta25);
    cards.push_back(carta26);
    cards.push_back(carta27);
    cards.push_back(carta28);
    cards.push_back(carta29);
    cards.push_back(carta30);
    cards.push_back(carta31);
    cards.push_back(carta32);
    cards.push_back(carta33);
    cards.push_back(carta34);
    cards.push_back(carta35);
    cards.push_back(carta36);
    cards.push_back(carta37);
    cards.push_back(carta38);
    cards.push_back(carta39);
    cards.push_back(carta40);
    cards.push_back(carta41);
    cards.push_back(carta42);
    cards.push_back(carta43);
    cards.push_back(carta44);
    cards.push_back(carta45);
    cards.push_back(carta46);
    cards.push_back(carta47);
    cards.push_back(carta48);
    cards.push_back(carta49);
    cards.push_back(carta50);
    cards.push_back(carta51);
    cards.push_back(carta52);

    //a barajar las cartas que he agregado
    //shuffle(20, cards);

    //ahora le voy a asignar coordenadas a las cartas

    for(int i = 0; i < cards.size(); i++) {
        if(i < 4)
            cards[i].setCoordinates(i + 30, i + 30);
        else
            cards[i].setCoordinates(0, 0);
    }

    bool quit = false;

    while(!quit) {
        //limpiar pantalla
        clear_to_color(buffer, 0x000000);
        for(int i = 0; i < cards.size(); i++) {
            cards[i].pintar(buffer);
            cards[i].mover();
        }

        if(mouse_b & 2)
            quit = true;
        masked_blit(cursor, buffer, 0, 0, mouse_x, mouse_y, 13, 22);
        //esto practicamente imprime lo que queremos meter en la pantalla
        blit(buffer, screen, 0, 0, 0, 0, ANCHO, ALTO);
    }
    destroy_bitmap(buffer);
    return 0;
}

END_OF_MAIN () //siempre colocar est
