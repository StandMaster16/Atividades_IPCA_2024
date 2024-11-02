#include <stdio.h>

int main(){

    double ir, desconto, salario;
    printf("Diga seu salario e direi o quanto tu paga pro leao\n");
    scanf("%lf", &salario);
    if (salario <= 2259.20) {
        printf("Voce esta isento de imposto de renda");
    } else if (2259.21 <= salario && salario <= 2826.65) {
        desconto = salario*0.075;
        ir = salario - desconto;
        printf("Aliquota = 7,5, Desconto = %.2lf, Salario = %.2lf", desconto, ir);
    } else if (2826.66 <= salario && salario <= 3751.05) {
        desconto = salario*0.15;
        ir = salario - desconto;
        printf("Aliquota = 15, Desconto = %.2lf, Salario = %.2lf", desconto, ir);
    } else if (3751.06 <= salario && salario <= 4664.68) {
        desconto = salario*0.225;
        ir = salario - desconto;
        printf("Aliquota = 22,5, Desconto = %.2lf, Salario = %.2lf", desconto, ir);
    } else if (salario > 4664.68) {
        desconto = salario*0.275;
        ir = salario - desconto;
        printf("Aliquota 27,5, Desconto = %.2lf, Salario = %.2lf", desconto, ir);
    }
    return 0;
}