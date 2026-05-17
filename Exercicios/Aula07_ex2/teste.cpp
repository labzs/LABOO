#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
#include "Lista.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {

   //
   // a. Crie 3 Conteudos, com legendas “c1” (assista 1 vez), “c2” (assista 2 vezes) e “c3” (assista 3 vezes) criados nessa mesma ordem;
    Conteudo* c1 = new Conteudo("c1");
    Conteudo* c2 = new Conteudo("c2");
    Conteudo* c3 = new Conteudo("c3");

    for (int i = 0; i < 1; i++) {
        c1->assistir();
    }
     for (int i = 0; i < 2; i++) {
        c2->assistir();
    }
    for (int i = 0; i < 3; i++) {
        c3->assistir();
    }

   // b. Crie 1 Video, com legenda “v1” e duracao 5 (assista 4 vezes, com o argumento

   Video* v1 = new Video("v1", 5);
    for (int i = 0; i < 4; i++) {
          v1->assistir(4); 
     }

    //c. Crie 1 Lista, de legenda “l1” e com tamanho 5.
        Lista* l1 = new Lista("l1", 5);
    
    //d. Adicione os Conteudos (incluindo o Video) à Lista, na ordem em que foram criados;
        l1->adicionar(c1);
        l1->adicionar(c2);
        l1->adicionar(c3);
        l1->adicionar(v1);

// e. Imprima a Lista;
     l1->imprimir();
//f. Delete os Conteudos, o Video e, por fim, a Lista.
     delete c1;
     delete c2;
     delete c3;
     delete v1;
     delete l1;

};




