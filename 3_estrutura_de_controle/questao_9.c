#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    double numero;
    printf("Digite um número e direi se é positivo ou negativo e se é par ou ímpar.\n");
    scanf("%lf", &numero);
    if (numero < 0) {
        printf("O número é negativo, ");
        if (fmod(numero, 2) == 0) {
            printf("e é par");
        } else {
            printf("e é ímpar");
        }
    } else if (numero == 0) {
        printf("Não é positivo nem negativo, é zero (poético),");
        printf("e zero é par.");
    } else {
        printf("O número é positivo, ");
        if (fmod(numero, 2) == 0) {
            printf("e é par");
        } else {
            printf("e é ímpar");
        }
    }
    return 0;
}