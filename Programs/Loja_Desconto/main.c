#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Und;
    char Finalizar;
    float Preco_und, Desconto, Preco_final, Preco_total, Desconto_total;
    Desconto = 0;
    Desconto_total = 0;

    while(Finalizar != 's'){
        printf("Entre com o preco do produto:\n");
        scanf("%f", &Preco_und);
        printf("\nAgora entre com a quantidade do produto:\n");
        scanf("%d", &Und);

            if(Und < 11 ){
                 Preco_final = (Preco_und * Und);}

            else if(Und > 10 && Und < 21){
                 Preco_final = (Preco_und * Und) * 0.90;
                 Desconto = (Preco_und * Und)* 0.10;}

            else if(Und > 20 && Und < 51){
                  Preco_final = (Preco_und * Und) * 0.85;
                  Desconto = (Preco_und * Und)* 0.15;}

            else if(Und > 50){
               Preco_final = (Preco_und * Und) * 0.80;
               Desconto = (Preco_und * Und)* 0.20;}

            Preco_total = Preco_total + Preco_final;
            Desconto_total = Desconto + Desconto_total;

            printf("\nDeseja finalizar a compra? Digite 's' para finalizar ou 'n' para continuar:\n");
              scanf(" %c", &Finalizar);}

        if(Desconto_total==0){
            printf("\nO preco final é de R$:%.2f. \n", Preco_total);}

        else{
            printf("\nO preco final é de R$:%.2f e o desconto foi de R$:%.2f. \n", Preco_total, Desconto_total);}
    return 0;
}
