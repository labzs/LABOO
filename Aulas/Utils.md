funcao(int& a, int b)
O & está fazendo uma passagem por referencia.

Quando faz passagem por referencia, altera a variavel e não só a copia. 

&: endereço, operador lógico 'e', declaração de parâmetro - passagem por referencia.
*: Declaração -ponteiro, multiplicação, desreferenciação.


Compilação 
g++ *.cpp -o ex1

Para rodar
• Escreva no terminal:
 ./ex1

As duas formas de chamar métodos
1. Usando Ponteiros 
Se você criou a postagem com new (como Postagem* p1 = new Postagem("Legenda");), você deve usar o operador ->:

C++
// ✅ Correto para ponteiros
p1->imprimir(); 
2. Usando Objetos Diretos
Se você criou a postagem sem o new (na memória Stack), você usaria o ponto .:

C++
Postagem p1("Legenda");
// ✅ Correto para objetos diretos
p1.imprimir();