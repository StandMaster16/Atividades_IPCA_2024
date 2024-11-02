#include <stdio.h>
#include <locale.h>

int peso=0, semanasGestacao=0;

void lerPesoSemanas();
void verificar();
 
int main(){
    setlocale(LC_ALL, "portuguese");
    lerPesoSemanas();
    verificar();
    return 0;
}

void lerPesoSemanas(){
    printf("Digite o peso do feto (em gramas) e a quantidade de semanas da gestação (respectivamente)\n");
    scanf("%d %d", &peso, &semanasGestacao);
    return;
}

void verificar(){
    if (peso < 100 || semanasGestacao < 28) printf("Parto não deverá ser realizado, reavaliar clinicamente");
    else if (peso >= 2500 && (semanasGestacao/4) >= 7) printf("Parto normal");
    else if (peso >= 2500 && (semanasGestacao/4) <= 7) printf("Parto Cesariana");
    else if (1500 <= peso && peso <= 2000 && (semanasGestacao/4) >= 9) printf("Parto normal");
    else printf("Parto Cesariana");
    return;
}
