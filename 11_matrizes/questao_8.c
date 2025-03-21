#include <stdio.h>

int multiplicarMatrizes(int n, int m, int p, int q, int matriz_a[n][m], int matriz_b[p][q]);

int main(){

    int n, m, p, q;

    printf("Digite as dimensoes da primeira matriz\nLinhas: ");
    scanf("%d", &n);
    printf("Colunas: ");
    scanf("%d", &m);
    
    int matriz_a[n][m];
    printf("Digite os elementos da primeira matriz (matriz A)\n");
    for (int i=1; i <= n; i++){
        for (int j=1; j <= m; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz_a[i-1][j-1]);
        }
    }

    printf("Digite as dimensoes da segunda matriz\nLinhas: ");
    scanf("%d", &p);
    printf("Colunas: ");
    scanf("%d", &q);

    int matriz_b[p][q];
    printf("Digite os elementos da segunda matriz\n");
    for (int i=1; i <= p; i++){
        for (int j=1; j <= q;){
            printf("Linhas %d, Coluna %d: ", i, j);
            scanf("%d", &matriz_b[i-1][j-1]);
        }
    }

    if (multiplicarMatrizes(n, m, p, q, matriz_a, matriz_b) == 1){
        printf("\nNao é possivel multiplicar as matrizes, pois o numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda");
    } else {
        int matriz_c[m][q];
        for (int i=0; i < m; i++){
            for (int j=0; j < n; j++){
                
            }
        }
    }
}