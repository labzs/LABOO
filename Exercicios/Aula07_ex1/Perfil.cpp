#include "Perfil.h"
#include "Postagem.h"

/*Accessors (ou getters): para recuperar o valor
 -Prefixo get
 -Não precisa de argumentos
 -Em geral retorna o mesmo tipo do atributo
• Mutators (ou setters): para alterar o valor
 -Prefixo set
 -Não precisa retornar um valor
 -O parâmetro é o valor a ser colocado no atributo*/

// Implementação do Construtor
Perfil::Perfil(std::string nome, int maximo) {
    this->nome = nome;
    this->maximoPostagens = maximo;
    this->quantidade = 0;
    
    // Alocação dinâmica do "array" de ponteiros de Postagem
    this->postagens = new Postagem*[maximo];
}

// Implementação do Destrutor
Perfil::~Perfil() {
  cout << "Destrutor de perfil: " << getNome() << " - " << getQuantidade()  << " postagens" << endl;
 // COMPLETE
 for (int i = 0; i <quantidade; i++) {
     delete postagens[i];
 }
delete[] postagens;
 cout << "Perfil destruido:" << getNome() << endl;
cout << endl;
}

int Perfil::getTotalDeVisualizacoes() {
    //RETORNA O TOTAL DE VISUALIZACOES NAS POSTAGENS, SOMA AS VISUALIZACOES DE CADA POSTAGEM
    int total = 0;
    // Ele vai de postagem em postagem perguntando: "Quantas views você tem?"
    for(int i = 0; i < quantidade; i++) {
        if (postagens[i] != nullptr) {
            // O Perfil lê o resultado do controle feito pelo método assistir()
            total += postagens[i]->getVisualizacoes(); 
        }
    }
    return total;
}
bool Perfil::postar(Postagem* p) {
    // 1. Verificar se a postagem já existe no perfil (prevenção de duplicados)
    for(int i = 0; i < quantidade; i++) {
        if(postagens[i] == p) {

            return false;
        }
    }

    // 2. Tentar adicionar baseado na quantidade
    if (quantidade < maximoPostagens) {
        postagens[quantidade] = p;
        quantidade++;
        return true;

    } 
    // 3. Se quantidade >= maximoPostagens, não há mais espaço
    return false;
}
    

void Perfil::imprimir() {
    // 1. Cabeçalho do Perfil
    cout << "Perfil: " << nome << " - " << getQuantidade() << " postagens - " 
         << getTotalDeVisualizacoes() << " visualizacoes totais" << endl;
    cout << endl;

    // 2. Verificação de conteúdo
    for(int i = 0; i < maximoPostagens; i++) {
        if (postagens[i] != nullptr) { 
            // Chamamos o método imprimir() diretamente do objeto p1
            postagens[i]->imprimir(); 
        }
    }  
 }

  string Perfil::getNome(){
    //RETORNA O NOME DO PERFIL
    return nome;

  }
  void Perfil::setNome(string nome){
    //this aponta pro atributo, que recepe o parâmetro
    this -> nome = nome;

  }
  int Perfil:: getQuantidade(){
    //RETORNA A QUANTIDADE DE POSTAGENS
    return quantidade;
  }
  Postagem** Perfil:: getPostagens(){
    return postagens;
  }