#include <stdio.h>
#include <math.h>
#define EULER 2.71828
#define GRAVIDADE 9.81

int main(){

    double velocidade_inicial, angulo, radianos, coeficiente_resistencia, tempo, x, y;
    printf("Para calcular a trajetoria de um projetil, considerando a resistencia do ar, digite a velocidade inicial, o angulo de lançamento, o coeficiente de resistencia do ar e o tempo no ar.\n");
    printf("Velocidade inicial:\n");
    scanf("%lf", &velocidade_inicial);
    printf("Angulo de lançamento:\n");
    scanf("%lf", &angulo);
    printf("Coeficiente:\n");
    scanf("%lf", &coeficiente_resistencia);
    printf("Tempo:\n");
    scanf("%lf", &tempo);
    radianos = angulo*(M_PI/180);
    x = ((velocidade_inicial*cos(radianos))/coeficiente_resistencia) * (1-pow(EULER, -(coeficiente_resistencia*tempo)));
    y = ((velocidade_inicial*sin(radianos)/coeficiente_resistencia)+(GRAVIDADE/coeficiente_resistencia)*(1-pow(EULER, -(coeficiente_resistencia*tempo)))-(GRAVIDADE*tempo)/coeficiente_resistencia);
    printf("X = %.2lf, Y = %.2lf", x, y);
    return 0;

}