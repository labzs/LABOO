#include "Lista.h"
// 1. Construtor
Lista::Lista(string legenda, int tamanho) : Postagem(legenda) {
    this->maximoVideo = tamanho;
    this->quantidadeVideos = 0;
    // Alocação dinâmica do vetor de Videos (cria o vetor de vídeos com tamanho Maximo)
    this->videos = new Video*[maximoVideo];
}

// 2. Destrutor
Lista::~Lista() {
    cout << "Lista com " << quantidadeVideos << " videos destruida" << endl;
    cout << endl;
    delete[] videos; 
}

// a. Getters
Video** Lista::getVideos() { 
    return videos; 
}

int Lista::getQuantidade() { 
    return quantidadeVideos; 
}

// b. Método Adicionar
bool Lista::adicionar(Video* v) {
    // Verifica se há espaço
    if (quantidadeVideos >= maximoVideo) return false;

    // Verifica se o vídeo já existe na lista (evita duplicatas)
    for (int i = 0; i < quantidadeVideos; i++) {
        if (videos[i] == v) return false;
    }

    // Adiciona o ponteiro e incrementa a quantidade
    videos[quantidadeVideos] = v;
    quantidadeVideos++;
    return true;
}

// c. Método Imprimir
void Lista::imprimir() {
    cout << "Lista com " << quantidadeVideos << " videos: " << getLegenda() << endl;
    for (int i = 0; i < quantidadeVideos; i++) {
        cout << "\t" << i + 1 << ". ";
        videos[i]->imprimir(); // Chama o imprimir da classe Video
    }
}
