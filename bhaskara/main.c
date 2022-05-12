#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, X1, X2, Delta;

     printf("Digite um numero para A: ");
      scanf("%f", &a);
     printf("Digite um numero para B: ");
      scanf("%f", &b);
     printf("Digite um numero para C: ");
      scanf("%f", &c);

        Delta = (b * b - (4 * a * c));
        printf("Delta = %.1f \n", Delta);

        X1 = (((-b) - sqrt(Delta)) / (2 * a));
        X2 = (((-b) + sqrt(Delta)) / (2 * a));

     printf("O Valor de X1 = %.1f \n           X2 = %.1f ", X1, X2);

    return 0;
}
