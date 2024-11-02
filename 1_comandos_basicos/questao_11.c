#include <stdio.h>
#include <stdlib.h>

int main(){

    float num_horas, valor_hora, inss, ir, sindicato, salario_bruto, salario_liquido;
    printf("Digite o quanto ganhas por hora e o quanto trabalhas por mes (respectivamente) e te darei umas informaçoes bacanissimas\n");
    scanf("%f", &valor_hora);
    scanf("%f", &num_horas);
    salario_bruto = num_horas*valor_hora;
    ir = salario_bruto*0.11;
    inss = salario_bruto*0.08;
    sindicato = salario_bruto*0.05;
    salario_liquido = salario_bruto - (ir+inss+sindicato);
    printf("Salario bruto = %f, desconto do INSS = %f, desconto do sindicato = %f, salario liquido = %f", salario_bruto, inss, sindicato, salario_liquido);
    return 0;

}