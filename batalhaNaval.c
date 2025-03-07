#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio

void posicionarNavios(int tabuleiro[10][10]){
    // Declaração do vetores que representam os dois navios
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    // Posicionamento inicial dos navios
    int linhaNavio1 = 8, colunaNavio1 = 7; // Horizontal (---)
    int linhaNavio2 = 2, colunaNavio2 = 2; // Vertical (|)
    int linhaNavio3 = 0, colunaNavio3 = 4; // Diagonal crescente (\)
    int linhaNavio4 = 7, colunaNavio4 = 4; // Diagonal decrescente (/)

    int sobreposicao = 0;

    // Verifica sobreposição considerando todo o espaço ocupado pelos navios
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((linhaNavio1 == linhaNavio2) && (colunaNavio1 == colunaNavio2) || (linhaNavio3 == linhaNavio4) && (colunaNavio3 == colunaNavio4)) {
                printf("Os navios estão sobrepondo-se! Modifique as coordenadas\n");
                sobreposicao = 1;
                break;
            }
        }
        if (sobreposicao){
            break;
        } 
    }

    // Se não houver sobreposição, posiciona os navios
    if (!sobreposicao) {
        // Posiciona horizontalmente (----) (navio1)
        if (colunaNavio1 + 2 < 10){
            printf("===Coordenadas das partes do navio1===\n");
            for (int i = 0; i < 3; i++) {
                int coordenadaColuna = colunaNavio1 + i; //Armazena a coordenada das partes do barco nas colunas da matriz
                tabuleiro[linhaNavio1][coordenadaColuna] = navio1[i]; // Posiciona o navio1 horizontalmente
                printf("Coordenadas: linha = %d - Coluna = %d\n", linhaNavio1, coordenadaColuna); //Imprime as coordenadas da matriz
            }
        }
        
        // Posiciona verticalmente (|) (navio2)
        if (linhaNavio2 + 2 < 10){
            printf("\n===Coordenadas das partes do navio2===\n");
            for (int i = 0; i < 3; i++) {
                int coordenadaLinha = linhaNavio2 + i; //Armazena a coordenada das partes do barco nas linhas da matriz
                tabuleiro[coordenadaLinha][colunaNavio2] = navio2[i]; //Posiciona o navio2 verticalmente
                printf("Coordenadas: linha = %d - Coluna = %d\n", coordenadaLinha, colunaNavio2); //Imprime as coordenadas da matriz
            }
        }
       
        // Posicionamento diagonal crescente (\) (navio3)
        if (linhaNavio3 + 2 < 10 && colunaNavio3 + 2 < 10) {
            printf("\n===Coordenadas das partes do navio3===\n");
            for (int i = 0; i < 3; i++) {
                int coordenadaLinha = linhaNavio3 + i; //Armazena a coordenada das partes do barco nas linhas da matriz
                int coordanadaColuna = colunaNavio3 + i; //Armazena a coordenada das partes do barco nas colunas da matriz
                tabuleiro[coordenadaLinha][coordanadaColuna] = navio3[i]; //Posiciona o navio3 na diagonal crescente
                printf("Coordenadas: linha = %d - Coluna = %d\n", coordenadaLinha, coordanadaColuna); //Imprime as coordenadas da matriz
            }
        }

        // Posicionamento diagonal decrescente (/) (navio4)
        if (linhaNavio4 + 2 < 10 && colunaNavio4 - 2 >= 0) {
            printf("\n===Coordenadas das partes do navio4===\n");
            for (int i = 0; i < 3; i++) {
                int coordenadaLinha = linhaNavio4 + i; //Armazena a coordenada das partes do barco nas linhas da matriz
                int coordanadaColuna = colunaNavio4 - i; //Armazena a coordenada das partes do barco nas colunas da matriz
                tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = navio4[i]; //Posiciona o navio4 na diagonal decrescente
                printf("Coordenadas: linha = %d - Coluna = %d\n", coordenadaLinha, coordanadaColuna); //Imprime as coordenadas da matriz
            }
        }   
    }
}
int main()
{
    // Declaração da matriz 10x10 que irá representar o tabuleiro
    int tabuleiro[10][10];

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

    posicionarNavios(tabuleiro);

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