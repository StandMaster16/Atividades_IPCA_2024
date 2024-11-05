#include <stdio.h>
#include <math.h>

int transformer(int);

int main(){
    int x;
    printf("Digite um numero em binario e transformarei em numero do sistema decimal\n");
    scanf("%d", &x);
    printf("O numero %d em decimal é %d", x, transformer(x));
}

int transformer(int x){
    int y=0, i=0, separa_x=x, digito_x=0, num_x=0;
    while(separa_x > 0){
        separa_x /= 10;
        num_x ++;
    }
    separa_x = x;
    for (i=0; i <= (num_x-1); i++){
        digito_x = separa_x%10;
        y += digito_x*pow(2, i);
        separa_x /= 10;
    }
    return y;
}