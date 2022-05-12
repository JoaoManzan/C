#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B;
    printf("Entre com dois numeros:\n");
    scanf("%d%d", &A, &B);
    if(A == B - 1 || A == B + 1){
        printf("Os Numeros sao sequenciais!!");}
    else
        printf("Os numeros nao sao sequenciais!!");
    return 0;
}
