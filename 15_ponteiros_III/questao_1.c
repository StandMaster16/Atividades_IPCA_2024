#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(int quantidadeAlunos, float *notas, float* media, float* desvioPadrao);

int main(){

    int quantidadeAlunos;
    float *vetorNotas, media, desvioPadrao;
    printf("Digite a quantidade de alunos na turma\n");
    scanf("%d", &quantidadeAlunos);
    vetorNotas = (float *)malloc(quantidadeAlunos * sizeof(float));
    if (vetorNotas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    printf("Digite as notas\n");
    for (int i=0; i < quantidadeAlunos; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &vetorNotas[i]);
    }
    mediaDesvio(quantidadeAlunos, vetorNotas, &media, &desvioPadrao);
    printf("Media = %.2f\nDesvio Padrao = %f", media, desvioPadrao);

}

void mediaDesvio(int quantidadeAlunos, float *notas, float* media, float* desvioPadrao){

    float somaMedia=0, somaDesvio=0;
    for (int i=0; i < quantidadeAlunos; i++){
        somaMedia += notas[i];
    } 
    *media = somaMedia/quantidadeAlunos;
    for (int i=0; i < quantidadeAlunos; i++){
        somaDesvio += (notas[i] - *media)*(notas[i] - *media);
    }
    *desvioPadrao = sqrt(somaDesvio/quantidadeAlunos);

}