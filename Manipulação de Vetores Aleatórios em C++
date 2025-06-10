#include <fstream>
#include <iostream>
#include <time.h> //vê as horas pro srand
#include <cstdlib>

using namespace std;

int main() {
    const int Q = 10;
    int tabela[Q];

    //srand(time(NULL));


    cout << "A tabela gerada foi: ";
    for (int i = 0; i < Q; i++) {
        tabela[i] = rand() % (30 - 1 + 1); //seta um intervalo entre numeros, e peg numeros aleatorios
        cout << tabela[i] << " ";
    }

    int opção;
    cout << "\nQual tabela vc quer gerar? (1) / (2) / (3) / (4) ";
    cin >> opção;
    //PARTE 1
    switch (opção) {
        case 1:
            cout << 1 << endl;

            for (int i = 0; i < Q / 2; i++) {
                int n1, n2;
                n1 = tabela[i];
                n2 = tabela[Q - i - 1];

                tabela[i] = n2;
                tabela[Q - i - 1] = n1;
            }
            cout << "\nA tabela da parte 1 gerada foi: ";
            for (int i = 0; i < Q; i++) {
                cout << tabela[i] << " ";
            }
            break;
            //PARTE 2
        case 2:
            cout << 2 << endl;


            int fixo;

            cout << "\n Digite um valor para adicionar a todos os valores da tabela: ";
            cin >> fixo;
            cout << "\nA tabela da parte 2 gerada foi: ";

            for (int i = 0; i < Q; i++) {
                tabela[i] = tabela [i] + fixo;
                cout << tabela[i] << " ";

            }
            break;
            //PARTE 3
        case 3:
            cout << 3 << endl;


            int valor;

            cout << "\n DIgite um valor para adicionar aos numeros não divisiveis por 3: ";
            cin >> valor;
            cout << "\n A tabela da perte 3 gerada foi: ";

            for (int i = 0; i < 10; i++) {
                if (tabela[i] % 3 != 0) {
                    tabela [i] = tabela[i] + valor;
                }
                cout << tabela[i] << " ";
            }
            break;

            //PARTE 4


      case 4:
{
    int excluir, Quant = 0;
    cout << "\nQual numero voce quer excluir do vetor? ";
    cin >> excluir;

    int novoTamanho = 0;
    for (int i = 0; i < Quant; i++) {
        if (tabela[i] != excluir) {
            tabela[novoTamanho++] = tabela[i];
        }
    }

    Quant = novoTamanho;

    cout << "\nVetor atualizado: ";
    for (int i = 0; i < Quant; i++) {
        cout << tabela[i] << " ";
    }
    break;
}




    }

    return 0;
}
