#include <stdio.h>
#include <math.h>

int main(){

    double num_1, num_2, num_3, maior, menor;
    printf("Digite 3 numeros reais quaisquer\n");
    scanf("%lf", &num_1);
    scanf("%lf", &num_2);
    scanf("%lf", &num_3);
    maior = fmax(fmax(num_1, num_2), num_3);
    menor = fmin(fmin(num_1, num_2), num_3);
    printf("Maior = %.2lf, Menor = %.2lf", maior, menor);
    return 0;

}