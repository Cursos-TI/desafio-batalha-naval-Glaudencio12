#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Declaração da matriz 10x10 que irá representar o tabuleiro
    int tabuleiro[10][10];

    // Declaração do vetores que representam os dois navios
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    // Declaração do vetor que será utilizado como referêcia de coluna no tabuleiro
    char letras[11] = {' ','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Declaração do vetor que será utilizado como referêcia de linha no tabuleiro
    int linhas[10] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Implementando a matriz com números zeros para representar a água.
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0; 
        }
    }

    // Posicionamento do navio1 no tabuleiro horizontalmente.
    int linhaNavio1 = 6;
    int colunaNavio1 = 3;
    for (int i = 0; i < 3; i++){                                          
        tabuleiro[linhaNavio1][colunaNavio1 + i] = navio1[i]; // Posiciona horizontalmente
    }

     // Posicionamento do navio2 no tabuleiro verticalmente.
     int linhaNavio2 = 2;
     int colunaNavio2 = 3;
     for (int i = 0; i < 3; i++){                                          
        tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i]; // Posiciona verticalmente
     }

    // Emprimindo as letras para fácil identifcação das colunas
    printf("\n======TABULEIRO BATALHA NAVAL======\n");
    for (int i = 0; i < 11; i++){
        printf("%c  ", letras[i]);
    }
    printf("\n");
    
    // Imprimindo o tabuleiro no console
    for (int i = 0; i < 10; i++){
        printf("%d | ", linhas[i]); //Emprime números em cada linha para fácil a indentificação
        for (int j = 0; j < 10; j++){
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
