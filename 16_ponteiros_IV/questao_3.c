#include <stdio.h>
#include <stdlib.h>

double **alocarMatriz(int m, int n);
void liberarMatriz(double **matriz, int m);
void preencherMatriz(double **matriz, int m, int n);
void imprimirMatriz(double **matriz, int m, int n, const char *mensagem);
void somarMatrizes(double **matA, double **matB, double **matC, int m, int n);

int main() {
    int m, n;

    printf("Digite o número de linhas (M) e colunas (N) das matrizes: ");
    scanf("%d %d", &m, &n);

    double **matA = alocarMatriz(m, n);
    double **matB = alocarMatriz(m, n);
    double **matC = alocarMatriz(m, n);

    preencherMatriz(matA, m, n);
    preencherMatriz(matB, m, n);

    somarMatrizes(matA, matB, matC, m, n);

    imprimirMatriz(matA, m, n, "Matriz A");
    imprimirMatriz(matB, m, n, "Matriz B");
    imprimirMatriz(matC, m, n, "Matriz C (A + B)");

    liberarMatriz(matA, m);
    liberarMatriz(matB, m);
    liberarMatriz(matC, m);

    return 0;
}

double **alocarMatriz(int m, int n) {
    double **matriz = (double **)malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matriz[i] = (double *)malloc(n * sizeof(double));
    }
    return matriz;
}

void liberarMatriz(double **matriz, int m) {
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void preencherMatriz(double **matriz, int m, int n) {
    printf("Preenchendo a matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(double **matriz, int m, int n, const char *mensagem) {
    printf("%s:\n", mensagem);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(double **matA, double **matB, double **matC, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
}