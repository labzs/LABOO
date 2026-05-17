#include "Perfil.h"
#include "Postagem.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <string>
#include <iostream>

using namespace std;


void teste() {


//a. Crie duas Imagens, de legendas “i1” e “i2”;
    Imagem* i1 = new Imagem("i1");
    Imagem* i2 = new Imagem("i2");


//d. Adicione os objetos criados em a) e b) à Lista;
    l1->adicionar(i1);
    l1->adicionar(i2);



//e. Imprima a seguinte mensagem: “Lista com duracao de <duracao> segundos” sendo “<duracao>” o valor devolvido com pelo método getDuracao de Lista. Pule
    cout << "Lista com " << l1->getVisualizacoesTotais() << " visualizacoes." <<endl;
    cout<< endl;

//f. Delete a Lista, os Videos e a Imagem. 
    delete i1;
    delete i2;
    delete v1;
    delete v2;
    delete l1;

};




