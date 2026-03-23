#include "Perfil.h"
#include "Postagem.h"
#include <string>
#include <iostream>

using namespace std;

void teste() {
    Postagem* p1 = new Postagem();
    p1->legenda = "tocando Raul Seixas";
    p1->visualizacoes = 0; 


    for(int i = 0; i < 4; i++) {
        p1->assistir(); 
    }
   // Com o objeto na mão, usar p1.legenda.
   // Com apenas o endereço (ponteiro), você usa a seta.

    Postagem* p2 = new Postagem();
    p2->legenda = "Faroeste Caboclo";
    p2->visualizacoes = 0;

    for(int i = 0; i < 2; i++) {
        p2->assistir(); 
    }

    Perfil* cifraClub = new Perfil();
    cifraClub->nome = "cifra club";
    
    cifraClub->postar(p1);
    cifraClub->postar(p2);

    cifraClub->imprimir();
}
/*
int main() {
    teste();
    return 0;
}
*/