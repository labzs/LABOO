#include "Lista.h"


Lista::Lista(string legenda, int nMaximoVideos)
    : Postagem(legenda),
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

bool Lista::adicionar(Video* video) {
    for (int i = 0; i < quantidadeVideos; i++)
    {
        if (videos[i] == video)
        return false;
    }
    if (quantidadeVideos <= nMaximoVideos) {
        videos[quantidadeVideos] = video;
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
    }
}

Lista::~Lista() {
    cout << "Lista com " << quantidadeVideos << " videos destruida" << endl;
    delete[] videos;
}
