#include "Video.h"
#include "Conteudo.h"

double Video::percentualReferencia = 0.5;

// a. Construtor chamando o construtor da base (Postagem)
Video::Video(string legenda, int duracao) : Conteudo(legenda), duracao(duracao) {
}


// c. Destrutor de Video
Video::~Video() {
    cout << "Destrutor de video com " << visualizacoes << " visualizacoes: "
         << legenda << endl;
    cout << endl;
}

int Video::getDuracao() {
    return duracao;
}

// d. Lógica de assistir com base na porcentagem
void Video::assistir(int tempo) {
    // Calcula a porcentagem usando cast para double para não perder precisão
    double porcentagemAssistida = (double)tempo / duracao;

    // Se assistiu 50% ou mais (0.5), incrementa visualização
    if (porcentagemAssistida >= 0.5) {
        //chama o método assistir() da classe pai
        Conteudo::assistir(); 
    }
}

void Video::imprimir() {
    cout << "Video: " << getLegenda() << " (" << duracao << " segundos, " << visualizacoes << " visualizacoes)";
}

void Video::setPorcentagem(double valor) {
    percentualReferencia = valor;
}
double Video::getPorcentagem() {
    return percentualReferencia;
}
