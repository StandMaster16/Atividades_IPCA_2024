#include <stdio.h>

int fat(int);

int main(){
    int num;
    printf("Digite um numero e mostrarei seu valor fatorial\n");
    scanf("%d", &num);
    printf("Fatorial = %d", fat(num));
    return 0;
}

int fat(int n){
    int i, fatorial=1;
    for (i=1; i <= n; i++) fatorial = fatorial*i;
    return fatorial;
}