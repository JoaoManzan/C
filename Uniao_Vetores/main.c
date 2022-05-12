#include <stdio.h>
#include <stdlib.h>
#define Max 50

int main()
{
    int Vetor_1[Max], Vetor_2[Max], VetorF[Max], Size, Size2, I, J, K;

    printf("Digite o tamanho do vetor 1: ");
    scanf("%d", &Size);

    printf("\nDigite o tamanho do vetor 2: ");
    scanf("%d", &Size2);
    printf("\n");

    for(I = 0; I < Size; I++){
        printf("\nDigite o valor %d do vetor 1: ", I);
        scanf("%d", &Vetor_1[I]);}

    printf("\n\n");

    for(J = 0; J < Size2; J++){
        printf("\nDigite o valor %d do vetor 2: ", J);
        scanf("%d", &Vetor_2[J]);}

    K = 0;

    for(I = 0; I < Size; I++){
            VetorF[K] = Vetor_1[I];K++;}



    for(I = 0; I < Size; I++){
        for(J = 0; J < Size2; J++){
           if (Vetor_2[I] != VetorF[J]){
                 VetorF[K] == Vetor_2[J]
                 K++;
               }}}

        printf("\n\nInterseccao: ");

    for(I = 0; I < Size; I++){
        printf("%d ", VetorF[I]);}
    printf("\n\n");

    return 0;
}
