#include <stdio.h>
 
int main(){

    int matriz_a[3][5] = {{2, 4, 6, 8, 10}, {1, 3, 5, 7, 9}, {0, -2, -4, -6, -8}};
    int matriz_b[3][5] = {{5, 7, 9, 11, 13}, {4, 6, 8, 10, 12}, {3, 1, -1, -3, -5}};
    int matriz_soma[3][5];

    for (int i=0; i < 3; i++) for (int j=0; j < 5; j++) matriz_soma[i][j] = matriz_a[i][j]+matriz_b[i][j];
    
    printf("Matriz soma:\n");
    for (int i=0; i < 3; i++){
        for (int j=0; j < 5; j++) printf("%d ", matriz_soma[i][j]);
        printf("\n");
    }

    return 0;
}