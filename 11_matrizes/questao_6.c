#include <stdio.h>

void verificarQuadradoMagico(int matriz[5][5]);

int main(){

    int matriz[5][5];
    
    printf("Digite os elementos do quadrado magico a ser verificado\n");
    for (int i=1; i <= 5; i++){
        for (int j=1; j <=5; j++){
            printf("Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz[i-1][j-1]);
        }
    }
    
    verificarQuadradoMagico(matriz);
}

void verificarQuadradoMagico(int matriz[5][5]){

    int soma=0, temp=0, j=4, verify=0;

    while (verify==0){

        //Linhas
        for (int i=0; i < 5; i++){
            for (int j=0; j < 5; j++) soma += matriz[i][j];
            if (i==0){
                temp = soma;
                soma = 0;
            } else {
                if (temp != soma) break;
                temp = soma;
                soma = 0;
            }
        }

        //Colunas
        for (int i=0; i < 5; i++){
            for (int j=0; j < 5; j++) soma += matriz[j][i];
            if (i==0){
                temp = soma;
                soma = 0;
            } else {
                if (temp != soma) break;
                temp = soma;
                soma = 0;
            }
        }

        //Diagonal Principal
        for (int i=0; i < 5; i++) soma += matriz[i][i];
        if (temp != soma) break;
        temp = soma;
        soma = 0;

        //Diagonal secundaria
        for (int i=0; i < 5; i++){
            soma += matriz[i][j];
            j--;
        }
        if (temp != soma) break;
        temp = soma;
        soma = 0;

        verify = 1;
    }

    if (verify == 0) printf("\nNao é um quadrado magico!");
    else printf("\nÉ um quadrado magico!");
}