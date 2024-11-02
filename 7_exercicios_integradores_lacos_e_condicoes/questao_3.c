#include <stdio.h>

int main(){

    int n, n1, n2, i, achou1primo, achou_outro, diferenca=0, div1=2 , div2=2;
    scanf("%d", &n);
    n1 = n+1;
    while (diferenca != 2){
        while (achou1primo != 1) {
            for (i=2; i < (n1-1); i++){
                if ((n1 % i) == 0) div1 += 1;
            }
            if (div1>2) n1 += 1;
            else achou1primo = 1;
        }
        n2 = n1+1;
        while (achou_outro != 1) {
            for (i=2; i< (n2-1); i++){
                if ((n2%1) == 0) div2 += 1;
            }
            if (div2>2) n2 += 1;
            else achou_outro = 1;
        }
        diferenca = n1 - n2;
        if (diferenca == 2) break;
        else {
            n1 = n2+1;
        }
    }
    printf("N1 e N2 = %d e %d", n1, n2);
}