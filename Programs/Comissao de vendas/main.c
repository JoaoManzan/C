#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V, C;

    printf("Digite o valor da transacao: \n");
    scanf("%f", &V);

        if (V <= 2500)  {
            C = (V*0.017)+ 30;
            if ( C >= 39){
            printf("Sua comissao e: %.2f", C);}
            else {
                printf("O valor da comissao e: R$:39,00!");
            }}

        else if (V > 2500 && V <= 6250){
            C = (V*0.0066)+ 56;
            printf("O valor da comissao e: %.2f", C);}

        else if (V > 6250 && V <= 20000){
            C = (V*0.0034)+ 76;
             printf("O valor da comissao e: %.2f", C);}

        else if (V > 20000 && V <= 50000){
            C = (V*0.0022)+ 100;
             printf("O valor da comissao e: %.2f", C);}

        else if (V > 50000 && V <= 500000){
            C = (V*0.0011)+ 155;
             printf("O valor da comissao e: %.2f", C);}

        else if (V > 50000 ){
            C = (V*0.0009)+ 255;
             printf("O valor da comissao e: %.2f", C);}

    return 0;
}
