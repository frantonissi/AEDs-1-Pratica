#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    int figura, area1;

    ofstream arquivo("arquivodousuario"); // arquivodousuario -> nome dele fora do codigo; arquivo -> nome dentro do codigo (variavel)
    if (not arquivo.is_open()) {

        printf("O arquivo não foi aberto");

        return 1;
    }
    figura = -1;

    while (figura != 0) {

        printf("digite 1 pra quadrado // digite 2 para triangulo // digite 3 para cilindro // digite 4 para paralelepipedo // 5 para esfera e 0 para sair ");
        scanf("%d", &figura); //aqui o usuario ira escolher as formas geometricas que ele quer trabalhar e informar suas caracteristicas

        if (figura == 1) {
            int lado;
            printf("Qual a medida do lado? ");
            scanf("%d", &lado);
            arquivo << "Quadrado\t" << lado << "\n";


        } else if (figura == 2) {

            int base, altura;
            printf("Qual a medida da base? ");
            scanf("%d", &base);
            printf ("Qual o valor da altura? ");
            scanf ("%d", &altura);
            arquivo << "Triangulo\t" << base << "\t" << altura << "\n";
            
            
        } else if (figura == 3) {
            int raio, altura;
            printf("Qual é o valor do raio da base? ");
            cin >> raio;
            cout << "Qual o valor da altura? ";
            cin >> altura;
            arquivo << "Cilindro\t" << raio << "\t" << altura << "\n";
            
        } else if (figura == 4){
        
            int comprimento, altura, largura;
            printf("Qual a medida do comprimento? ");
            scanf("%d", &comprimento);
            printf("Qual a medida da altura ? ");
            scanf("%d", &altura);
            cout << "Qual a medida da largura?";
            cin >> largura;
            arquivo << "Paralelepipedo\t" << comprimento << "\t" << altura << "\t" << largura << "\n";
            
        
        } else if (figura == 5){
        int raio;
            printf("Qual a medida do raio da esfera? ");
            scanf("%d", &raio);
            arquivo << "Esfera\t" << raio << "\n";
            
            
        

    }


        } if (figura == 0){
        
            arquivo << "fim"; //esa parte é para adicionar o fim para no seguinte codigo interromper
        
        }
        
    arquivo.close();
    return 0;
}
