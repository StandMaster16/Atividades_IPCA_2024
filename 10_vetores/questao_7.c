#include <stdio.h>

float produtoEscalar(int n, float a[], float b[]);

int main(){

    int n;
    printf("Digite a quantidade de elementos dos vetores: ");
    scanf("%d", &n);
    float a[n], b[n];
    printf("Digite os elementos de A\n");
    for (int i=0; i < n; i++){
        scanf("%f", &a[i]);
    }
    printf("Digite os elementos de B\n");
    for (int j=0; j < n; j++){
        scanf("%f", &b[j]);
    }
    printf("Produto escalar de A e B: %.2f", produtoEscalar(n, a, b));
}

float produtoEscalar(int n, float a[], float b[]){
    float produto;
    for (int i=0; i <= n; i++){
        produto += a[i]*b[i];
    }
    return produto;
}