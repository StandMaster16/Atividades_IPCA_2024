#include <stdio.h>

void printEverything(int matriz[5][5]);

int main(){

    int matriz[5][5];

    printf("Digite os elementos da matriz 5x5\n");
    for (int i=1; i <= 5; i++) for (int j=1; j <= 5; j++){
        printf("Linha %d, Coluna %d: ", i, j);
        scanf("%d", &matriz[i-1][j-1]);
    }

    printEverything(matriz);

    return 0;
}

void printEverything(int matriz[5][5]){

    int somaLinha4=0, somaLinha2=0;
    printf("\nDiagonal principal\n");
    for (int i=0; i < 5; i++) printf("%d ", matriz[i][i]);
    printf("\n");

    int j=4;
    printf("Diagonal secundaria\n");
    for (int i=0; i < 5; i++) {
        printf("%d ", matriz[i][j]);
        j--;
    }
    
    for (int i=0; i <= 4; i++) somaLinha4 += matriz[3][i];
    printf("\nSoma da linha 4 = %d\n", somaLinha4);

    for (int i=0; i <= 4; i++) somaLinha2 += matriz[1][i];
    printf("Soma da linha 2 = %d\n", somaLinha2);

    printf("Tudo, menos a diagonal principal\n");
    for (int i=0; i < 5; i++){
        for (int j=0; j < 5; j++){
            if (i == j){
                printf("   ");
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return;
}
