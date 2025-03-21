#include <stdio.h>

void inversa(int vetor[], int n);

int main(){

    int n;

    printf("Digite uma sequencia n de numeros e irei imprimir na ordem inversa\n");
    printf("Quantidade de numeros: ");
    scanf("%d", &n);
    while (n >= 100){
        printf("O valor maximo de n é 99 (100 termos)!\n");
        printf("Digite novamente a quantidade\n");
        scanf("%d", &n);
    }
    int vetor[n];
    inversa(vetor, n);
    return 0;
}

void inversa(int vetor[], int n){
    int i, j;
    while (i != n){
        printf("Termo %d: ", i);
        scanf("%d", &vetor[i]);
        i++;
    }
    printf("\n");
    j=n;
    while (j > 0){
        j--;
        printf("index %d: %d\n", j, vetor[j]);
    }
    return;
}