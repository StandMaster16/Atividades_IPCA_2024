#include <stdio.h>

int main(){

    int i, j;

    printf("Tabela de multiplicação\n");
    for (i=1; i<11; i++){
        for (j=1; j<11; j++){
            printf("%d x %d = %d\n", i, j, i*j);
            if (j == 10) {
                printf("\n");
            }
        }
    }
    return 0;

}