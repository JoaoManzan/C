#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, D, Ce, Ckm, E;
    E = 0.1764;

     printf("Coloque a distancia entre as cidades em estadios: ");
      scanf("%f", &D );

      if (D <= 0)
   {
       printf("\t Coloque apenas numeros positivos");
        return 0;
   }
    else
    {
       printf("Coloque o angulo: ");
      scanf("%f", &A );

     if (A <= 0)
{
     printf("\t Coloque apenas numeros positivos");
        return 0;
}
    else
    {
      Ce = ((360 / A) * D);
    Ckm = Ce * E;
      printf("A circunferencia do planeta: \n %.1f Em estadios \n %.1f Em quilometros  \n", Ce, Ckm);
    return 0;
    }
}
}
