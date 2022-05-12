#include <stdio.h>
#include <stdlib.h>

int main()
{
        float Vetor[50], Total;
        int Tamanho, Pos;
        Total = 0;

    printf("Digite o tamanho do vetor, ate 50 posicoes:\n");
    scanf("%d", &Tamanho);

    while (Tamanho > 50){
        printf("O valor do vetor excede seu tamanho, digite novamente o tamanho dos vetores:\n");
        scanf("%d", &Tamanho);}

    for(Pos = 0; Pos < Tamanho; Pos++){
        printf("Digite o valor %d do vetor:\t", Pos);
        scanf("%f", &Vetor[Pos]);
        Total = Total + Vetor[Pos];}

        Total = Total / Tamanho;

        printf("\nA media desse vetor e:%.2f", Total);


    return 0;
}
