#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_1, num_2;
    float num_3, produto, soma, cubo;
    printf("Digite 2 numeros inteiros quaisquer e 1 numero real quaisquer.\n");
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    scanf("%f", &num_3);
    produto = (2*num_1)*(num_2/2);
    soma = (3*num_1)+num_3;
    cubo = num_3*num_3*num_3;
    printf("%f, %f, %f", produto, soma, cubo );
    return 0;    

}