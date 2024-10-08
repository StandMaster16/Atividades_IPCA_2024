#include <stdio.h>
#include <math.h>

int main(){

	int numero, div=2, i;

	printf("Verificador de primalidade\nDigite o numero a ser verificado\n");
	scanf("%d", &numero);

    for (i=2; i < (numero-1); i++){
        if ((numero % i) == 0)
        {
            div += 1;
        }
    }
    if (div > 2){
        printf("Esse numero nao é primo");
    } else {
        printf("Esse numero é primo");
    }

    return 0;

}