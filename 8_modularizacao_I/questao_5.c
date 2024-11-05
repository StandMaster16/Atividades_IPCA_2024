#include <stdio.h>

int fib(int);

int main(){
    int posicao;
    printf("Digite a posicao da sequencia de fibonacci e mostrarei o respectivo numero\n");
    scanf("%d", &posicao);
    printf("Numero = %d", fib(posicao));
    return 0;
}

int fib(int n){
    int num=1, i, num_2=0, num_3;
    if (n == 0) num = 0;
    else if (n == 1 || n == 2) num = 1;
    else {
        for (i=2; i <= n; i++){
            num_3 = num;
            num = num + num_2;
            num_2 = num_3;
        }
    }
    return num;
}