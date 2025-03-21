#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;
    int *matriz;

    matriz = (int *)malloc(m * n * sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int valores[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(matriz + i * n + j) = valores[i * n + j];
        }
    }

    printf("Matriz (usando aritmética de ponteiros):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(matriz + i * n + j));
        }
        printf("\n");
    }

    printf("\nMatriz (usando índices):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i * n + j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}