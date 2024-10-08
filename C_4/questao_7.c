#include <stdio.h>
#include <math.h>

int main(){

    double nota1, nota2, nota3, maior_nota1, maior_nota2, maior_nota3, menor_nota1, menor_nota2, menor_nota3, media_agora, media_maior, media_menor;
    int i=0, j=0, k;
    char pergunta;

    while (j == 0) {
        printf("Digite as notas\n");
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
        media_agora = (nota1 + nota2 + nota3)/3;
        if (i==0){
            maior_nota1 = nota1;
            menor_nota1 = nota1;
            maior_nota2 = nota2;
            menor_nota2 = nota2;
            maior_nota3 = nota3;
            menor_nota3 = nota3;
            media_maior = media_agora;
            media_menor = media_agora;
        } else {
            media_agora = (nota1 + nota2 + nota3)/3;

            if (nota1 > maior_nota1){
                maior_nota1 = nota1;
            }
            if (nota1 < menor_nota1){
                menor_nota1 = nota1;
            }
            if (nota2 > maior_nota2){
                maior_nota2 = nota2;
            }
            if (nota2 > menor_nota2){
                menor_nota2 = nota2;
            }
            if (nota3 > maior_nota3){
                maior_nota3 = nota3;
            }
            if (nota3 < menor_nota3){
                menor_nota3 = nota3;
            }
            if (media_agora > media_maior) {
                media_maior = media_agora;
            }
            if (media_agora < media_menor){
                media_menor = media_agora;
            }     
        }
        printf("Deseja continuar? (s/n)\n");
        scanf(" %c", &pergunta);
        if (pergunta == 110){
            break;
        }
    }
    printf("Maiores notas\nAtv1 = %2.lf\nAtv2 = %2.lf\nAtv3 = %2.lf\nMenores notas\nAtv1 = %2.lf\nAtv2 = %2.lf\nAtv3 = %2.lf\nMedia maior = %2.lf\nMedia menor = %2.lf", maior_nota1, maior_nota2, maior_nota3, menor_nota1, menor_nota2, menor_nota3, media_maior, media_menor);
    printf("\nNumero de alunos cadastrados = %d", i);
    return 0;
}