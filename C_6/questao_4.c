#include <stdio.h>

int main(){

    int i, j, n;

    printf("Digite o lado do quadrado oco de borda formada por asteristicos\n");
    scanf("%d", &n);
    for (i=0; i<=n; i++){
        if (i==0 || i==n) {
            for (j=0; j<n; j++) printf("*");
            printf("\n");
        } else {
            printf("*");
            for (j=0; j<(n-2); j++) printf(" ");
            printf("*\n");
        }
    }
    return 0;
}