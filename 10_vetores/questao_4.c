#include <stdio.h>
#define MAX 100

void pares(int p[], int n);

int main() {
    int n;
    printf("Quantidade de termos: ");
    scanf("%d", &n);
    while (n >= MAX) {
        printf("O valor maximo de n é %d. Digite novamente: ", MAX - 1);
        scanf("%d", &n);
    }
    int p[n];
    pares(p, n);
    return 0;
}

void pares(int p[], int n) {
    int i = 0, j = 0;
    while (i < n) {
        printf("Termo %d: ", i);
        scanf("%d", &p[i]);  
        i++;
    }
    printf("\nNumeros pares:\n");
    while (j < n) {
        if ((p[j] % 2) == 0) {
            printf("Index %d: %d\n", j, p[j]); 
        }
        j++;
    }
    return;
}


