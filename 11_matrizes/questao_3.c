#include <stdio.h>

int main(){
    
    int matriz[3][3], k;

    printf("Digite os elementos da matriz\n");
    for (int i=1; i <= 3; i++){
        for (int j=1; j <= 3; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz[i-1][j-1]);
        }
    }

    printf("\nDigite o escalar K: ");
    scanf("%d", &k);

    for (int i=0; i < 3; i++) for (int j=0; j < 3; j++) matriz[i][j] *= k;

    printf("\nMatriz multiplicada\n");
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}