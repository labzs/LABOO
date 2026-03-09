#include <iostream>

using namespace std;

int soma (int a, int b) {
    int resultado = a + b;
    a++;
    return resultado;

}

int main() {
    int a = 5;
    int b = 6;
    int v[] = {1,2,3};
    int* p1 = v;
    cout << "Valor: " << *(p1) << endl;

    int resultado = soma(a,b);
    cout << resultado << "a: " << a << ", b:" << b;
}