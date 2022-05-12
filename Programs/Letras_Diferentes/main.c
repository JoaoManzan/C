#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int letras_diferentes(char palavra[] , int tam)
{
 int Res=0, i, j;

        for(i=0; palavra[i]!='\0'; i++){
           for(j=i; palavra[j]!='\0'; j++){
                 if(palavra[i] == palavra[j] && j != i){
                    Res++;
                    break;}}}
        Res =  tam - Res;
return Res;
}

int main()
{
    int tam, Res;
    char palavra[30];

    printf("Entre com a sua palavra, de no maximo 30 caracteres\n");
    scanf("%s", palavra);
    tam = (int)strlen(palavra);
    Res = letras_diferentes(palavra, tam);

    printf("O numero de letras diferentes e:%d", Res);
    return 0;
}
