#include "Perfil.h"
#include "Postagem.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {

    // a. Crie um objeto Postagem com a legenda "instalacao antivirus"
    //Postagem usando construtor
    Postagem* postagem1 = new Postagem("instalacao antivirus");

    // b. Crie um objeto Video com a legenda "como instalar um antivirus" e duracao 120
    Video* video1 = new Video("como instalar um antivirus", 120);

    // c. Crie um objeto Video com a legenda "tutorial remover virus" e duracao 300
    Video* video2 = new Video("tutorial remover virus", 300);

    //2.a Cria lista
    Lista* lista1 = new Lista("videos mais vistos", 15);

    //2.b Adiciona video 1 e video2 a lista1
    lista1 -> adicionar(video1);
    lista1 -> adicionar(video2);

    // d. Utilize 3 vezes o método assistir do Video "tutorial remover virus", com argumento 170
    for (int i = 0; i < 3; i++) {
        video2->assistir(170);
    }

    // e. Poste todos os objetos criados em um novo Perfil, de nome "tutoriais epicos" e maximo 10
    Perfil* perfil = new Perfil("tutoriais epicos", 10);
    //2.c Posta lista1 no perfil
    perfil->postar(lista1);

    // 2.d. Imprima a Lista e o Perfil; 
  perfil -> imprimir();
  lista1 -> imprimir();
  cout << endl;
   
// 2.e. Destrua o Perfil", instalacao antivirus", "como instalar um virus" e "tutorial remover virus";
    delete perfil;
    delete postagem1;
    delete video1;
    delete video2;
};





