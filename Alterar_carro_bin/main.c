#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// IZAURA S. SILVA   E   LUIZA M  MASTELARI     2ºSEM ADS


typedef struct Carros  //criando a struct
{	char placa[8];
	char marca[12];
	char modelo[12];
} carro;

void Gravar(){  //função para criar o arquivo .bin
	FILE *arq;
	arq = fopen("carros.bin", "a"); //criando

	if (arq == NULL) {
		printf("Arquivo não encontrado");
		getchar();
		exit(0);    //prevenção de erro
	}

	carro car;    //criando o objeto

	char placa[8] = " ", marca[12] = " ", modelo[12] = " ";
	int boolean = 1;

	do{
		printf("\nInsira os dados:\n");
		printf("Placa:\n");
		scanf("%s", placa);
		printf("Marca:\n");
		scanf("%s", marca);
		printf("Modelo:\n");
		scanf("%s", modelo);     //atribuindo variáveis aos atributos da struct

		strcpy(car.placa, placa);
        strcpy(car.marca, marca);
		strcpy(car.modelo, modelo);
		fwrite(&car, sizeof(car), 1, arq);  // relacionando os atributos acima aos atributos da struct original

		printf("\nDeseja continuar?\n[1] Para continuar\n[0] Para sair\n");   //entrada e saída do loop
		scanf("%d", &boolean);

	} while (boolean != 0);

	fclose(arq);   //fechando o arquivo
}

void alteraCarro(char nomeArq[], char placa[], char marca[], char modelo[]){
        int posCursor, i;
        FILE *arq;
        arq = fopen("carros.bin","r+b");  //abrindo o arquivo para possibilitar leitura e modificação
        char placa1[8];

        fseek(arq, 0, SEEK_END);
        long tam = ftell(arq);

        fseek(arq, 0, SEEK_SET);

        carro* car = malloc(tam);   //alocando na memória
        int qtdCarrosCad = tam / sizeof(carro);
        fread(car, sizeof(carro),qtdCarrosCad, arq);

        printf("\Digite a placa que deseja fazer alteracoes:");
        gets(placa1);

        for (i=0; i<qtdCarrosCad; i++){         //caso haja placa registrada, modificar o respectivo modelo e marca
            if (strcmp(placa1, car[i].placa) == 0){
                printf("\nDigite a nova marca:");
                gets(car[i].marca);
                printf("\nDigite o novo modelo:");
                gets(car[i].modelo);
            }
        }

        fwrite(car, sizeof(carro), qtdCarrosCad, arq);   //sobreescrevendo o bin
        fclose(arq);
}

int main()
{
    FILE *arq;
    carro car;
    int menu, posCursor;
    char placa[8], marca[12], modelo[12];

    arq = fopen("carros.bin", "w+b");

    if (arq == NULL){
        printf("\nErro ao tentar acessar o arquivo.");
    } //prevençao de erro
    else {
        while (menu != 3) {
            printf("\tMenu Principal");
            printf("\n1 - Criar");
            printf("\n2 - Alterar");
            printf("\n3 - Finalizar");
            printf("\nDigite o numero da opcao desejada:\n");
            scanf("%d", &menu);
            getchar();

            if (menu == 1){
                Gravar();
            }
            else if (menu == 2){
                alteraCarro(arq, placa, marca, modelo);  //rodar funçao caso o usuario queira alterar
            }
            else if (menu != 1 && menu != 2 && menu != 3){
                printf("Opcao nao registrada no menu. Tente novamente.");
            }
        }
    }
    return 0;
}
