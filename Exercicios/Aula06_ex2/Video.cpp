#include "Video.h"



// a. Construtor chamando o construtor da base (Postagem)
Video::Video(string legenda, int duracao) : Postagem(legenda), duracao(duracao) {
}


// c. Destrutor de Video
Video::~Video() {
    cout << "Destrutor de video com " << visualizacoes << " visualizacoes: "
         << legenda << endl;
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
        Postagem::assistir(); 
    }
}