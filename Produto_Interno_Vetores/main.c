#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor_1[5], Vetor_2[5], Tamanho, Pos, Res;

    printf("Digite o tamanho dos vetores:");
    scanf("%d", &Tamanho);

    for(Pos = 0; Pos< Tamanho; Pos++){
        printf("Digite o valor %d do vetor 1:", Pos);
        scanf("%d", &Vetor_1[Pos]);}

    for(Pos = 0; Pos < Tamanho; Pos++){
        printf("Digite o valor %d do vetor 2:", Pos);
        scanf("%d", &Vetor_2[Pos]);}

    for(Pos = 0; Pos < Tamanho; Pos++){
        Res = Res + (Vetor_1[pos] * Vetor_2[pos]);}

    printf("O produto interno desses vetores e:%d", Res);

    return 0;
}
