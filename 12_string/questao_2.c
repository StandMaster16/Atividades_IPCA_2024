#include <stdio.h>

int main(){

    char matriz_carros[5][100];
    double vetor_consumos[5];
    int numero_carro=0;

    printf("Digite o nome de 5 carros\n");

    for (int i=0; i < 5; i++){
        scanf("%100s", matriz_carros[i]);
    }
    
    printf("Digite o consumo (km/litro) de cada carro respectivamente\n");

    for (int i=0; i < 5; i++){
        scanf("%lf", &vetor_consumos[i]);
    }

    double menor_consumo = vetor_consumos[0];

    for (int i=1; i < 5; i++){
        if (vetor_consumos[i] > menor_consumo){
            menor_consumo = vetor_consumos[i];
            numero_carro = i;
        }
    }

    printf("Carro mais economico = %s\n", matriz_carros[numero_carro]);

    printf("Quantidade de litros gastos ao percorrerem mil quilometros\n");
    for (int i=0; i < 5; i++){
        printf("%s = %.2lf\n", matriz_carros[i], (1000/vetor_consumos[i]));
    }
    
}