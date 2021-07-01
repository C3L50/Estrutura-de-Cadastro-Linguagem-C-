
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<math.h>
# define TM 2

//Código criado por: Celso Gustavo
//Data de criação: 01/07/2021 Hora: 01:20 AM
//Aluno de: Sistemas de Informação - Bacharelado

struct endereco{
	char estado[50];
	char rua[50];
	char cep[20];
	char complemento[3];
	int num;
};

struct cadastro{
	char nome[50];
	char tel[20];
	struct endereco end;
}cad_cli[TM];

int main()
{
	setlocale(LC_ALL,"Portuguese");
	system("color 09");
	
	int cont;
	int resp, resp2;
	
	do{
	for(cont=0;cont<TM;cont++){
	printf("\t+---------------------+\n");
	printf("\t| CADASTRO DE CLIENTE |\n");
	printf("\t+---------------------+\n\n");
	printf("Nome: ");
	fflush(stdin);
	gets(cad_cli[cont].nome);
	printf("Telefone: ");
	fflush(stdin);
	gets(cad_cli[cont].tel);
	printf("Rua: ");
	fflush(stdin);
	gets(cad_cli[cont].end.rua);
	printf("CEP: ");
	fflush(stdin);
	gets(cad_cli[cont].end.cep);
	printf("Número: ");
	scanf("%d", &cad_cli[cont].end.num);
	printf("Complemento: ");
	fflush(stdin);
	gets(cad_cli[cont].end.complemento);
	printf("Sigla do estado: ");
	fflush(stdin);
	gets(cad_cli[cont].end.estado);
	
	printf("----------------------------------\n\n");
	}
	system("cls");
	printf("Deseja ver os cadastros?\n");
	printf("  [1] SIM | [2] NÃO\n");
	printf("R: ");
	scanf("%d", &resp);
	
	if(resp==1){
	for(cont=0;cont<TM;cont++)
	{
		
		printf("\nInformações do Cliente\n");
		printf("\nNome:     %s",cad_cli[cont].nome);
		printf("\nTelefone: %s",cad_cli[cont].tel);
		printf("\nRua:      %s",cad_cli[cont].end.rua);
		printf("\nNúmero:   %d%s",cad_cli[cont].end.num,cad_cli[cont].end.complemento);
		printf("\nCEP:      %s",cad_cli[cont].end.cep);
		printf("\nEstado:   %s",cad_cli[cont].end.estado);
		printf("\n----------------------------------\n\n");
	}
}
else
{
	system("cls");
}

printf("Deseja Recadastrar?\n");
printf("[1] SIM | [2] NÃO\n");
printf("R: ");
scanf("%d", &resp2);


if(resp2==1)
{
	system("cls");
}
else
{
	system("cls");
	printf("Encerrando...");
}
}while(resp2== 1);

	printf("\n\n");
	system("pause");
	return 0;
}
