#include "Imagem.h"

Imagem::Imagem(string legenda) : Conteudo(legenda){
}

Imagem::~Imagem() {

}

void Imagem::imprimir() {
    cout << "Imagem: " << getLegenda() << " (" << getVisualizacoes() << " visualizacoes)";
}