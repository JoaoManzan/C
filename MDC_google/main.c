#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N,Trade;


    printf("Digite dois numeros: ");
    scanf("%d%d", &M, &N);

    if(M == 0 || N == 0){
            printf("MDC = 0\n");
            return 0;}

    Trade=M%N;

    while(Trade!=0){
        M    = N;
        N    = Trade;
        Trade = M%N;}

        printf("MDC = %d\n",N);
    return 0;
}
