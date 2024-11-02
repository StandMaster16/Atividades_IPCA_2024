#include <stdio.h>

int main(){
    char caractere1, caractere2;
    printf("Digite um caractere minúsculo\n");
    scanf("%c", &caractere1);
    caractere2 = caractere1 - 32;
    printf("A versão maiúscula é: %c", caractere2);
    return 0;
}