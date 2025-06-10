#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    const int TAMANHO_MAX = 20;
    int vetores[TAMANHO_MAX];
    int tamanho = TAMANHO_MAX;

    srand(time(0)); // Geração de números aleatórios

    // Preenche vetor com números aleatórios entre 0 e 20
    for (int i = 0; i < tamanho; i++) {
        vetores[i] = rand() % 21;
    }

    // Imprime vetor original
    cout << "Vetor original:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << vetores[i] << " ";
    }
    cout << endl;

    // Remover duplicatas
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; ) {
            if (vetores[i] == vetores[j]) {
                // Desloca todos os elementos à esquerda
                for (int k = j; k < tamanho - 1; k++) {
                    vetores[k] = vetores[k + 1];
                }
                tamanho--; // Reduz o tamanho
                // Não incrementa j — precisa verificar o novo valor em j
            } else {
                j++; // Só avança se não houve remoção
            }
        }
    }

    // Imprime vetor sem duplicatas
    cout << "\nVetor sem duplicatas:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << vetores[i] << " ";
    }
    cout << endl;

    return 0;
}
