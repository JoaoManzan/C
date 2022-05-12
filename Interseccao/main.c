#include <stdio.h>
#include <stdlib.h>
#define Max 50
int main()
{
    int Vetor_1[Max], Vetor_2[Max], VetorF[Max], Size, Size2, I, J, Boo, K;

    printf("Digite o tamanho do vetor 1: ");
    scanf("%d", &Size);

    printf("\nDigite o tamanho do vetor 2: ");
    scanf("%d", &Size2);
    printf("\n");

    for(I = 0; I < Size; I++){
        printf("\nDigite o valor %d do vetor 1: ", I);
        scanf("%d", &Vetor_1[I]);}

    for(J = 0; J < Size2; J++){
        printf("\nDigite o valor %d do vetor 2: ", J);
        scanf("%d", &Vetor_2[J]);}

    Boo = 0;
    K = 0;

    for(I = 0; I < Size; I++){
        for(J = 0; J < Size2; J++){
            if (Vetor_1[I] == Vetor_2 [J]){
                VetorF[K] = Vetor_1[I];
                K++;
                Boo = 1;}}}

    Size = K;

      if(!Boo){
        printf("\n\nNenhum numero repetido!!!\n");}

      else {
        printf("\n\nInterseccao: ");

     for(I = 0; I < Size; I++){
        printf("%d ", VetorF[I]);
     }
     printf("\n\n");}



    return 0;
}
