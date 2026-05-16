#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
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

    // d. Utilize 3 vezes o método assistir do Video "tutorial remover virus", com argumento 170
    // Nota: 170/300 = 56.6%, logo cada chamada deve incrementar as visualizações.
    for (int i = 0; i < 3; i++) {
        video2->assistir(170);
    }

    // e. Poste todos os objetos criados em um novo Perfil, de nome "tutoriais epicos" e maximo 10
   
    Perfil* perfil = new Perfil("tutoriais epicos", 10);
    perfil->postar(postagem1);
    perfil->postar(video1);
    perfil->postar(video2);

    // f. Imprima “tutoriais epicos” e a duração de "tutorial remover virus", pulando uma linha
  perfil -> imprimir();
  cout << "Duracao: " << video2 -> getDuracao() << endl;
  cout << endl;
  
 

    // g. Destrua o perfil
    delete perfil;
};




