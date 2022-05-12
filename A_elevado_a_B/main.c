#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, cont, result;
    cont = 1;


    printf("Digite o valor de A e B separados por enter: \nA = Base e B = Expoente\n");
    scanf("%d", &A);
    scanf("%d", &B);
    result = A;

        if (B == 0){
            printf("\nResultado: 1 \n\n");
     return 0;}

    while (cont < B){
        result = result * A;
        cont++;
    }

    printf("\nResultado: %d\n\n", result);

    return 0;
}
