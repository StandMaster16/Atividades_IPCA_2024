#include <stdio.h>

int main(){

    int num1=4;
    double num2=1.5;
    char letra='A';

    int* ponteiro1 = &num1;
    double* ponteiro2 = &num2;
    char* ponteiro3 = &letra;

    printf("Valores iniciais\nPonteiro 1 = %d\nPonteiro 2 = %lf\nPonteiro 3 = %c\n", *ponteiro1, *ponteiro2, *ponteiro3);

    *ponteiro1 = 1938;
    *ponteiro2 = 128.021;
    *ponteiro3 = 'O';

    printf("Valores modificados\nPonteiro 1 = %d\nPonteiro 2 = %lf\nPonteiro 3 = %c\n", *ponteiro1, *ponteiro2, *ponteiro3);

    return 0;

}