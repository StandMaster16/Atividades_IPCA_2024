#include <stdio.h>

int main(){

    double soma, numerador=1, i, somatotal;

    for (i=1; i<51; i++){
        soma = numerador/i;
        numerador = numerador+2;
        somatotal = somatotal + soma;
    }
    printf("Soma = %.2lf", somatotal);
    return 0;
}