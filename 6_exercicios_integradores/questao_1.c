#include <stdio.h>

int main(){
    
    printf("Tabela de multiplicação\n");
    for (int i=1; i<11; i++){
        for (int j=1; j<11; j++){
            printf("%d x %d = %d\n", i, j, i*j);
            if (j == 10) printf("\n");
        }
    }
    return 0;

}