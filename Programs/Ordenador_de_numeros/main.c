#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, n, cont;
        N = 0;
        n = 0;
        cont = 0;

    printf("Entre com seu primeiro numero\n");
    scanf("%d", &N);
        n = N + 1;

    while (n == N + 1 || n == N - 1){
     cont++;
     n = N;

     printf("Entre com seu proximo numero, ou digite 0 para terminar\n");
      scanf("%d", &N);

         if(N == 0){
                printf("Sua sequencia esta ordenada e tem %d numeros", cont);
         return 0;
        }}
       cont++;
        printf("Sua sequencia nao esta ordenada e tem %d numero", cont);

    return 0;
}
