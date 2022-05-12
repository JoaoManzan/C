#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order, meat, chicken, potato, soda ;
    order = 0;
    meat = 0;
    chicken = 0;
    potato = 0;
    soda = 0;

    printf("Faca seu pedido:\n 1 - Hamburguer de carne \n 2 - Hamburguer de frango \n 3 - Batata frita \n 4 - Refrigerante \n 5 - Finalizar \n");

    while(order != 5){
        printf("    \nEscolha uma opcao, ou pressione 5 para finalizar \n");
            scanf("%d", &order);

            if(order == 1){
               meat = meat + 1;}

            if(order == 2){
               chicken = chicken + 1;}

            if(order == 3){
               potato = potato + 1;}

            if(order == 4){
               soda = soda + 1;}

               }

            if(meat == 0 && chicken == 0 && potato == 0 && soda == 0){
               printf("\n   Que pena, esperamos agrada-lo na proxima vez!\n\n");
               return 0;}

        printf("\nSeu pedido foi: \n %d Hamburgueres de carne; \n %d hambugueres de frango; \n %d Batatas \n %d sodas \n", meat, chicken, potato, soda);
        printf("\n\t\tObrigado pela preferencia!\n\n");

    return 0;
}
