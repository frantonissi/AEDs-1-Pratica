#include <iostream>
#include <fstream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    const int MAX = 10;
    int vetor[MAX];
    int i, valor = 0, tam = 0, vdesejado;
    int adicao = 0;

    // Passo 1: Gerar números aleatórios e escrever no arquivo
    ofstream arquivo_saida("valores");
    if (!arquivo_saida.is_open()) {
        cout << "Erro ao criar arquivo 'valores'.\n";
        return 1;
    }

    srand(time(0));  // Inicializa a semente aleatória

    for (i = 0; i < MAX; i++) {
        int numero_aleatorio = rand() % 100 + 1;  // entre 1 e 100
        arquivo_saida << numero_aleatorio << endl;
    }

    arquivo_saida.close();  // Fecha o arquivo após escrita

    // Passo 2: Leitura do valor a ser somado
    cout << "Qual valor vc quer adicionar aos vetores? ";
    cin >> adicao;

    // Passo 3: Ler os valores do arquivo
    ifstream arquivo_entrada("valores");
    if (!arquivo_entrada.is_open()) {
        cout << "Erro: Arquivo 'valores' não encontrado.\n";
        return 1;
    }

    while (arquivo_entrada >> valor && tam < MAX) {
        vetor[tam] = valor + adicao;
        tam++;
    }
    arquivo_entrada.close();
    for (int i = 0; i < tam / 2; i++) {
        int temp = vetor[i];
    vetor[i] = vetor[tam - 1 -i];
    vetor[tam - 1 - i] = temp;
    // troca os elementos
}

    

    // Exibe o vetor
    cout << "Valores no vetor: ";
    for (i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Busca pelo valor desejado
    cout << "\nDigite o valor desejado: ";
    cin >> vdesejado;

    int primeirapos = -1;
    for (i = 0; i < tam; i++) {
        if (vetor[i] == vdesejado) {
            primeirapos = i;
            break;
        }
    }

    if (primeirapos != -1) {
        cout << "\nA primeira posição do valor " << vdesejado << " está na " << (primeirapos + 1) << "ª posição.\n";
    } else {
        cout << "\nErro, valor não encontrado!" << endl;
        return 0;
    }

    cout << "\nAs posições do valor pedido são: ";
    for (i = 0; i < tam; i++) {
        if (vetor[i] == vdesejado) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;

    return 0;
}
