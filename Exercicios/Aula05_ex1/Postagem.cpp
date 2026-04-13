#include "Postagem.h"
using namespace std;


Postagem::Postagem(string legenda) {
    // Usamos o setter para aproveitar qualquer lógica de validação
    setLegenda(legenda);
    
    // IMPORTANTE: Inicialize as visualizações com zero
    this->visualizacoes = 0;
}

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

