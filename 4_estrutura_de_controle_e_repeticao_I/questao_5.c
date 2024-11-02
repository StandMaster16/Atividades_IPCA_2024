#include <stdio.h>

int main(){

    int numero, maior, menor, i;

    printf("Digite 20 numeros e direi o maior e menor deles!\n");
    for (i=0; i<20; i++){
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Proibido numero negativo >:(\n");
        } else {
            if (i==0){
                maior = numero;
                menor = numero;
            } else {
                if (numero > maior) {
                    maior = numero;
                }
                if (numero < menor) {
                    menor = numero;
                }
            }
        }
    }
    printf("Maior = %d, Menor = %d", maior, menor);
    return 0;
}