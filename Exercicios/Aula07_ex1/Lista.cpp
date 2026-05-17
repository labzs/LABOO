#include "Lista.h"


Lista::Lista(string legenda, int nMaximoVideos)
    : Conteudo(legenda),
      nMaximoVideos(nMaximoVideos),
      quantidadeVideos(0) 
    {
        this->conteudos = new Conteudo*[nMaximoVideos];
    }



int Lista::getQuantidade() {
    return quantidadeVideos;
}

Conteudos** Lista::getConteudos() {
    return conteudos;
}

bool Lista::adicionar(Conteudo* conteudo) {

    // Verifica se o conteúdo é um vídeo usando dynamic_cast

    Video* video = dynamic_cast<Video*>(conteudo);
    if (video == nullptr) {
        // O conteúdo não é um vídeo, não pode ser adicionado
        return false;
    }
    for (int i = 0; i < quantidadeVideos; i++)
    {
        if (conteudos[i] == video)
        return false;
    }
    if(video->getDuracao() == 0) {
        return false;
    }
    if (quantidadeVideos < nMaximoVideos) {
        conteudos[quantidadeVideos] = video;
        quantidadeVideos++;
        return true;
    }
    else
        return false;
}

void Lista::imprimir() {
    cout << "Lista com " << quantidadeVideos << " conteúdos: " << getLegenda() << endl;

    for (int i = 0; i < quantidadeVideos; i++) {
        cout << "\t" << i+1 << ". ";
        conteudos[i]->imprimir();
        cout << endl;
    }
}

Lista::~Lista() {
    cout << "Lista com " << quantidadeVideos << " conteudos destruida" << endl;
    delete[] conteudos;
    cout << endl;
}
