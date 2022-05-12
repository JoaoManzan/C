#include <stdio.h>
#include <stdlib.h>

int main()
{
        double Vetor[50], Media, Res, Desvio, Tamanho;
        int  Pos;
        Media = 0;
        Res = 0;

        printf("Digite o tamanho do vetor, ate 50 posicoes:\n");
        scanf("%lf", &Tamanho);

    while (Tamanho > 50){
        printf("O valor do vetor excede seu tamanho, digite novamente o tamanho dos vetores:\n");
        scanf("%lf", &Tamanho);}

    for(Pos = 0; Pos < Tamanho; Pos++){
        printf("Digite o valor %d do vetor:\t", Pos);
        scanf("%lf", &Vetor[Pos]);
            Media = Media + Vetor[Pos];}

            Media = Media / Tamanho;

    for(Pos = 0; Pos < Tamanho; Pos++){
            Res = Res + pow(Vetor[Pos] - Media, 2);}

            Desvio = sqrt((1 / (Tamanho -1)) * Res);

        printf("Desvio padrao igual a:%lf", Desvio);


    return 0;
}
