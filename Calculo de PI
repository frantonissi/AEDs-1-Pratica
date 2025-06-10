#include <iostream>
using namespace std;

int main() {
    int numerodetermos;
    double pi = 0.0;  // Variável para armazenar a aproximação de pi
    int i = 0;  // Inicializa o contador i

    cout << "Quantos termos você quer na série? ";
    cin >> numerodetermos;

    // Loop usando while para calcular a soma da série de Leibniz
    while (i < numerodetermos) {
        // Calcular o denominador como o número ímpar 1, 3, 5, 7, 9, ...
        int denominador = 2 * i + 1;
        
        // Alterna entre somar e subtrair os termos
        if (i % 2 == 0) {
            pi += 1.0 / denominador;  // Soma os termos ímpares
        } else {
            pi -= 1.0 / denominador;  // Subtrai os termos ímpares
        }
        
        // Incrementa o contador i
        i++;
    }

    // Multiplica o valor da soma por 4 para aproximar o valor de pi
    pi *= 4.0;

    // Exibe o valor aproximado de pi
    cout << "Aproximação de pi após " << numerodetermos << " termos é: " << pi << endl;

    return 0;
}
