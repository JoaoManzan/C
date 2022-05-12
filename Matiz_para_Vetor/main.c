#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
#define MAX2 10000

void linha(int matriz[MAX][MAX], int vetor[MAX2], int m, int n)
{

    int i, j, z = 0;
     for (i = 0; i < m; i++){
        for (j = 0; j < n; j++) {
                if (z < m * n){
                vetor[z] = matriz[i][j];
                z++;
                }
            }
       }
}

int main()
{
    int m, n, i, j, mult;
    int matriz[MAX][MAX], vetor[MAX2];

    printf("Digite o numero de linhas seguido do numero de colunas da matriz: \n");
    scanf("%d %d", &m, &n);

    mult = m * n;

    printf("Digite sua matriz: \n");
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++) {
                scanf ("%d", &matriz[i][j]);
            }
        }

    linha(matriz, vetor, m, n);

    for (i = 0; i < mult; i++){
        printf("%d", vetor[i]);
    }

    printf("\n");

    for (i = 0; i < m; i++){
            for (j = 0; j < n; j++) {
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
   }

    return 0;
}
