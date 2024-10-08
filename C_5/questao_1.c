#include <stdio.h>
#include <math.h>

int main(){

	double y, x, x1, x2, cont = 0;
	int i = 1, e;

	printf("\nDigite um n�mero e eu calcularei a raiz quadrada desse n�mero: ");
	scanf("%f", &y);

    if (y > 0) {
        x = y / 2;
        x1 = x;
        while (1) {
            x2 = x1 - ((pow(x1, 2) - y))/ (2 * x1);
            printf("%.2f", x2);
            cont += x2;
            e = fabs(x2 - x1);
            if (e < 0.1) {
                break;
                printf("%.2f", x1);
            }
        }
    }
    

}