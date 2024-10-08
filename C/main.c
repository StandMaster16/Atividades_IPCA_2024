#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x_pontoA = 0, y_pontoA = 0, x_pontoB = 0, y_pontoB = 0;
    double distancia = 0;

    printf("Diga as coordenadas x e y do ponto A: \n");
    scanf("%d", &x_pontoA);
    scanf("%d", &y_pontoA);
    printf("Agora diga as coordenadas x e y do ponto B: \n");
    scanf("%d", &x_pontoB);
    scanf("%d", &y_pontoB);
    distancia = sqrt(pow((x_pontoA-x_pontoB), 2)+pow((y_pontoA-y_pontoB), 2));
    printf("distancia = %f\n", distancia);
    return 0;
}
