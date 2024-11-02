#include <stdio.h>

int main(){

    double nota;
    printf("Digite uma nota de 0-100 e classificarei no modelo americano de notas escolares.\n");
    scanf("%lf", &nota);
    if (0 <= nota && nota <= 59) {
        printf("Desempenho insatisfatorio, Nota F");
    } else if (60 <= nota && nota <= 69) {
        printf("Desempenho abaixo da media, Nota D");
    } else if (70 <= nota && nota <= 79) {
        printf("Desempenho satisfatorio, Nota C");
    } else if (80 <= nota && nota <= 89) {
        printf("Desempenho bom, Nota B");
    } else if (90 <= nota && nota <= 100) {
        printf("Desempenho excelente, Nota A");
    } else if (nota > 100 || nota < 0) {
        printf("Nota fora do intervalo 0-100");
    }
    return 0;
}