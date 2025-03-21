#include <stdio.h>

int somaVetores(int *valor1, int *valor2, int *valorSoma, int tamanho1, int tamanho2);

int main(){

    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vetorSoma[10];
    int resultado = somaVetores(vetor1, vetor2, vetorSoma, (sizeof(vetor1)/sizeof(vetor1[0])), (sizeof(vetor2)/sizeof(vetor2[0])));

    if (resultado == 0) printf("Os tamanhos dos vetores são diferentes, a soma é impossível\n");
    else if (resultado == 1) {
        printf("Valores do vetor soma = ");
        for (int i = 0; i < sizeof(vetor1)/sizeof(vetor1[0]); i++) printf("%d ", vetorSoma[i]);
    }

    return 0;

}

int somaVetores(int *valor1, int* valor2, int *valorSoma, int tamanho1, int tamanho2){
    
    if (tamanho1 != tamanho2){
        return 0;
    } else {
        for (int i = 0; i < tamanho1; i++){
            *valorSoma = *valor1 + *valor2;
            valorSoma++;
            valor1++;
            valor2++;
        }
        return 1;
    }


}