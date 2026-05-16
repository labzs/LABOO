#include <iostream> 
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    int Nusp;

public:
    string getNome();
    void setNome(string nome);
    int getNusp();
    void setNusp(int Nusp);
};

void Aluno::setNome(string nome) {
    this->nome = nome;
}

void Aluno::setNusp(int nusp) {
    this->Nusp = nusp;
}

string Aluno::getNome() {
    return nome;
}

int Aluno::getNusp() {
    return Nusp;
}

int main() {
    Aluno *a1 = new Aluno;
    a1->setNome("Lara");
    a1->setNusp(13730110);

    cout << a1->getNome() <<endl;
    cout<< a1->getNusp() <<endl;
    return 0;

}