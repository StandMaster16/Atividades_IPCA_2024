#include <stdio.h>
#include <math.h>

int funcao(int *valor1, int *valor2, int *valor3);

int main(){

    int num1, num2, num3;

    printf("Digite 3 valores inteiros quaisquer\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (funcao(&num1, &num2, &num3) == 1){
        printf("Os valores são iguais\n");
    } else {
        printf("Valores ordenados = %d, %d, %d", num1, num2, num3);
    }
    return 0;

}

int funcao(int *valor1, int *valor2, int *valor3){

    int maior, meio, menor;
    if (*valor1 == *valor2 && *valor2 == *valor3){
        return 1;
    } else {
        if (*valor1 > *valor2 && *valor1 > *valor3){
            maior = *valor1;
            if (*valor2 > *valor3){
                menor = *valor3;
                *valor1 = menor;
                *valor3 = maior;
            } else {
                menor = *valor2;
                *valor1 = menor;
                *valor2 = maior;
            }
        } else if (*valor2 > *valor1 && *valor2 > *valor3){
            maior = *valor2;
            if (*valor1 > *valor3){
                meio = *valor1;
                menor = *valor3;
                *valor1 = menor;
                *valor2 = meio;
                *valor3 = maior;
            } else {
                meio = *valor3;
                menor = *valor1;
                *valor1 = menor;
                *valor2 = meio;
                *valor3 = maior;
            }
        } else if (*valor3 > *valor1 && *valor3 > *valor2){
            maior = *valor3;
            if (*valor1 > *valor2){
                meio = *valor1;
                menor = *valor2;
                *valor1 = menor;
                *valor2 = meio;
                *valor3 = maior;
            } else {
                meio = *valor2;
                menor = *valor1;
                *valor1 = menor;
                *valor2 = meio;
                *valor3 = maior;
            }
        }
        return 0;
    }

}