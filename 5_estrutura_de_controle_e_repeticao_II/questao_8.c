#include <stdio.h>
#include <math.h>

int main(){

    int n, c_oposto, c_adjacente, hipotenusa, a, b, c, i;

    printf("Digite n para o intervalo [1, n] de triangulos retangulos\n");
    scanf("%d", &n);

    for (hipotenusa=1; hipotenusa <= n; hipotenusa++){
        for (c_oposto=1; c_oposto < hipotenusa; c_oposto++){
            for (c_adjacente=c_oposto; c_adjacente < hipotenusa; c_adjacente++){
                a = pow(c_oposto, 2);
                b = pow(c_adjacente, 2);
                c = pow(hipotenusa, 2);
                i++;
                if (a+b == c){
                    printf("Tentativa n.%d\nHipotenusa = %d, c.oposto = %d, c.adjacente = %d\n", i, hipotenusa, c_oposto, c_adjacente);
                }
            }
        }
    }
    return 0;

}