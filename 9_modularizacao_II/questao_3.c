#include <stdio.h>

void verificador(int, int);

int main(){
    int x, y;
    printf("Digite dois numeros e verificarei se o segundo (y) corresponde aos ultimos digitos do primeiro (x)\n");
    scanf("%d %d", &x, &y);
    verificador(x, y);
    return 0;
}

void verificador(int x, int y){
    int i, correto=0, digito_x, digito_y, num_y=0, separa_x=x, separa_y=y;
    while(x<=0 || y<=0 || y>x){
        printf("Somente valores inteiros positivos e y precisa ser menor que x!\n");
        scanf("%d %d", &x, &y);
    }
    while (separa_y > 0){
        digito_x = separa_x%10;
        digito_y = separa_y%10;
        separa_x /= 10;
        separa_y /= 10;
        num_y ++;
        correto = (digito_x==digito_y ? correto+1: correto+0);
    }
    if (correto == num_y) printf("Corresponde");
    else printf("Não corresponde");
    return;
}