#include <stdio.h>

int main(){

    int n, i, resultado=0;
    printf("Digite um numero e direi se és perfeito\n");
    scanf("%d", &n);
    for (i=1; i<n; i++) {
        if ((n%i == 0)){
            resultado = resultado + i;
        }
    }
    if (resultado == n){
        printf("Esse numero é perfeito!\n");
    } else {
        printf("Esse numero nao é perfeito!\n");
    }
    printf("Trivia: todo numero perfeito é um numero triangular e hexagonal.");
    return 0;
}