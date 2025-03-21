#include <stdio.h>
#include <string.h>

void deTrasParaFrente(char string[]);
void semVogais(char string[]);
void maisculas(char string[]);
void quantasVezesAparece();
void apagarOcorrencia();

int main(){

    char string[100];
    printf("Digite uma palavra (Maximo = 100 caracteres)\n");
    scanf("%s", string);
    deTrasParaFrente(string);
    semVogais(string);
    maisculas(string);
    quantasVezesAparece();
    apagarOcorrencia();
    return 0;

}

void deTrasParaFrente(char string[]){
    int n = strlen(string);
    printf("De tras para frente = ");
    for (int i=n; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n");
    return;
}

void semVogais(char string[]){
    int n = strlen(string);
    printf("Sem vogais = ");
    for(int i=0; i <= n; i++){
        if (string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85|| string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117){
            printf(" ");
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");
    return;
}

void maisculas(char string[]){
    int n = strlen(string);
    printf("Tudo maisculo = ");
    for (int i=0; i <= n; i++){
        if (65 <= string[i] && string[i] <= 90){
            printf("%c", string[i]);
        } else if (97 <= string[i] && string[i] <= 122){
            printf("%c", string[i]-32);
        }
    }
    printf("\n");
    return;
}

void quantasVezesAparece(){
    char palavra[100], letra;
    int qtd=0;
    printf("Digite uma palavra e uma letra dessa palavra e direi quantas vezes essa letra aparece nessa palavra\n");
    scanf(" %s", palavra);
    int n = strlen(palavra);
    scanf(" %c", &letra);
    for (int i=0; i <= n; i++){
        if (palavra[i] == letra) qtd += 1;
    }
    printf("Quantas vezes %c aparece nessa palavra = %d", letra, qtd);
    printf("\n");
    return;
}

void apagarOcorrencia(){
    char palavra[100], letra;
    printf("Digite uma palavra e uma letra dessa palavra e exclurei as ocorrencias dessa letra nessa palavra\n");
    scanf(" %s", palavra);
    int n = strlen(palavra);
    scanf(" %c", &letra);
    for (int i=0; i <= n; i++){
        if (palavra[i] == letra){
            printf(" ");
        } else {
            printf("%c", palavra[i]);
        }
    }
    return;
}