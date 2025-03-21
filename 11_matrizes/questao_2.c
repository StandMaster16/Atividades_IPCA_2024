#include <stdio.h>

void somaMatriz(int linhas, int colunas, float matriz_a[linhas][colunas], float matriz_b[linhas][colunas]);

int main(){

    int linhas, colunas;
    printf("Ordem das matrizes\nLinhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    float matriz_a[linhas][colunas], matriz_b[linhas][colunas];

    printf("Digite os elementos da Matriz A\n");
    for (int i=1; i <= linhas; i++){
        for (int j=1; j <= colunas; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%f", &matriz_a[i-1][j-1]);
        }
    }

    printf("Digite os elementos da Matriz B\n");
    for (int i=1; i <= linhas; i++){
        for (int j=1; j <= colunas; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%f", &matriz_b[i-1][j-1]);
        }
    }

    somaMatriz(linhas, colunas, matriz_a, matriz_b);

}

void somaMatriz(int linhas, int colunas, float matriz_a[linhas][colunas], float matriz_b[linhas][colunas]){

    float matrizSoma[linhas][colunas];
    for (int i=0; i < linhas; i++) for (int j=0; j < colunas; j++) matrizSoma[i][j] = matriz_a[i][j]+matriz_b[i][j];
    printf("\nMatriz Soma\n");
    for (int i=0; i < linhas; i++){
        for (int j=0; j < colunas; j++) printf("%.1lf ", matrizSoma[i][j]);
        printf("\n");
    }
}