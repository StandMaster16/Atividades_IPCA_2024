#include <stdio.h>
#include <string.h>

void contador(char frase[100], char letra, int *posicoes, int *tamanho);

int main(){
     
    char frase[100], letra;
    int tamanho=0, vetorPosicoes[100];
    printf("Digite uma frase e uma letra dessa frase que eu vo dizer quantas vezes ela aparece nessa frase\n");
    scanf("%s ", frase);
    scanf("%c", &letra);
    contador(frase, letra, vetorPosicoes, &tamanho);
    printf("Quantas vezes %c aparece em %s = %d\n", letra, frase, tamanho);
    printf("Indices = ");
    for (int i=0; i < tamanho; i++) printf("%dª ", vetorPosicoes[i]);
    return 0;
}

void contador(char frase[100], char letra, int *posicoes, int *tamanho){

    int n = strlen(frase);
    
    for (int i=0; i < n; i++){
        if (frase[i] == letra){
            *posicoes = i+1;
            posicoes++;
            *tamanho += 1;
        }
    }
    return;
}
