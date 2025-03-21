#include <stdio.h>

int main(){

    int vetor[8]={1, 2, 3, 4, 5, 6, 7, 8}, *ponteiro = vetor;

    while (ponteiro <= &vetor[7]){
        printf("\nValor original = %d", *ponteiro);
        printf("\nValor dobrado = %d\n", *ponteiro*2);
        ponteiro++;
    }
    return 0;
}