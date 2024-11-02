#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    char cor;
    printf("Digite o estado atual do semáforo e direi a próxima cor a ser exibida.\n");
    printf("R - Vermelho\nY - Yellow\nG -Verde\n");
    scanf("%c", &cor);
    switch (cor) {
        case 'R':
            printf("A próxima cor é verde");
            break;
        case 'Y':
            printf("A próxima cor é vermelho");
            break;
        case 'G':
            printf("A próxima cor é amarelo");
            break;
    }

}