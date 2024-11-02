#include <stdio.h>

int scanIntIntervalo(int, int);
int percentual(int, int, int);
int absdif(int, int);

int main(){

    int x, y, max, min;
    printf("Digite dois valores que estejam dentro do intervalo [0, 1000]\n");
    scanf("%d %d", &x, &y);
    if (scanIntIntervalo(x, y) == 1){
        printf("Os valores nao estao dentro do intervalo [0, 1000]");
        return 1;
    } else {
        max = (x>y ? x: y);
        min = (x<y ? x: y);
        printf("\nMaior entre eles = %d\nPercentual do menor em relacao ao maior = %d%%\nModulo da diferenca do maior e o menor = %d", max, percentual(x, y, min), absdif(max, min));
        return 0;
    }

}

int scanIntIntervalo(int x, int y){
    if ((0 <= x && x <= 1000) && (0 <= y && y <= 1000)) return 0;
    else return 1;
}

int percentual(int x, int y, int menor){
    int percent;
    percent = 100*menor/(x+y);
    return percent;
}

int absdif(int maior, int menor){
    int diferenca = maior - menor;
    int valor_absoluto = (diferenca<0 ? -diferenca: diferenca);
    return valor_absoluto;
}