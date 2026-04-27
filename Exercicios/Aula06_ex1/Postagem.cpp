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