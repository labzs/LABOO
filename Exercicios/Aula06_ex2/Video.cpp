#include "Video.h"

double Video::percentAssistido = 0.5;

// a. Construtor chamando o construtor da base (Postagem)
Video::Video(string legenda, int duracao) : Postagem(legenda), duracao(duracao) {
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

    if (porcentagemAssistida >= percentAssistido) {
        //chama o método assistir() da classe pai
        Postagem::assistir(); 
    }
}

 void Video::setPorcentagem(double valor){
    percentAssistido = valor;
 }
 double Video::getPorcentagem() {
    return percentAssistido;
 }