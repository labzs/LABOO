#include <iostream>
#include <string>

using namespace std;


string* encontrarMusica(int duracoes[], string estilos[], string nomes[], 
                        int quantidade, string estilo, int duracao) {

    for (int i = 0; i < quantidade; i++) {
        // Se achou a música com estilo E duração iguais
        if (estilos[i] == estilo && duracoes[i] == duracao) {
            return &nomes[i]; 
        }
    }
    return NULL; 
}

//(int* maximo: ponteiro)

int calcularEstatisticas(int duracoes[], int quantidade, int& minimo, int* maximo) {
    minimo = 100000;
    *maximo = 0; //garante que se o vetor estiver vazio, retornar valor minimo e maximo 0
    int soma = 0;
    if (quantidade == 0){
            minimo = 0;
            *maximo = 0;
            soma = 0;
            return soma;
    }  

    for (int i = 0; i < quantidade; i++) {

        if (duracoes[i] < minimo) {
            minimo = duracoes[i];
        }
        if (duracoes[i] > *maximo) {
            *maximo = duracoes[i];
        }
        soma = soma + duracoes[i];
    }
    
    return soma;

}


/*
int main() {
    // Declaração dos vetores (arrays)
    string nomes[] = {"Redemption Song", "Alien", "Octavarium"};
    int duracoes[] = {3,4,24};
    string estilos[] = {"Reggae", "Alternativa", "Metal"};
    int quantidade = 3;

    // Chamada da função e armazenamento do resultado em um ponteiro
    string* resultado = encontrarMusica(duracoes, estilos, nomes, quantidade, "Metal", 4);

    if (resultado != NULL) {
        cout << "Musica encontrada: " << *resultado << endl;
        cout << "Endereco na memoria: " << resultado << endl;
    } else {
        cout << "Musica nao encontrada." << endl;
    }


    // Estatisticas:
    int minimo;
    int maximo;
    int duracao = calcularEstatisticas(duracoes, quantidade, minimo, &maximo);
    
    cout << "Duracao da Playlist: " << duracao << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;
    return 0;
}
*/
