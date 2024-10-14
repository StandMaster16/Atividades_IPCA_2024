#include <stdio.h>
#include <stdlib.h>

int main(){

    int player_n, comp_n, max=100, min=0, confirm, i=1;

    printf("Digite um numero que uma IA irá tentar adivinhar-lo\n");
    scanf("%d", &player_n);
    while (confirm != 99) {
        comp_n = (rand() % (max-min+1)) + min;
        printf("O numero é %d?\n", comp_n);
        printf("Não, menos (a)\nNão, mais (b)\nSim, está correto (c)\n");
        scanf(" %c", &confirm);
        if (confirm == 97) {
            max = comp_n - 1;
        } else if (confirm == 98) {
            min = (comp_n + 1);
        } else if (confirm == 99) {
            printf("Acertei! O numero é %d", comp_n);
            break;
        } else {
            scanf(" %c", &confirm);
        }
    }



}