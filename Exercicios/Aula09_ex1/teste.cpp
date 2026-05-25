#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {
//a. Crie um Video chamado “June Gloom” de duracao 3;
Video* v1 = new Video("June Gloom", 3);
try {
    //b. Tente criar um Video de nome “Science” e duracao -1
    Video* v2 = new Video("Science",-1);
} 

//i. Capture a exceção e imprima na tela a mensagem da exceção, pulando uma linha ao final.
catch (invalid_argument *e) {
    cout  << e->what() <<endl;
    delete e; 
}

//c. Crie uma Lista de nome “Cape God” e tamanho 4
Lista* l1 = new Lista("Cape God",4);

//d. Tente imprimir na tela o valor retornado pelo método getDuracao de “Cape God”
try{
   cout << l1->getDuracao() << endl;
} 
//i. Capture a exceção e imprima na tela a mensagem da exceção, pulando uma linha ao final.
 catch(logic_error *e) {
    cout  << e->what() << endl;
    delete e;}

//e. Adicione “June Gloom” à “Cape God” e imprima a lista
l1->adicionar(v1);
l1->imprimir();

//f. Destrua “Cape God” e “June Gloom”. 
delete l1;
delete v1;


 }




