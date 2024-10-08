#include <stdio.h>

int main(){

    double num, maior, menor;
    int i;
    printf("Digite 15 numeros reais e direi o maior e menor\n");
    for (i=1; i < 15; i++){
        scanf("%lf", &num);
        if (i==0){
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    printf("Maior = %.2lf, Menor = %.2lf", maior, menor);
    return 0;

}