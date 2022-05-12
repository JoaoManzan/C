#include <stdio.h>
#include <stdlib.h>
#define max 10

int main()
{
    int Mat[max][max], Dim=0, Comp[max], Comp2[max];
    int i, j, temp=0, temp2=0, k=0;
    char boo= 'n';

    while(boo != 's' && boo != 'S'){

    printf("Entre com a dimensao da sua matriz: (max 10)\n");
    scanf("%d", &Dim);

    printf("\nEntre com os valores da sua matriz\n\n");

    for(i=0;i<Dim;i++){
        for(j=0;j<Dim;j++){
            printf("Entre com o valor %dx%d:\n", i+1, j+1);
            scanf("%d", &Mat[i][j]);}}

        printf("\nEssa e a sua matriz?(s/n): \n\n");
        for(i=0;i<Dim;i++){
            for(j=0;j<Dim;j++){
                if (Mat[i][j]<=9){
                printf("%d    ", Mat[i][j]);}
                else if (Mat[i][j]>9){
                printf("%d   ", Mat[i][j]);}
                else if (Mat[i][j]>99){
                printf("%d  ", Mat[i][j]);}
                else if (Mat[i][j]>999){
                printf("%d ", Mat[i][j]);}
        }printf("\n\n");}
        scanf(" %c", &boo);}


    //linha
    for(i=0;i<Dim;i++){
        for(j=0;j<Dim;j++){
            temp = temp + Mat[i][j];
        }Comp[i] = temp;
            temp=0;}

    //coluna
     for(j=0;j<Dim;j++){
        for(i=0;i<Dim;i++){
            temp = temp + Mat[i][j];
        }Comp2[j] = temp;
            temp=0;}

   //diag 1
    for(i=0;i<Dim;i++){
         for(j=0;j<Dim;j++){
            if(i == j){
               temp = temp + Mat[i][j];}}}

  //diag 2
       for(i=0;i<Dim;i++){
         for(j=Dim-1;j>=0;j--){
            if(i == (Dim-1) - j){
               temp2 = temp2 + Mat[i][j];}}}

        j=0;
        for(i=0;i<Dim;i++){
            if(Comp[i] == Comp2[j]){
                k++;
                j++;}}


        if(temp == temp2 && Comp[0] == temp && k == Dim){
           printf("\n\t\tSua matriz e magica!!! =)\n"); }

        else
             printf("\n\t\tSua matriz nao e magica!!! =(\n");

    return 0;
}
