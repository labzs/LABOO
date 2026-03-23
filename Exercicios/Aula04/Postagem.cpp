#include "Posstagem.h"
#include <iostream>

void Postagem::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}

void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}
