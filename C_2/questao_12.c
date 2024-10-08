#include <stdio.h>
#include <math.h>

int main(){

    double num, mantissa;
    int expoente;
    printf("Digite um numero e mostrarei a sua mantissa e expoente.\n");
    scanf("%lf", &num);
    mantissa = frexp(num, &expoente);
    printf("Mantissa = %.2lf, expoente = %d, tal que:\n%.2lf * 2^%d = %.2lf.", mantissa, expoente, mantissa, expoente, num);
    return 0;

}