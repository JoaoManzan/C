#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X, Y;

    printf("Escreva o valor de X!\n");
    scanf("%f", &X);

    Y = (sqrt(X))+ ((X)/2) + (pow(X,X));

    printf("O resultado para X = %.1f e de %f ", X, Y);
    return 0;
}
