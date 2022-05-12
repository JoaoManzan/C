#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hora, Minuto;

    printf("Entre com o horario de inicio do jogo. Separe horas e minutos por enter:\n");
    scanf("%d%d", &Hora, &Minuto);

    Hora = Hora + 1;
    Minuto = Minuto + 45;

    if(Minuto > 59){
        Minuto = Minuto - 60;
        Hora++;}

    if(Hora > 23){
        Hora = Hora - 24;}

    printf("O horario de termino do jogo sera as %.2d:%.2dh\n",Hora, Minuto );
    return 0;
}
