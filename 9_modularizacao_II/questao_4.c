#include <stdio.h>

void verificador(int, int);

int main(){
    int x, y;
    printf("Digite dois numeros e verificarei se o primeiro (x) é segmento do segundo (y)\n");
    scanf("%d %d", &x, &y);
    verificador(x, y);
    return 0;
}

void verificador(int x, int y){
    int correto=0, digito_x, digito_y, num_x=0, separa_x=x, separa_y=y;
    while(x<=0 || y<=0 || x>y){
        printf("Somente valores inteiros positivos e x precisa ser menor que y!\n");
        scanf("%d %d", &x, &y);
    }
    while (separa_x > 0){
        separa_x /= 10;
        num_x ++;
    }
    separa_x = x;
    while (separa_y > 0){
        digito_x = separa_x%10;
        digito_y = separa_y%10;
        if (digito_x == digito_y){
            correto += 1;
            separa_x /= 10;
            separa_y /= 10;
        } else separa_y /= 10;
    }
    if (correto == num_x) printf("É um segmento");
    else printf("Não é um segmento");
    return;
}