#include <iostream>
#include <fstream>
#include <string>
#include <cmath>  // Para usar M_PI e outras funções matemáticas
#include <stdio.h>
#include <sstream> // necessário para istringstream

using namespace std;

int main() {
    ifstream arquivo("arquivodousuario");  // Abrir o arquivo: arquivodousuario

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    string tipoFigura;
    double areaTotal = 0, volumeTotal = 0; //usa o double para ter uma precisão maior nos decimais

    while (arquivo >> tipoFigura) {
        
        // Se ele encontra a palavra "fim", interrompe o loop
        if (tipoFigura == "fim") {
            break;
        }
        
        
        if (tipoFigura == "Quadrado") {
            int lado;
            arquivo >> lado;  // Lê o lado
            double areaQuadrado;
            areaQuadrado = lado * lado;
            areaTotal += areaQuadrado;

        } else if (tipoFigura == "Triangulo") {
            int base, altura;
            arquivo >> base;  // Lê a base
            arquivo >> altura;  // Lê a altura
            double areaTriangulo;
            areaTriangulo = (base * altura) / 2.0;
            areaTotal += areaTriangulo;

        } else if (tipoFigura == "Cilindro") {
            int raio, altura;
            arquivo >> raio;  // Lê o raio
            arquivo >> altura;  // Lê a altura
            double areaCilindro;
            areaCilindro = 2 * M_PI * raio * (raio + altura);
            areaTotal += areaCilindro;
            double volumeCilindro;
            volumeCilindro = M_PI * pow(raio, 2) * altura;
            volumeTotal += volumeCilindro;

        } else if (tipoFigura == "Paralelepipedo") {
            int comprimento, altura, largura;
            arquivo >> comprimento;  // Lê o comprimento
            arquivo >> altura;  // Lê a altura
            arquivo >> largura;  // Lê a largura
            double areaParalelepipedo;
            areaParalelepipedo = 2 * (comprimento * altura + comprimento * largura + altura * largura);
            areaTotal += areaParalelepipedo;
            double volumeParalelepipedo = comprimento * altura * largura;
            volumeTotal += volumeParalelepipedo;

        } else if (tipoFigura == "Esfera") {
            int raio;
            arquivo >> raio;  // Lê o raio
            double areaEsfera;
            areaEsfera = 4 * M_PI * pow(raio, 2);
            areaTotal += areaEsfera;
            double volumeEsfera = (4.0 / 3.0) * M_PI * pow(raio, 3);
            volumeTotal += volumeEsfera;
            
        }

        
            
        }
    
    // Exibir o total de áreas e volumes
    cout << "Área total da cena gráfica: " << areaTotal << endl;
    cout << "Volume total da cena gráfica: " << volumeTotal << endl;
    arquivo.close();
    return 0;
}

               


    

    
