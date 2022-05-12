#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, MDC, Trade;


    printf("Entre com os dois numeros\n");
        scanf("%d%d", &M, &N);

            if (N == 0 || M == 0){
                printf("O MDC e igual a 0\n");
            return 0;}

            if (N > M){
                Trade = N;
                N = M;
                M = Trade;}


            if (M%N == 0){
                    printf("O MDC entre os numeros e: %d", N);
                    return 0;}
            while (M%N != 0){

            }

    return 0;
}
