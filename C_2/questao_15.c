#include <stdio.h>
#include <math.h>

int main(){

    double num_1, num_2, diferença;
    printf("Digite 2 numeros quaisquer e direi a diferenca absoluta entre eles\n");
    scanf("%lf", &num_1);
    scanf("%lf", &num_2);
    diferença = fabs(num_1-num_2);
    printf("Diferenca = %.2lf", diferença);
    return 0;

}