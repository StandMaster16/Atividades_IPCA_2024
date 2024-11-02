#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int ano;
    printf("Digite um ano e direi se é bissexto ou nao\n");
    scanf("%d", &ano);
    if (ano % 4 == 0) {
        if (ano % 100 != 0 && ano % 400 == 0) {
            printf("Esse ano é bissexto");
        } else {
            printf("Esse ano não é bissexto");
        }
    } else {
        printf("Esse ano não é bissexto");
    }
    return 0;
}