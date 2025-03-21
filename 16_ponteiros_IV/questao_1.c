#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vetor, int n);
void maxMin(int *vetor, int n, int *max, int *min);

int main(){

    int n=0, *vetor, max=0, min=0;
    printf("Quantos termos voce vai alocar?\n");
    scanf("%d", &n);
    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    lerVetor(vetor, n);
    maxMin(vetor, n, &max, &min);
    free(vetor);
    printf("Valor max = %d, Valor min = %d", max, min);
    return 0;
}

void lerVetor(int *vetor, int n){

    for (int i=0; i < n; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    return;
}

void maxMin(int *vetor, int n, int *max, int *min){

    *max = vetor[0];
    *min = vetor[0];
    for (int i=0; i < n; i++){
        if (vetor[i] < *min) *min = vetor[i];
        if (vetor[i] > *max) *max = vetor[i];
    }
    return;
}