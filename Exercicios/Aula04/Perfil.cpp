#include "Perfil.h"
#include "Postagem.h"


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
/*
void Perfil::imprimir() {
    cout << "Perfil:" << nome << "-" << quantidade << "postagens" << getTotalDeVisualizacoes() << "Visualizações totais" << endl;
    if (quantidade > 0) {
            cout << endl;
            if (p1 != NULL) 
            p1->imprimir();           
            }
};*/

void Perfil::imprimir() {
    // 1. Cabeçalho do Perfil
    cout << "Perfil: " << nome << " - " << quantidade << " postagens - " 
         << getTotalDeVisualizacoes() << " visualizacoes totais" << endl;

    // 2. Verificação de conteúdo
    if (quantidade > 0) {
        if (p1 != nullptr) { 
            // Chamamos o método imprimir() diretamente do objeto p1
            p1->imprimir(); 
            cout << endl;
        }
        if (p2 != nullptr) { 
            // Chamamos o método imprimir() diretamente do objeto p2
            p2->imprimir(); 
            cout << endl;
        }
    } 
    else {
        cout << "Nenhuma postagem para exibir." << endl;
    }
 }
