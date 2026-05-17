#include "Postagem.h"
using namespace std;


Postagem::Postagem(string legenda) {
    // Usamos o setter para aproveitar qualquer lógica de validação
    setLegenda(legenda);
}

// Destrutor
Postagem::~Postagem() {
 cout << "Destrutor de postagem com " << getVisualizacoes() << " visualizacoes: "
 << getLegenda() << endl;
 cout << endl;
}

void Postagem::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}

void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << getVisualizacoes() << " visualizacoes" << endl;
    cout << endl;
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

