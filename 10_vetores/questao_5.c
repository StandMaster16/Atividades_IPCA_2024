#include <stdio.h>
#define MAX 100

void fatorial(int n, int seq[]);

int main(){

    int qtd_termos, sequencia[MAX];
    printf("Digite a quantidade de termos (maximo: 99)\n");
    scanf("%d", &qtd_termos);
    printf("Digite os termos da sequencia\n");
    for (int i=0; i < qtd_termos; i++){
        scanf("%d", &sequencia[i]);
    }
    fatorial(qtd_termos, sequencia);
    return 0;
}

void fatorial(int n, int seq[]){
    int num=0, resultado=1, fat[MAX];
    for (int i=0; i < n; i++){
        num = seq[i];
        for (int j=1; j <= num; j++){
            resultado *= j;
        }
        fat[i] = resultado;
        resultado = 1;
    }
    printf("Sequencia modificada:\n");
    for (int k=0; k < n; k++){
        printf("index [%d]: %d\n", k, fat[k]);
    }
}