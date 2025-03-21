#include <stdio.h>

int main(){

    int n, jogada, vetor[6]={0, 0, 0, 0, 0, 0};
    printf("Digite quantas vezes lançara o dado\n");
    scanf("%d", &n);
    for (int i=0; i < n+1; i++){
        printf("Jogada %d: ", i);
        scanf("%d", &jogada);
        switch (jogada){
            case 1:
                vetor[0] += 1;
                break;
            case 2:
                vetor[1] += 1;
                break;
            case 3:
                vetor[2] += 1;
                break;
            case 4:
                vetor[3] += 1;
                break;
            case 5:
                vetor[4] += 1;
                break;
            case 6:
                vetor[5] += 1;
                break;
        }
    }
    for (int j=1; j < 7; j++) printf("Vezes que caiu %d: %d\n", j, vetor[j-1]);
    return 0;
}