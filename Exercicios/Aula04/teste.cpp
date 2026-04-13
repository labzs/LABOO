#include "Perfil.h"
#include "Postagem.h"
#include <string>
#include <iostream>

using namespace std;

void teste() {
    // Postagem 1
    Postagem* p1 = new Postagem();
    p1->setLegenda("tocando Raul Seixas"); // Usando o Setter
    
    for(int i = 0; i < 4; i++) {
        p1->assistir(); 
    }

    // Postagem 2
    Postagem* p2 = new Postagem();
    p2->setLegenda("Faroeste Caboclo"); // Usando o Setter
    
    for(int i = 0; i < 2; i++) {
        p2->assistir(); 
    }

    // Perfil
    Perfil* cifraClub = new Perfil();
    cifraClub->setNome("cifra club"); // Usando o Setter
    
    cifraClub->postar(p1);
    cifraClub->postar(p2);

    cifraClub->imprimir();
}