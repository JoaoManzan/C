#include <stdio.h>
#include <stdlib.h>
#define MAX 4


typedef struct {
    char car;
    int peso;
} Cell;



int main()
{

    Cell vet[MAX];
    int tam, i=0, j, cont = 0, soma = 0;

    for (i = 0; i < MAX; i++){
    printf("Digite o caractere do tipo Cell %d: \n", i);
    scanf(" %c", &vet[i].car);
    printf("Digite o peso do tipo Cell %d: \n", i);
    scanf("%d", &vet[i].peso);
    }

    for (i = 0; i < MAX; i++){
        if (vet[i].car == vet[i+1].car){
               soma = soma + vet[i].peso + vet[i+1].peso ;
                cont++;
                for (j = i+1; j < MAX; j++){
                     if (vet[j].car == vet[j+1].car){
                         soma = soma + vet[j+1].peso;
                     cont++;}}
                     i = i + cont ;
                     cont = 0;}}

    printf("A soma de faixas deu:%d \n", soma);


    return 0;
}
