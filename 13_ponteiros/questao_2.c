#include <stdio.h>

int* finder(int* inicial, int* fim, int valor) {
    while (inicial <= fim) {
        if (*inicial == valor) return inicial;
        inicial++;
    }
    return NULL;
}

int main() {
    int vetor[10] = {1, 2, 3, 2, 5, 6, 2, 8, 9, 10};
    int valor_procurado = 2;
    int* endereco_atual = vetor;
    int* fim = vetor + 9;

    printf("Procurando o valor %d no vetor...\n", valor_procurado);

    
    while ((endereco_atual = finder(endereco_atual, fim, valor_procurado)) != NULL) {
        printf("Valor encontrado no endereco: %p\n", (void*)finder);
        endereco_atual++;
    }

    return 0;
}
