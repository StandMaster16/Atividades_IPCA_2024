#include <stdio.h>
#include <math.h>

int main(){

    int n1, n2, maior, menor, i, fatorial, soma=0;
    
    printf("Digite dois numeros de um intervalo [a,b] e calcularei todos os fatoriais dentro desse intervalo\n");
    scanf("%d %d", &n1, &n2);
    menor = fmin(n1, n2);
    maior = fmax(n1, n2);
    for (i=menor; i<=maior; i++) {
        fatorial = tgamma(i + 1);
        soma = soma + fatorial;
        if (i == maior) printf("%d! = %d", i, soma);
        else printf("%d! + ", i);
    }
    return 0;

}