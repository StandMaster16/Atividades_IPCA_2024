#include <stdio.h>
#include <math.h>

void acharMinMax(int *vetor, int tamanho, int *min, int *max);

int main(){

    int vetor[10] = {15, 23, 7, 42, 9, 31, 56, 78, 11, 29};
    int min, max;
    acharMinMax(vetor, sizeof(vetor)/sizeof(vetor[0]), &min, &max);
    printf("Valor mínimo = %d\nValor máximo = %d", min, max);
    return 0;
}

void acharMinMax(int *vetor, int tamanho, int *min, int *max){

    *min = *max = *vetor;
    for (int i=0; i < tamanho; i++){
        if (*vetor < *min) *min = *vetor;
        if (*vetor > *max) *max = *vetor;
        vetor++;
    }
    return;
}