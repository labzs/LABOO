#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {


//a. Crie uma lista com nome “Melhores Atores” e tamanho 5
    Lista* l1 = new Lista("Melhores Atores", 5);

//b. Crie duas imagens:
    Imagem* i1 = new Imagem("Tom Cruise");  
    Imagem* i2 = new Imagem("Brad Pitt");

for (int i = 0; i < 3; i++) {
        i1->assistir();
}
for (int i = 0; i < 2; i++) {
        i2->assistir();
}

//c. Crie um vídeo “Entrevista Jim Carrey” com 5 de duração e 0 visualizações
    Video* v1 = new Video("Entrevista Jim Carrey", 5);

//d. Adicione todos os conteúdos na lista na ordem que foram criados.
    l1->adicionar(i1);
    l1->adicionar(i2);
    l1->adicionar(v1);

//e. Crie mais um vídeo:
    Video* v2 = new Video("Momentos Will Smith", 3);
    v2->assistir(2); 
//f. Crie um novo Perfil chamado “Atores de sucesso” com máximo 10 e poste a lista “Melhores atores” e o vídeo “Momentos Will Smith”
    Perfil* p1 = new Perfil("Atores de Sucesso", 10);
    p1->postar(l1);
    p1->postar(v2);
//g. Imprima o perfil “Atores de Sucesso”.
    p1->imprimir();
//h. Destrua o Perfil. 
    delete p1;






};




