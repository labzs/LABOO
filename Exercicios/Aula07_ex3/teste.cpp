#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
#include "Lista.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {

//a. Crie 5 vídeos, com legendas “v1”, “v2”, “v3”, “v4”, “v5”, criados nessa mesma ordem e todos com duração 5.

Video* v1 = new Video("v1",5);
Video* v2 = new Video("v2",5);
Video* v3 = new Video("v3",5);
Video* v4 = new Video("v4",5);
Video* v5 = new Video("v5",5);


//b. Crie 2 Listas, de legendas “l1”, “l2” e ambas com tamanho 5.
Lista* l1 = new Lista("l1",5);
Lista* l2 = new Lista("l2",5);


//c. Adicione os vídeos “v1”, “v3” e “v5” na lista com legenda “l1”. Adicione os outros vídeos criados anteriormente na lista “l2”.
l1->adicionar(v1);
l1->adicionar(v3);
l1->adicionar(v5);
l1->imprimir();

l2->adicionar(v2);
l2->adicionar(v4);

//d. Adicione a Lista “l2” em “l1”.
l1->adicionar(l2);

l1->imprimir();
//e. Crie um Perfil de nome “Jorge” e maximo 2.
Perfil* p1 = new Perfil("Jorge",2);

//f. Faça “Jorge” postar “l1”;
p1->postar(l1);



//g. Crie um Perfil a partir de seu construtor sobrecarregado, de nome “Roberto”, com postagens igual ao perfil de nome “Jorge” e de quantidade 1

Perfil* p2 = new Perfil("Roberto",p1->getPostagens(),1);


//h. Imprima o Perfil de nome “Roberto”. 

//p2->imprimir();

};




