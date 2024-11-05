#include <stdio.h>

void transformer(int);

int main() {
    int numero;

    printf("Digite um número decimal e darei ele em binario\n");
    scanf("%d", &numero);
    printf("%d em binario = ", numero);
    transformer(numero);
    return 0;
}

void transformer(int numero) {
    if (numero > 1) {
        transformer(numero/2);
    }
    printf("%d", numero%2);
}
