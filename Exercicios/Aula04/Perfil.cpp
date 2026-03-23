#include "Perfil.h"
#include "Postagem.h"
#include <iostream>

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

Perfil: <nome> - <quantidade> postagens - <totalVisualizacoes>
visualizacoes totais 

void Perfil::imprimir() {
    cout << "Perfil:" << nome << "-" << quantidade << "postagens" << getTotalDeVisualizacoes() << "Visualizações totais" << endl;
    if (quantidadePostagens > 0) {
            cout << endl;
            for (int i = 0; i < quantidade; i++) {
                postagens[i]->imprimir(); 
            }
    }
};


