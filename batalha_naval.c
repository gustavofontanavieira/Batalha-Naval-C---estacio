#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int table[5][5] = {0};  // Inicializa a matriz com zeros

    // FOR DE POSICIONAMENT DE NAVIOS
    for (int i = 0; i < 3; i++) {
        table[i][1] = 1;
    }
    for (int i = 0; i < 3; i++) {
        table[4][i] = 1;
    }

    // Exibir o tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    printf("\nCoordenadas dos navios:\n");
    for (int i = 0; i < 3; i++) {
        printf("Navio vertical: (%d,1)\n", i);
    }
    for (int i = 0; i < 3; i++) {
        printf("Navio horizontal: (4,%d)\n", i);
    }

    printf("============================================================");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int table1[10][10] = {0}; 

    //Posicionando diagonal
    for(int i = 0; i < 3; i++){
            table1[i][i] = 3;
    }
    for(int i = 2; i < 5; i++){
            table1[i][i+4] = 3;
    }

    //posicionando horizontal e vertical
    for(int j = 7; j > 4; j--){
            table1[j][6] = 3;
    }
    for(int j = 3; j < 8; j++){
            table1[9][j] = 3;
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

      printf("\nCoordenadas dos navios:\n");
        for (int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++){
                printf("%d", table1[i][j]);
            }
        printf("\n");
    }
    
    return 0;
}