#include <stdio.h>

int main(){

    int i, j, m, n;

    printf("Digite a largura M e altura N do quadrado formado por X's e O's\n");
    scanf("%d %d", &m, &n);
    for (j=0; j<n; j++){
        if ((j%2)==0){
            i=0;
            while (i<m) {
                printf("X ");
                i++;
                if (i==m) break;
                printf("O ");
                i++;
            }
            printf("\n");
        } else {
            i=0;
            while (i<m) {
                printf("O ");
                i++;
                if (i==m) break;
                printf("X ");
                i++;
            }
            printf("\n");
        }
    }
    return 0;
}