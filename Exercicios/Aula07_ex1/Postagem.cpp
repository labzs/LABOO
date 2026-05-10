#include "Postagem.h"
using namespace std;


Postagem::Postagem(string legenda) {
    // Usamos o setter para aproveitar qualquer lógica de validação
    setLegenda(legenda);
}

// Destrutor
Postagem::~Postagem() {
 cout << "Destrutor de postagem com " << getVisualizacoes() << " visualizacoes: "
 << getLegenda() << endl;
 cout << endl;
}

void Postagem::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}

void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << getVisualizacoes() << " visualizacoes" << endl;
}

string Postagem::getLegenda(){

    return legenda;
}
void Postagem::setLegenda(string leg){
    this-> legenda = leg;
}

int Postagem::getVisualizacoes() {
    return visualizacoes;
}

// --- Implementação de Video (Subclasse) ---

//INICIALIZAÇÃO DE CONSTRUTOR: 
//Subclasse::Subclasse (<params>) : SuperClasse (<args>) {...}


// a. Construtor chamando o construtor da base (Postagem)
Video::Video(string legenda, int duracao) : Postagem(legenda) {
    this->duracao = duracao;
    this->legenda = legenda;
}
//Destrutor da superclasse é chamado automaticamente ao destruir o objeto da subclass

// c. Destrutor de Video
Video::~Video() {
    cout << "Destrutor de video com " << visualizacoes << " visualizacoes: "<< legenda << endl;
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
        Postagem::assistir(); 
    }
}

// --- Implementação da Subclasse Lista ---

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