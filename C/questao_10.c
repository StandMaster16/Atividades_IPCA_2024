#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, peso;
    printf("Digite sua altura e direi o peso ideal que voce deve ter\n");
    scanf("%f", &altura);
    peso = (72.7*altura) - 58;
    printf("O peso ideal seria = %f", peso);
    return 0;

}