#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1, t2;

     printf("Insira o numero de vitoria dos times ");
    scanf ("%d", &t1);
    scanf ("%d", &t2);

     if (t1 > t2)   {
       printf("vitoria do time 1");
        return 0;   }

      if (t1 < t2)   {
       printf("vitoria do time 2");
        return 0;   }

    else       {
        printf("Opa, deu empate! Insira agora o numero do saldo de gols dos times ");
    scanf ("%d", &t1);
    scanf ("%d", &t2);}

        if (t1 > t2)   {
       printf("vitoria do time 1");
        return 0;   }

      if (t1 < t2)   {
       printf("vitoria do time 2");
        return 0;   }

      else    {
        printf("Opa, deu empate de novo! Insira dessa vez o numero do gols marcados dos times ");
    scanf ("%d", &t1);
    scanf ("%d", &t2);}

        if (t1 > t2)   {
       printf("vitoria do time 1");
        return 0;   }

      if (t1 < t2)   {
       printf("vitoria do time 2");
        return 0;   }

      else    {
        printf("Opa, deu empate mais uma vez! vamos agora inserir o numero de cartoes vermelhos dos times ");
    scanf ("%d", &t1);
    scanf ("%d", &t2);}

        if (t1 < t2)   {
       printf("vitoria do time 1");
        return 0;   }

      if (t1 > t2)   {
       printf("vitoria do time 2");
        return 0;   }

          else    {
        printf("Opa, deu empate de novo! Insira o numero de cartoes amarelos dos times ");
    scanf ("%d", &t1);
    scanf ("%d", &t2);}

        if (t1 < t2)   {
       printf("vitoria do time 1");
        return 0;   }

      if (t1 > t2)   {
       printf("vitoria do time 2");
        return 0;   }

    else {
        printf ("Os dois times estao completamente empatatos!");}

    return 0;
}
