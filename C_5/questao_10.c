#include <stdio.h>

int main(){

    int n, n1, n2, p, i;

    printf("Digite o limite do intervalo [1, p]");
    scanf("%d", &p);

    for (n=1; n <= p; n++){
        n1 = n*(n-1)+1;
        printf("%d^3 = ", n);
        for (i=0; i < n; i++){
            printf("%d ", (n1 + (2*i)));
            if (i < n - 1) {
                printf("+ ");
            } else {
                printf("\n");
            }
            n2 += n1 + (2*i);
        }
    }
    return 0;

}