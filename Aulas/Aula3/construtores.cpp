#include <iostream>


using namespace std;

class Residencia {

}

class Sensor {
public:
    Sensor(int numero, Residencia *r);
    void detectarAcao();

    int getNumero();

private:
    int numero;
    Residencia *residencia;
};


Sensor::Sensor (int numero, Residencia *r) :
numero(numero), residencia(residencia) {

}

int main() {

    Sensor *s1 = new Sensor(1, NULL);
    Sensor *s1 = new Sensor(2, NULL);

    
    return 0;
}