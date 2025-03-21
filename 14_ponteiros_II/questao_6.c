#include <stdio.h>

void troca(float *a, float *b);

int main(){

    float a, b;
    printf("Digite dois valores quaisquer (a, b)\n");
    scanf("%f %f", &a, &b);
    troca(&a, &b);
    printf("Valores trocados\na = %.2f\nb = %.2f", a, b);
    return 0;
}

void troca(float *a, float *b){

    float temp = *a;
    *a = *b;
    *b = temp;
    return;
}