#include "Conteudo.h"

Conteudo::Conteudo(string legenda) : Postagem(legenda) {
}

Conteudo::Conteudo(string legenda)
    : Postagem(legenda),
      visualizacoes(0)
{
}
int Conteudo::getVisualizacoes() {
    return visualizacoes;
}

void Conteudo::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}