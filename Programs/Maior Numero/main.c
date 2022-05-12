#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, Maior, Cont;
    Cont = 0;

    printf("Entre com seu Numero:\n");
    scanf("%d", &N);
    Maior = N;
              while (N){
                    printf("\nEntre com seu proximo Numero ou digite 0 para sair\n");
                    scanf("%d", &N);
                    Cont++;
                        if(Maior < N){
                            Maior = N;
                        }
                    }
             printf("\nO maior numero digitado foi %d e foram digitados %d numeros\n", Maior, Cont);
    return 0;
}
