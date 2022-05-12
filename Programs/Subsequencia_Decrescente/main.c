#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1=0, N2=0, Cont=0, Res=0;

    while(N1 >= 0){
        printf("Entre com seu numero:\n");
        scanf("%d", &N1);
            if(N1 < N2){
                Cont++;}
            else {
                if(Cont >= Res){
                    Cont++;
                    Res = Cont;
                    Cont = 0;}

                Cont = 0;}
        N2 = N1;}
    if(Cont > Res){
        printf("Sua maior subsequencia decrescente foi de %d numeros\n", Cont);}

    else{
        printf("Sua maior subsequencia decrescente foi de %d numeros\n", Res);}

    return 0;
}
