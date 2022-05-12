#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order, Und, Cam_Bran, Cam_Color, Moleton, Calca, Bone, Total_und, Pedidos_feitos;
    float Valor_pedido, Valor_total;

    Cam_Bran=0;
    Cam_Color = 0;
    Moleton = 0;
    Calca = 0;
    Bone = 0;
    Valor_total = 0;
    Pedidos_feitos = 0;
    Total_und = 0;

    while(order != 9){
          printf("Escolha uma opcao:\n\n");
          printf(" 1 - Camiseta Branca \n 2 - Camiseta Colorida \n 3 - Moleton \n 4 - Calca \n 5 - Bone \n 9 - Sair\n\n");
          scanf("%d", &order);

            if (order != 9){
            printf("\nEntre com a quantidade desejada:\n\n");
            scanf("%d", &Und);

            if(order == 1){
               Cam_Bran = Cam_Bran + Und;
               Valor_pedido = 7.00 * Und;}

            if(order == 2){
               Cam_Color = Cam_Color + Und;
               Valor_pedido = 9.00 * Und;}

            if(order == 3){
               Moleton = Moleton  + Und;
               Valor_pedido = 17.00 * Und;}

            if(order == 4){
               Calca = Calca + Und;
               Valor_pedido = 20.00 * Und;}

            if(order == 5){
               Bone = Bone + Und;
               Valor_pedido = 5.00 * Und;}

        Total_und = Total_und + Cam_Bran + Cam_Color + Bone + Moleton + Calca;
        Valor_total = Valor_total + Valor_pedido;
        Pedidos_feitos++;

        printf("\nO valor desse pedido e de R$:%.2f\n", Valor_pedido);
              } }

        printf("\nO pedido foi:\n %d - Camisetas Brancas \n %d - Camisetas Coloridas \n %d - Moletons \n %d - Calca \n %d - Bone \n", Cam_Bran, Cam_Color, Moleton, Calca, Bone);
        printf("\nO total de unidades vendidas foi de %d, no valor de R$:%.2f e com %d pedidos realizados.", Total_und , Valor_total, Pedidos_feitos );

    return 0;
}
