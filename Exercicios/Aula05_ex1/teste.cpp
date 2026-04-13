#include "Perfil.h"
#include "Postagem.h"
#include <string>
#include <iostream>

using namespace std;

void teste() {
//  Perfil* meuPerfil = new Perfil("João", 20); // Nome e capacidade máxima

/*
a. Crie um Perfil de nome "Minhas aves favoritas" e maximoDePostagens 5;
b. Crie três Postagens: "Pombos", "Papagaios" e "Pavoes". Altere, por meio do uso
repetido do método assistir, as quantidades de visualizações das Postagens para
2, 3 e 4, respectivamente;
c. Poste as três postagens em "Minhas aves favoritas" na ordem em que foram
criadas;
d. Imprima o Perfil.
*/
const int vp1 = 2;
const int vp2 = 3;
const int vp3 = 4;

//CRIA PERFIL USANDO CONSTRUTOR
Perfil* perfil1 = new Perfil("Minhas aves favoritas", 5);

//CRIA POSTAGEM USANDO CONSTRUTOR
Postagem* postagem1 = new Postagem("Pombos");
Postagem* postagem2 = new Postagem("Papagaios");
Postagem* postagem3 = new Postagem("Pavoes");

//VISUALIZA POSTAGENS USANDO MÉTODO ASSISTIR
  for(int i = 0; i < vp1; i++) {
        postagem1->assistir(); 
    }

  for(int i = 0; i < vp2; i++) {
        postagem2->assistir(); 
    }
  for(int i = 0; i < vp3; i++) {
        postagem3->assistir(); 
    }

// IMPRIME AS POSTAGENS 
  postagem1 ->imprimir();
  postagem2 ->imprimir();
  postagem3 ->imprimir();

// POSTA POSTAGENS NO PERFIL
perfil1->postar(postagem1);
perfil1->postar(postagem2);
perfil1->postar(postagem3);

// IMPRIME PERFIL
 perfil1 -> imprimir();
}