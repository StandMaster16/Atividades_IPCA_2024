#include <stdio.h>

void imprimirPonteiros(float *inicial, float *final);

int main(){

    float vetor1[5] = {1, 2, 3, 4, 5};
    float vetor2[5] = {0.5, 0.4, 0.3, 0.2, 0.1};
    float vetor3[5] = {10, 20, 30, 40, 50};

    imprimirPonteiros(&vetor1[0], &vetor1[4]);
    imprimirPonteiros(&vetor2[0], &vetor2[4]);
    imprimirPonteiros(&vetor3[0], &vetor3[4]);

    return 0;

}

void imprimirPonteiros(float *inicial, float *final){

    printf("\nEndereço inicial: %d\nEndereço final: %d\n", inicial, final);
    return;

}