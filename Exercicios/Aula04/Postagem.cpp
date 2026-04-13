#include "Postagem.h"
using namespace std;
void Postagem::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}

void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}

string Postagem::getLegenda(){

    return legenda;
}
void Postagem::setLegenda(string leg){
    this-> legenda = leg;
}

int Postagem::getVisualizacoes() {
    return visualizacoes;
}

