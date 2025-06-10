#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    
    int numeros[100];
    int i, opcao;


    inicio: //usado para voltar a paritir do goto
    for (i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> numeros[i];
    }
    cout << "Digite a operaçao que vc deseja ver: (1 para quantidade de ocorrencias); \n(2 - Contar valores dentro de um intervalo); \n(3 - Buscar primeira ocorrencia de um numero); \n(4 - Excluir um valor); \n(5 - inserir um valor); \n(6 - retirar todos os valores repetidos.); (7 - para sair)" << endl; 
    cin >> opcao;

    switch (opcao){
        case 1:{
        int contador = 0, valor;

        cout << "Digite o valor que vc quer procurar: ";
        cin >> valor;

        for (i = 0; i < 100; i++) {
            if (numeros[i] == valor){ // verifica se o valor é igual ao que o usuario digitou
                 //se for igual, ele conta
                contador++; 
            }
        }

        cout << "O número " << valor << " aparece " << contador << " vezes." << endl;
        goto inicio; //ele e todos os outros casos que tem o goto, para voltar a parte de cima do código
        break;
    }
        case 2:{
        int intervalo1, intervalo2, contador2 = 0;
        cout <<"qual é o intervalo que vc quer contar? (ex: 10 20) ";
        cin >> intervalo1 >> intervalo2;

        if (intervalo1 > intervalo2){ // verifica se o intervalo é valido
            cout << "Intervalo inválido. O primeiro numero deve ser menor que o segundo." << endl;
            break;
        }

        if (intervalo1 < intervalo2){

            for (i = 0; i < 100; i++) {
                if (numeros[i] >= intervalo1 && numeros[i] <= intervalo2){// verifica se o numero está dentro do intervalo
                    //se estiver dentro do intervalo, ele conta
                    contador2++;
                }
            }
            cout << "Existem " << contador2 << " numeros dentro do intervalo [" << intervalo1 << ", " << intervalo2 << "]" << endl;
        }
        goto inicio;
        break;
    }

    case 3:{
    int valor;
    cout << "Qual numero vc quer buscar a primeira ocorrencia? ";
    cin >> valor;

    for (i = 0; i < 100; i++) {
        if (numeros[i] == valor){ // verifica se o numero é igual ao que o usuario digitou

            cout << "O número " << valor << " aparece pela primeira vez na posição " << i + 1 << endl;
            break;

        }

    }


    goto inicio;
     break;
}

case 4: {

        int tamanho = 100;

cout << "Digite o valor que vc quer excluir: ";
int valor;  
cin >> valor;

for (i = 0; i < tamanho; i++){
    if (numeros[i] == valor){
        for (int j = i; j < tamanho - 1; j++){// se o valor for igual ao que o usuario digitou, ele vai excluir
            numeros[j] = numeros[j + 1];// ele vai fazer o valor que está na posiçao i, ser igual ao valor que está na posiçao i + 1
        }
        tamanho--; // atualiza tamanho lógico
        i--; // reavalia posição atual, que tem novo valor
    }
}

cout << "Novo vetor: "  << endl;
for (i = 0; i < tamanho; i++) {
    cout << numeros[i] << " ";
}
cout << endl;
            goto inicio;
            break;


    }
    case 5: {

        cout << "Digite o valor que vc quer inserir: ";
        int valor;
        cin >> valor;

        cout << "Digite a posiçao que vc quer inserir: ";
        int posicao;
        cin >> posicao;

        if (posicao < 1 || posicao > 100) {
            cout << "Posição inválida. Deve ser entre 1 e 100." << endl;// verifica se a posiçao é valida
        

    } else {

        for (i = 99; i > posicao - 1; i--) {// verifica se a posiçao é valida
            //se a posiçao for valida, ele vai fazer o valor que está na posiçao i, ser igual ao valor que está na posiçao i - 1
            numeros[i] = numeros[i - 1];
        }
        numeros[posicao - 1] = valor;

        cout << "Novo vetor: " << endl;
        for (i = 0; i < 100; i++) {// imprime o vetor
            cout << numeros[i] << " ";
        }
        cout << endl;

    }
    goto inicio;
    break;
}

    case 6: {
      int tamanho = 100;
        for (i = 0; i < tamanho; i++){
            int valor = numeros[i];
            int vezes = 0;

            for (int j = 0; j < tamanho; j++){

                if (numeros[j] == valor){
                    vezes++;
                }

                if (vezes > 1) {
                    int k = 0;
                    while ( k < tamanho){
                        if (numeros[k] == valor){

                            for (int j = k; j < tamanho - 1; j++){
                                numeros[j] = numeros[j + 1];

                            }
                            tamanho--; // atualiza tamanho lógico
                        } else {
                            k++;
                        }
                        
                    }
                }
                i--; // reavalia posição atual, que tem novo valor

            }



        }

        cout << "Vetor sem repetidos: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
        goto inicio;
    break;


            }
    

            case 7: {
                cout << "Exito na saida do programa." << endl;//para sair do programa
                break;
            }

    
}
    return 0;
 }
