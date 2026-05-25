#include "Postagem.h"
using namespace std;


Postagem::Postagem(string legenda) {
    // Usamos o setter para aproveitar qualquer lógica de validação
    setLegenda(legenda);
}

// Destrutor
Postagem::~Postagem() {
    cout << "Destrutor de postagem: " << legenda << endl;
    cout << endl; 
}

/*void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << getVisualizacoes() << " visualizacoes" << endl;
    cout << endl;
}
*/
string Postagem::getLegenda(){

    return legenda;
}
void Postagem::setLegenda(string leg){
    this-> legenda = leg;
}
/*
int Postagem::getVisualizacoes() {
    return visualizacoes;
}

*/