#include <stdio.h>

int numeroPerfeito = 1;

void lerNumero();
void verificar();

int main(){
    lerNumero();
    verificar();
    return 0;
}

void lerNumero(){
    printf("Digite um numero inteiro e par\n");
    scanf("%d", &numeroPerfeito);
    while (numeroPerfeito%2 != 0){
        printf("Por favor, o numero tem que ser par\n");
        scanf("%d", &numeroPerfeito);
    }
    return;
}

void verificar(){
    int i, soma=0;
    for (i=1; i<numeroPerfeito; i++) if (numeroPerfeito%i == 0) soma = soma + i;
    if (soma == numeroPerfeito) printf("Esse numero é perfeito!");
    else printf("Esse numero nao é perfeito");
    return;
}