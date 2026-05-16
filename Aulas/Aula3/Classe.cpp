#include <iostream>

using namespace std;


class Relogio {
public:
    int hora = 0;
    int minuto = 0;
    void imprimir();
};

void Relogio::imprimir() {
    cout << hora << ":" << minuto << endl;
}

class Lampada {
public:
    Relogio *horaDeLigar;
    bool acesa = false;
    void ligar();
    void desligar();
    void imprimir();
    void atualizar(int horaAtual );
};

void Lampada::ligar(){
    acesa= true;
}

void Lampada::desligar(){
    acesa= false;
}
void Lampada::imprimir() {
    cout << acesa << endl;
}

void Lampada::atualizar(int horaAtual) {
    if (horaAtual >= horaDeLigar -> hora) {
        ligar();
        cout << "Ligado as ";
        horaDeLigar->imprimir();
    }
}

int main() {
    Lampada *sala = new Lampada;
    Relogio *r = new Relogio;
    r->hora = 10;
    r->minuto = 05;
    sala->horaDeLigar = r;
    sala->atualizar(9);
    sala->imprimir();


    sala->atualizar(10);
    sala->imprimir();

    return 0;
}