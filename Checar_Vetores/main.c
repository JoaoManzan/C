#include <stdio.h>
#include <stdlib.h>

int main()
{int Vetor_1[5], Vetor_2[5], Tamanho, Pos, Pos2, Boo;

    printf("Digite o tamanho dos vetores:\n");
    scanf("%d", &Tamanho);

    for(Pos = 0; Pos < Tamanho; Pos++){
        printf("\nDigite o valor %d do vetor 1:\n", Pos);
        scanf("%d", &Vetor_1[Pos]);}

    for(Pos = 0; Pos < Tamanho; Pos++){
        printf("\nDigite o valor %d do vetor 2:\n", Pos);
        scanf("%d", &Vetor_2[Pos]);}

    Boo = 0;
    for(Pos = 0; Pos < Tamanho; Pos++){
        for(Pos2 = 0; Pos2 < Tamanho; Pos2++){
            if (Vetor_1[Pos] == Vetor_2 [Pos2]){
                printf("\nO Valor da posicao %d e %d e repetido!!!\n", Pos , Pos2);
                Boo = 1;}}}

    if(!Boo){
        printf("\nNenhum numero repetido!!!\n");}

    return 0;
}
