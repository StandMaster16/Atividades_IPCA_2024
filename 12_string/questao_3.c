#include <stdio.h>
#include <ctype.h>

int main(){

    char data[11], dia[3], mes[3], ano[5];;
    int eh_numerico=0;

    printf("Digite uma data no formato DD/MM/AAAA\n");
    scanf("%10s", data);

    while (data[2] != 47 || data[5] != 47){
        printf("Digite a data corretamente (use o formato DD/MM/AAAA)\n");
        scanf("%10s", data);
    }

    while (!eh_numerico) {
        eh_numerico = 1;
        for (int i = 0; i < 10; i++) {
            if (i != 2 && i != 5 && !isdigit(data[i])) { 
                eh_numerico = 0;
                break;
            }
        }

        if (!eh_numerico) {
            printf("Digite a data corretamente, os valores devem ser números\n");
            scanf("%10s", data);
            while (data[2] != '/' || data[5] != '/') {
                printf("Digite a data corretamente (use o formato DD/MM/AAAA)\n");
                scanf("%10s", data);
            }
        }
    }

    for (int i=0; i < 2; i++){
        dia[i] = data[i];
        mes[i] = data[i+3];
    }
    for (int i=0; i < 5; i++){
        ano[i] = data[i+6];
    }
    printf("%s/%s/%s", dia, mes, ano);
}