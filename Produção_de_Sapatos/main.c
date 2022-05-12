#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 20

typedef struct
{
    int codigo;
    int quantidade;
    char cor[50];
    int tamanho;
} Sapatos;

void relatorio(int vetor[MAX], int tam, float Media, int Moda, int Mediana, int Total, Sapatos Sapato[MAX])
{
    int cont = 0, aux = 0, aux2 = 0, med, vetorMediana[MAX];
    int Perc[MAX];
    int  i, j;
    Total = 0;
    Media = 0;
    Mediana = 0;

    for (i = 0; i < tam; i++){
        Total = Total + vetor[i];
        vetorMediana[i] = vetor[i];
        for (j = i + 1; j < tam; j++){
            if (vetorMediana[i] > vetorMediana[j]){
                aux2 = vetorMediana[i];
                vetorMediana[i] = vetorMediana[j];
                vetorMediana[j] = aux2;
            }
            if (vetor[i] == vetor[j]){      /*calculando a moda*/
                cont++;
                if (cont > aux){
                    aux = cont;
                    cont = 0;
                    Moda = vetor[i];
                }
            }
        }
    }


    Media = Total;

    for (i = 0; i < tam; i++){

    Perc[i] = (vetor[i] * 100) / Total;
     printf("\nO sapato codigo %d corresponde a %d do percentual total.\n", Sapato[i].codigo, Perc[i]);
     printf("Foram produzidas %d unidades.\n", vetor[i]);
    }

    Media = Media/tam;

    if (tam % 2 == 0){
    med = (tam / 2);
    Mediana = (vetorMediana[med] + vetorMediana[med - 1]) / 2;
   }
   else {
    med = (tam / 2);
    Mediana = vetorMediana[med];
   }

    if (Moda == 0){
        printf("\nSeu conjunto e amodal.\n");
        printf("\nA media da producao semanal foi %.2f\n\nA mediana da producao semanal foi %d\n\nA quantidade total de unidades produzidas foi %d\n", Media, Mediana, Total);
    }
    else {
    printf("\nA moda da producao semanal foi %d\n\nA media da producao semanal foi %d\n\nA mediana da producao semanal foi %d\n\nForam produzidas %d unidades ao todo na semana\n", Moda, Media, Mediana, Total);
    }


}

int main()
{
    int Moda = 0, Mediana = 0, Total = 0;
    float Media = 0.0;
    int i, tam = 0, d = 0, vetor[MAX];
    char fim;
    Sapatos Sapato[MAX];


    for(i = 0; i < MAX; i++){
        printf("Digite a cor do sapato %d:\n", i+1);
        scanf("%s", Sapato[i].cor);
        printf("Digite o codigo do sapato %d:\n", i+1);
        scanf("%d", &Sapato[i].codigo);
        printf("Digite o tamanho do sapato %d:\n", i+1);
        scanf("%d", &Sapato[i].tamanho);
        printf("Digite a quantidade do sapato %d:\n", i+1);
        scanf("%d", &Sapato[i].quantidade);
        vetor[i] = Sapato[i].quantidade;
        tam++;
        printf("Deseja encerrar as entradas semanais? S ou N\n");
        scanf(" %c", &fim);
            if( fim == 's' || fim == 'S'){
                break;
            }}

        relatorio(vetor, tam, Media, Moda, Mediana, Total, Sapato);

    return 0;
}
