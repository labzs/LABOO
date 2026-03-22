#include <iostream>
#include <string>

// MÉTODOS OPERAM SOBRE OS ATRIBUTOS.

using namespace std;
//Declaração da Classe
class Postagem {
public: 
  string legenda;  //ATRIBUTO
  int visualizacoes = 0;

  void assistir ();    //MÉTODOS
  void imprimir ();
};

// IMPLEMENTAÇÃO DOS MÉTODOS DA CLASSE POSTAGEM

void Postagem::assistir() {
    visualizacoes++; // Incrementa o valor atual em 1
}

void Postagem::imprimir() {
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}

class Perfil {
public:
  string nome;
  Postagem* p1 = NULL;
  Postagem* p2 = NULL;
  int quantidade = 0;

  int getTotalDeVisualizacoes();
  bool postar(Postagem* p);
};

// IMPLEMENTAÇÃO OS METODOS DA CLASSE PERFIL
int Perfil::getTotalDeVisualizacoes() {
    int total = 0;
    if (p1 != NULL) total += p1->visualizacoes;
    if (p2 != NULL) total += p2->visualizacoes;
    return total;
}

bool Perfil::postar(Postagem* p) {
    // 1. Verificar se a postagem já existe no perfil (prevenção de duplicados)
    if (p == p1 || p == p2) {
        return false;
    }

    // 2. Tentar adicionar baseado na quantidade
    if (quantidade == 0) {
        p1 = p;
        quantidade++;
        return true;
    } 
    else if (quantidade == 1) {
        p2 = p;
        quantidade++;
        return true;
    }

    // 3. Se quantidade >= 2, não há mais espaço
    return false;
}

void teste() {
    // Criando postagens
    Postagem post1;
    post1.legenda = "Intro Faroeste Caboclo";
    post1.assistir(); // 1 view

    Postagem post2;
    post2.legenda = "Top 10 musicas do Legiao";
    post2.assistir();
    post2.assistir(); // 2 views

    // Criando perfil
    Perfil meuPerfil;
    meuPerfil.nome = "Usuario USP";

    // Testando postagens
    if (meuPerfil.postar(&post1)) cout << "Post 1 publicado!" << endl;
    if (meuPerfil.postar(&post2)) cout << "Post 2 publicado!" << endl;
    
    // Tentando postar a mesma novamente (deve falhar)
    if (!meuPerfil.postar(&post1)) cout << "Erro: Postagem repetida ou Perfil cheio." << endl;

    // Resultados
    post1.imprimir();
    post2.imprimir();
    cout << "Total de Views no Perfil: " << meuPerfil.getTotalDeVisualizacoes() << endl;
}

int main() {
    teste();
    return 0;
}

//*/
