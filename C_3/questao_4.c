#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, discriminante, x1, x2;
    printf("Digite os termos A, B e C de uma equacao do segundo grau e direi se possui raiz(es) real(is) ou complexas.\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    discriminante = pow(b, 2) - 4*a*c;
    if (discriminante > 0) {
        x1 = (-b + pow(discriminante, 0.5))/(2*a);
        x2 = (-b - pow(discriminante, 0.5))/(2*a);
        printf("As raizes sao reais, sendo x1 = %.2lf e x2 = %.2lf.", x1, x2);
    } else if (discriminante = 0) {
        x1 = (-b)/(2*a);
        x2 = x1;
        printf("As raizes sao reais e iguais, pois o discriminante = 0, sendo x1 = x2 = %.2lf.", x1);
    } else {
        printf("A equacao nao possui raizes reais.");
    }
    return 0;
    
}