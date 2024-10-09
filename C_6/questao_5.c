#include <stdio.h>
#include <math.h>

int main(){

    int i, mdc1, mdc2, mdc_comum, maior, num1, num2;
    
    printf("Digite dois numeros inteiros e direi se sao primos entre si (coprimos)\n");
    scanf("%d %d", &num1, &num2);
    maior = fmax(num1, num2);
    for (i=1; i<=maior; i++){
        if (i<=num1) {
            if ((num1%i) == 0){
                mdc1 = i;
            }
        }
        if (i<=num2) {
            if ((num2%i) == 0){
                mdc2 = i;
            }
        }
        if (mdc1 == mdc2){
            mdc_comum = mdc1;
        }
    }
    if (mdc_comum == 1){
        printf("Sao coprimos");
    } else {
        printf("Nao sao coprimos");
    }
    return 0;
}