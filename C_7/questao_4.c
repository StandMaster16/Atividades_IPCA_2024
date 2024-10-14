#include <stdio.h>

int main(){

    int n1, n2, i, digito, soma=0;

    scanf("%d", &n1);
    n2 = n1;
    while (n1 > 0){
        digito = n1 % 10;
        n1 = n1 / 10;
        soma = soma + digito;
        i++;
    }
    if (n2%soma == 0) printf("%d é um numero de Harshad, pois é divisivel pela soma (%d) de seus digitos", n2, soma);
    else printf("%d nao é um numero de Harshad", n2);
    return 0;
}