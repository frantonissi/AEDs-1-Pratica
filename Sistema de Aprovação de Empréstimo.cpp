/*
 * File:   main.cpp
 * Author: 2025.1.08.025
 *
 * Created on 25 de março de 2025, 11:25
 */

#include <cstdlib>
#include <stdio.h> //DECLARAÇÃO DAS BIBLIOTECAS
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {


    int IdadeSolic, HistCred, ParcAtraAtualmente, ParcAtra2anos;
    float RendaMensal; //DECLARAÇÃO DAS VARIAVEIS, SENDO INT - INTEIRAS E FLOAT - PONTO FLUTUANTE

    printf("Digite a sua idade: ");
    scanf("%d", &IdadeSolic);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &RendaMensal);

    printf("Quantas parcelas vc tem em atraso atualmente? ");
    scanf("%d", &ParcAtraAtualmente);

    printf("E quantas parcelas vc tem atrasadas nos ultimos 2 anos? ");
    scanf("%d", &ParcAtra2anos);
    
    //ESSES 4 PRINTF SÃO PARA COLETAR INFORMAÇÕES IMPORTANTES DA PESSOA

    printf("Digite 1 caso vc tenha o nome negativado, se não digite 0/ ");
    scanf("%d", &HistCred);

    if (HistCred == 1) {

        printf("Vc não está apto para obter o emprestimo");

    } // ESSE PRINTF E ESSE IF É PARA SABER SE A PESSOA ESTÁ APTA PARA PEGAR O EMPRESTIMO, POR ISSO SE COLOCA A CONDIÇÃO QUE SE FOR 1, O NOME ESTÁ SUJO

    if ((70 >= IdadeSolic and IdadeSolic >= 18) and  (RendaMensal >= 2000)) {

        if (( 5000 >= RendaMensal and RendaMensal >= 2000) and ParcAtraAtualmente <= 2) {

            printf("Vc consegue um emprestimo de baixo valor (5000 reais)");

        }else if (( 10000 >= RendaMensal and RendaMensal >= 5000) and (ParcAtra2anos <= 4 and ParcAtraAtualmente == 0)) {

                printf("Vc consegue um Empréstimo de Médio Valor (até R$ 20.000,00)");
        }else      if (RendaMensal > 10000 and ParcAtra2anos == 0){

                    printf("Vc consegue um Empréstimo de Alto Valor (acima de R$ 20.000,00");
                    
                    // CONDIÇÕES IMPOSTAS PARA SABER A QUAL EMPRESTIMO A PESSOA PODE PEGAR

 
               
            
        }else {
        
            printf("Emprestimo negado"); //RESPOSTA QUE O USUARIO TERÁ CASO NÃO OBEDEÇA AS IMPOSIÇÕES DO SEGUNDO IF (LINHA 44)
        
        }


    } else {

        printf("Emprestimo negado");

    }
    return 0;
}
