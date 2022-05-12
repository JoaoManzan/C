#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, cont, result, cont2;
    cont = 0;
    cont2 = 0;
    result = 0;

    printf("Digite o valor de N \n");
    scanf("%d", &N);


        if (N == 0){
            printf("\nResultado: 0 \n\n");
     return 0;}

    while (cont < N){
        cont2++;
        result = result + cont2;
        cont++;
    }

    printf("\nResultado: %d\n\n", result);

    return 0;
}
