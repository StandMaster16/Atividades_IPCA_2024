#include <stdio.h>
#include <math.h>

int main(){

    double dinheiro, pessoas, divisao, sobra;
    printf("Digite o dinheiro a ser dividido e o numero de pessoas.\n");
    scanf("%lf", &dinheiro);
    scanf("%lf", &pessoas);
    divisao = floor((dinheiro/pessoas));
    sobra = fmod(dinheiro, pessoas) *100;
    printf("Serao %.2lf reais para cada, sobrando %.2lf centavos", divisao, sobra);
    return 0;

}