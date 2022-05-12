#include <stdio.h>
#include <stdlib.h>

void frequencia(int v[], int n, int *f1, int *f2);

int main()
{
    int tam, i;
    int maiorFreq, menorFreq;

    printf("Tamanho: ");
    scanf("%d", &tam);

    int v[tam];

    printf("\n\n");

    for(i = 0; i < tam; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("Vetor: {");
    for(i = 0; i < tam; i++){
        printf(" %d", v[i]);
    }
    printf(" }\n\n");

    frequencia(v, tam, &menorFreq, &maiorFreq); //Chamando a fun��o

    printf("Maior frequencia: %d\n", maiorFreq);
    printf("Menor frequencia: %d\n", menorFreq);

    return 0;
}


void frequencia(int v[], int n, int *f1, int *f2) {

	int freq1, freq2, troca1, troca2, i, j;

	freq1 = 0;	//Iniciamos freq1 e freq2 com zero para fazeram a contagem dentro do la�o
	freq2 = 0;
	troca1 = 1;	//Iniciamos troca1 e troca2, para termos um valor m�nimo de elementos repetidos em um vetor, porque ao menos uma vez o elemento aparece
	troca2 = 1;

	for(i = 0; i < n; i++){	//Nestes la�os iremos passar elemento por elemento, e quando tiver um igual, freq2, ir� incrementar
		for(j = i+1; j < n; j++){
			if(v[i] == v[j]){
				freq2++;
			}
		}
		if(troca2 <= freq2){//Caso freq1 seja maior ou igual, a variavel troca fica com esse valor mais alto e compara com a pr�xima freq2
			troca2 = freq2;
			*f2 = v[i];	//assim o ponteiro f2, recebe o elemneto que tem o maior n�mero de ocorrencias
		}
		freq2 = 0; // freq2 � zerada aqui toda vez q termina o primeiro for, para n�o acumular valor
	}

	/*O mesmo p ocorre para o elemento com menor frequ�ncia, por�m as condi��o de if para se freq1 � menor ou igual ao valor de troca1*/
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if(v[i] == v[j]){
				freq1++;
			}
		}
        if(troca1 >= freq1){
			troca1 = freq1;
			*f1 = v[i];
		}
		freq1 = 0;
    }
}
