#include <stdio.h>
#define TAMANHO 100

void imprimirInversa(int v[], int tamanho);

int main(){

    int v[TAMANHO], num=0, i=0;
    printf("Quantidade de numeros: ");
    scanf("%d", &num);
    for (i=0; i < num; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    imprimirInversa(v, num);
    return 0;
}

void imprimirInversa(int v[], int tamanho){
    int i;
    for (i=tamanho-1; i>=0; i--){
        printf("%d", v[i]);
    }
}