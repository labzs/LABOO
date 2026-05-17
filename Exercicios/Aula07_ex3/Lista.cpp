#include "Lista.h"
#include "Video.h"


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

Conteudo** Lista::getConteudos() {
    return conteudos;
}

bool Lista::adicionar(Conteudo* conteudo) {

    // Verifica se o conteúdo é um vídeo usando dynamic_cast

    Video* video = dynamic_cast<Video*>(conteudo);
    if (video == nullptr) {
        conteudos[quantidadeVideos] = conteudo;
        quantidadeVideos++;
        return false;
    }
    for (int i = 0; i < quantidadeVideos; i++)
    {
        if (conteudos[i] == video)
        {
            return false;
        }
    }
    if(video ->getDuracao() < 0) {
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
    cout << "Lista com " << quantidadeVideos << " conteudos: " << getLegenda() << endl;

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
bool Lista::adicionar(Lista* lista) {

    if (lista == nullptr)
        return false;

    int novosVideos = 0;

    // Conta quantos realmente precisariam ser adicionados
    for (int i = 0; i < lista->getQuantidade(); i++) {

        Conteudo* conteudo = lista->conteudos[i];

        Video* video = dynamic_cast<Video*>(conteudo);

        if (video == nullptr)
            continue;

        bool jaExiste = false;

        for (int j = 0; j < quantidadeVideos; j++) {
            if (conteudos[j] == video) {
                jaExiste = true;
                break;
            }
        }

        if (!jaExiste)
            novosVideos++;
    }

    // Verifica espaço ANTES de adicionar qualquer um
    if (quantidadeVideos + novosVideos > nMaximoVideos)
        return false;

    bool adicionou = false;

    // Agora adiciona
    for (int i = 0; i < lista->getQuantidade(); i++) {

        Video* video =
            dynamic_cast<Video*>(lista->conteudos[i]);

        if (video == nullptr)
            continue;

        if (adicionar(video))
            adicionou = true;
    }

    return adicionou;
}

int Lista::getDuracaoTotal() {
    //Conteudo** conteudos = getConteudos(); //Cria um vetor de conteudos que recebe a lista de videos

    int duracaoTotal = 0;
    for (int i = 0; i < quantidadeVideos; i++) {
        Video* video = dynamic_cast<Video*>(conteudos[i]);
        if (video != nullptr) {
            int duracaoVideo = video->getDuracao();
            duracaoTotal += duracaoVideo;
        }
    }
    return duracaoTotal;

}