#include <stdio.h>
#include <math.h>

//Obs: talvez, só talvez, dê erro por não poder dar troco de 1 centavo, mas considerando que todos os numeros inputados, caso sejam reais, sejam multiplos de 5, funcione quase perfeitamente.

int main(){

    double valor_pago, preco, sobra, moedas, cinquenta, vinte_cinco, dez, cinco, troco;
    printf("Para calcular o troco mínimo, digite o preco e o valor pago pelo cliente.\n");
    scanf("%lf", &preco);
    scanf("%lf", &valor_pago);
    sobra = valor_pago - preco;
    if (sobra > 0){
        troco = floor(sobra);
        if (sobra < 1) {
            troco = sobra*100;
            printf("Troco = %.2lf centavos", troco);
        } else {
        moedas = fmod(sobra, troco);
        if (troco != sobra){
            cinquenta = floor(moedas/0.5);
            if (troco+(cinquenta*0.5) != sobra){
            vinte_cinco = floor((moedas-cinquenta*0.5)/0.25);
            if (troco+(cinquenta*0.5)+(vinte_cinco*0.25) != sobra) {
                dez = floor(((moedas-(cinquenta*0.5))-(vinte_cinco*0.25))/0.1);
                if (troco+(cinquenta*0.5)+(vinte_cinco*0.25)+(dez*0.1) != sobra) { 
                    cinco = floor((moedas-(cinquenta*0.5))-(vinte_cinco*0.25)-(dez*0.1)/0.05);
                    printf("Troco = %.2lf real(is), Moedas: 50 centavos = %.2lf, 25 centavos = %.2lf, 10 centavos = %.2lf, 5 centavos = %.2lf", troco, cinquenta, vinte_cinco, dez, cinco);
                } else { 
                    printf("Troco = %.2lf real(is), Moedas: 50 centavos = %.2lf, 25 centavos = %.2lf, 10 centavos = %.2lf.", troco, cinquenta, vinte_cinco, dez);
                }
            } else {
                printf("Troco = %.2lf real(is), Moedas: 50 centavos = %.2lf, 25 centavos = %.2lf.", troco, cinquenta, vinte_cinco);
            }
        } else {
            printf("Troco = %.2lf real(is), 50 centavos = %.2lf", troco, cinquenta);
        }
        } else {
            printf("Troco = %.2lf real(is)", troco);
        }
        }
    } else if (sobra == 0){
        printf("Pagamento exato");
    } else {
        printf("Pagamento insuficiente");
    }
    return 0;

}