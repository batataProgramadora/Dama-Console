// Dama Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#define PRIMEIRA_LETRA 'A'


void printar_espacamento() {
    int espacamento = 50;
    for (int i = 0; i < espacamento; i++)
    {
        std::cout << " ";
    }
}

void construir_velha(std::string** velha_tabuleiro) {
   
    std::string velha_bloco = "|__|__|__|";
    
    char coluna_letras = 'A';
    printar_espacamento();
    for (int i = 1; i <=3; i++)
    {
        std::cout << i << "  ";

    }
    std::cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        printar_espacamento();
        velha_tabuleiro[i] = velha_tabuleiro[i]->append(velha_bloco);
        std::cout << coluna_letras++ << velha_bloco << std::endl;

    }
}

void pegar_input(int& linha,int& coluna) {
    std::string coordendas;
    std::cout << "Digite as coordenadas" << std::endl;
    std::cin >> coordendas;
    linha = static_cast<int>(coordendas[0])-PRIMEIRA_LETRA;
    coluna = coordendas[1]-'0';

    

}
void limpar() {
    system("cls");
}

void inserir_X(int& linha, int& coluna,char** velha_tabuleiro) {
    if (velha_tabuleiro[linha][coluna] != ' ') {
        velha_tabuleiro[linha][coluna] = 'X';
    }

}


bool velha_cheio(const char** velha_tabuleiro) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (velha_tabuleiro[i][j]==' ')
            {
                return false;

            }
            else {
                return true;
            }

        }

    }
}


void jogar(char** velha_tabuleiro) {
    construir_velha();
    int linha = 0;
    int coluna = 0;
    while (!velha_cheio(velha_tabuleiro)) {
        pegar_input(linha, coluna);
    }
}


int main()
{
    char velha_tabuleiro[3][3] = { {' '} };


    
    
}

