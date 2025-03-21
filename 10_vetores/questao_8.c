#include <stdio.h>
#include <math.h>

void selectionSort(int n, double vetor[]);

int main(){

    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    double vetor[n];
    printf("Digite os elementos do vetor\n");
    for (int i=0; i < n; i++){
        scanf("%lf", &vetor[i]);
    }
    selectionSort(n, vetor);

}

void selectionSort(int n, double vetor[]){

    int posicao;
    double temp;
    for (int i = 0; i < n - 1; i++) {
        double min = vetor[i];
        posicao = i;
        
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < min) {
                min = vetor[j];
                posicao = j;
            }
        }
        if (posicao != i) {
            temp = vetor[i];
            vetor[i] = vetor[posicao];
            vetor[posicao] = temp;
        }
    }
    printf("Vetor ordenado: ");
    for (int l=0; l < n; l++){
        printf("%.2lf ", vetor[l]);
    }

    return;

}
