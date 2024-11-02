#include <stdio.h>
#include <math.h>

int main(){

    double num_1, num_2, a, b, x, diferenca;
    printf("Diga dois números para serem intervalos e um terceiro numero, que verificarei se ele está nesse intervalo.\n");
    scanf("%lf", &num_1);
    scanf("%lf", &num_2);
    scanf("%lf", &x);
    a = fmin(num_1, num_2);
    b = fmax(num_1, num_2);
    if (a <= x && x <= b){
        printf("O numero %.2lf esta entre os valores [%.2lf, %.2lf]\n", x, a, b);
        if (fabs(x - a) < fabs(x - b)) {
            diferenca = fabs(x - a);
            printf("Sendo %.2lf a borda mais proxima, diferenca = %.2lf", a, diferenca);
        } else if (fabs(x - a) == fabs(x - b)){
            diferenca = fabs(x - a);
            printf("O numero %.2lf esta na mesma distancia de [%.2lf, %.2lf], sendo a diferenca = %.2lf", x, a, b, diferenca);
        } else {
            diferenca = fabs(x - b);
            printf("Sendo %.2lf a borda mais proxima, diferenca = %.2lf", b, diferenca);
        }
    } else {
        printf("O numero %.2lf não está nesse intervalo");
    }
    return 0;

}