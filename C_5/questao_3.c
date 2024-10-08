#include <stdio.h>

int main(){

    int num, pares, impares=0;
    printf("Digite numeros inteiros e no final mostrarei a soma dos pares e dos impares, para finalizar digite um numero maior ou igual a 1000\n");
    while (num < 1000) {
        scanf("%d", &num);
        if (num >= 1000) break;
        if ((num%2) == 0) {
            pares = pares + num;
        } else {
            impares = impares + num;
        }
    }
    printf("Soma de pares = %d, Soma de Impares = %d", pares, impares);
    return 0;
}