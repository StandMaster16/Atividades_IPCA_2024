#include <stdio.h>

int contador(int, int);

int main(){
    int n, d;
    printf("Digite um numero n qualquer e um numero d que está entre 0 e 9 para ver quantas vezes d aparece em n\n");
    scanf("%d %d", &n, &d);
    printf("Numero de vezes que %d aparece em %d = %d", d, n, contador(n, d));
    return 0;
}

int contador(int n, int d){
    int digito=0, num_vezes=0, separador=n;
    while (separador > 0){
        digito = separador%10;
        if (digito == d) num_vezes += 1;
        separador = separador/10;
    }
    return num_vezes;
}