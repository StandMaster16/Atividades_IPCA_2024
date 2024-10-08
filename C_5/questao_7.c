#include <stdio.h>
#include <stdlib.h>

int main(){

    double massa_agora, massa_final;
    int segundos;

    printf("Digite a massa do material radioativo\n");
    scanf("%lf", &massa_agora);
    massa_final = massa_agora;

    while (massa_agora >= 0.5){
        massa_agora = massa_agora/2;
        segundos += 50;
    }

    printf("Massa inicial = %.2lf, Massa final = %.2lf\n", massa_agora, massa_final);
    printf("Tempo total: %d horas, %d minutos e %d segundos.", (segundos/3600), ((segundos%3600)/60), (segundos%60));
    return 0;
}