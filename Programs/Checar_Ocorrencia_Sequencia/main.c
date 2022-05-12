#include <stdio.h>
#include <stdlib.h>
#define MAX 999
int main()
{
    int Vetor1[MAX], Vetor2[MAX], I, J, Size1, Size2;
    int Z=0;
    int Seq=0;
    printf("Entre com o tamanho dos dois vetores a serem checados.\n");
    scanf("%d %d", &Size1, &Size2);
        printf("\n");

    for(I = 0; I < Size1; I++){
        printf("Entre com o valor %d do vetor\n", I);
        scanf("%d", &Vetor1[I]);}
        printf("\n");

    for(J = 0; J < Size2; J++){
        printf("Entre com o valor %d do vetor 2 \n", J);
        scanf("%d", &Vetor2[J]);}

    for(J = 0; J < Size2; J++){
        while(Vetor1[0] == Vetor2[J]){
            Z = J;
                for (I = 0; I < Size1; I++){
                    if(Vetor1[I] == Vetor2[J]){
                    J++;}
                    if(I = Size1){
                       Seq++;}}}
                       J=Z;}


    printf("O numero de sequencias repetidas é de: %d", Seq);

    return 0;
}
