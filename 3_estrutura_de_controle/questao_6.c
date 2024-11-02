#include <stdio.h>

int main(){

    double consumo, tarifa;
    int classe;
    printf("Tabela de Categorias\n1- Residencial\n2- Comercial\n3-Industrial.");
    scanf("%d", &classe);
    printf("Digite seu consumo mensal em kWh");
    scanf("%lf", &consumo);
    switch (classe){
        case 1:
            tarifa = consumo*0.6;
            printf("Tarifa = %.2lf reais", tarifa);
            break;
        case 2:
            if (consumo <= 100) {
                tarifa = consumo*0.8;
                printf("Tarifa = %.2lf reais", tarifa);
            } else {
                tarifa = consumo*0.9;
                printf("Tarifa =%.2lf reais", tarifa);
            }
            break;
        case 3:
            if (consumo <= 100) {
                tarifa = consumo*0.7;
                printf("Tarifa = %.2lf reais", tarifa);
            } else {
                tarifa = consumo*0.8;
                printf("Tarifa = %.2lf reais", tarifa);
            }
            break;
    }
}