#include "Lista.h"


Lista::Lista(string legenda, int nMaximoVideos)
    : Conteudo(legenda),
      nMaximoVideos(nMaximoVideos),
      quantidadeVideos(0) 
{
    
    videos = new Video*[nMaximoVideos];

}

int Lista::getQuantidade() {
    return quantidadeVideos;
}

Video** Lista::getVideos() {
    return videos;
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
        if (videos[i] == video)
        return false;
    }
    if(video ->getDuracao() < 0) {
        return false;
    }
    if (quantidadeVideos < nMaximoVideos) {
        videos[quantidadeVideos] = video;
        quantidadeVideos++;
        return true;
    }
    else
        return false;
}

void Lista::imprimir() {
    cout << "Lista com " << quantidadeVideos << " videos: " << getLegenda() << endl;

    for (int i = 0; i < quantidadeVideos; i++) {
        cout << "\t" << i+1 << ". ";
        videos[i]->imprimir();
        cout << endl;
    }
}

Lista::~Lista() {
    cout << "Lista com " << quantidadeVideos << " videos destruida" << endl;
    delete[] videos;
    cout << endl;
}
