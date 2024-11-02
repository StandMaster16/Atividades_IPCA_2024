#include <stdio.h>

int main(){

    int i, n, soma=0;

    printf("Digite um numero e direi se ele é perfeito\n");
    scanf("%d", &n);
    if (n<0) printf("Esse numero nao é perfeito pois é negativo");
    else {
        for (i=1; i<n; i++) if (n%i == 0) soma = soma + i;
        if (soma == n) printf("Esse numero é perfeito!");
    }
    return 0;
}