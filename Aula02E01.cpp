#include <iostream>
#include <string>

using namespace std;

// A função retorna string* (um ponteiro para uma string)
string* encontrarMusica(int duracoes[], string estilos[], string nomes[], 
                        int quantidade, string estilo, int duracao) {

    for (int i = 0; i < quantidade; i++) {
        // Se achou a música com estilo E duração iguais
        if (estilos[i] == estilo && duracoes[i] == duracao) {
            return &nomes[i]; // Retorna o ENDEREÇO (&) daquela posição
        }
    }

    // Se o loop acabar e não retornar nada, significa que não achou
    return NULL; 
}

int main() {
    // Declaração correta dos vetores (arrays)
    string nomes[] = {"Redemption Song", "Alien", "Octavarium"};
    int duracoes[] = {4, 3, 24};
    string estilos[] = {"Reggae", "Alternativa", "Metal"};
    int quantidade = 3;

    // Chamada da função e armazenamento do resultado em um ponteiro
    string* resultado = encontrarMusica(duracoes, estilos, nomes, quantidade, "Metal", 24);

    if (resultado != NULL) {
        cout << "Musica encontrada: " << *resultado << endl;
        cout << "Endereco na memoria: " << resultado << endl;
    } else {
        cout << "Musica nao encontrada." << endl;
    }

    return 0;
}
