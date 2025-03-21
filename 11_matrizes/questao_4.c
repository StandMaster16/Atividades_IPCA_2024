#include <stdio.h>

int main(){

    float matriz[3][3], x;
    int localized;

    printf("Digite os elementos da matriz\n");
    for (int i=1; i <= 3; i++){
        for (int j=1; j <= 3; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%f", &matriz[i-1][j-1]);
        }
    }

    printf("\nDigite o valor de X: ");
    scanf("%f", &x);

    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            if (matriz[i][j]== x){
                localized = 1;
                printf("Valor encontrado na linha %d, coluna %d\n", i+1, j+1);
            }
        }
    }
    if (localized == 0) printf("Valor nao encontrado na matriz");
}