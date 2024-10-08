#include <stdio.h>
#include <math.h>

int main(){

    double num, frac, inteira;
    printf("Digite um numero real e te direi a parte inteira e a fracionada\n");
    scanf("%lf", &num);
    frac = modf(num, &inteira);
    printf("Parte inteira = %.0lf, parte fracionada = %.2lf", inteira, frac);
    return 0;
    
}