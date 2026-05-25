#include "Conteudo.h"

Conteudo::Conteudo(string legenda)
    : Postagem(legenda),
      visualizacoes(0)
{
}

Conteudo::~Conteudo() {
    cout << "Destrutor de conteudo com " << visualizacoes << " visualizacoes: "
         << legenda << endl;
    cout << endl;
}
int Conteudo::getVisualizacoes() {
    return visualizacoes;
}

void Conteudo::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}