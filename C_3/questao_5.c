#include <stdio.h>

int main(){

    double dolares, convert;
    int moeda;
    printf("Digite um valor em dolares e farei a cotacao para as moedas: Euro (1), iene (2), libra (3), rublo (4), reais (5) e kwanza (6).\n");
    printf("OBS: cotacao do dia 18/09/2024\n");
    printf("Valor:\n");
    scanf("%lf", &dolares);
    printf("Moeda para conversao (digite o numero):\n");
    scanf("%d", &moeda);
    if (dolares >= 0) {
        switch (moeda) {
            case 1:
                convert = dolares*0.9;
                printf("Valor em euro = %.2lf", convert);
                break;
            case 2:
                convert = dolares*141.77;
                printf("Valor em iene japones = %.2lf", convert);
                break;
            case 3:
                convert = dolares*0.76;
                printf("Valor em libra esterlina = %.2lf", convert);
                break;
            case 4:
                convert = dolares*5.49;
                printf("Valor em real brasileiro = %.2lf", convert);
                break;
            case 5:
                convert = dolares*91.85;
                printf("Valor em rublo russo = %.2lf", convert);
                break;
            case 6:
                convert = dolares*929.5;
                printf("Valor em kwanza angolano = %.2lf", convert);
                break;
            default: printf("Moeda nao suportada");
                     break;
        }
    } else {
        printf("Valor negativo nao suportado");
    }
    return 0;
}