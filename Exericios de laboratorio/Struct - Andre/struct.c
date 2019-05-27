#include<stdlib.h>
#include<stdio.h>

//Estruturas:
typedef struct Agenda{
        char nome[30];
        int dia,
            mes;
}Agenda;//fim struct
//Constante Global:
const int FLAG=0;
const int LIM=70;
//Cabeçalho de função:
void _agradecimentos();
int _lerDia();
int _lerMes();
void _lerNome(Agenda *agenda,int pos);
void _cadastrar(Agenda *agenda,int pos);
void _pesquisarMes(Agenda *agenda,int mes);
int _interfaceMenu();
void _menu(Agenda *agenda);



int main()
{
	Agenda agenda[LIM];
	_menu(agenda);
	return 0;
}//fim main

void _agradecimentos()
{
	printf("\nObriado por usar este programa e tenha um otimo dia!\n");
}//fim função

int _lerDia()
{
	int dia;
	do{
		printf("\nDigite o dia desejado: ");
		scanf("%d",&dia);
		if(dia<0||dia>31)
			printf("\nDia invalido\a");
	}while(dia<0||dia>31);
	return dia;
}//fim função

int _lerMes()
{
	int mes;
	do{
		printf("\nDigite o mes desejado: ");
		scanf("%d",&mes);
		if(mes<0||mes>12)
			printf("\nMes invalido\a");
	}while(mes<0||mes>12);
	return mes;
}//fim função

void _lerNome(Agenda *agenda,int pos)
{
	printf("\nDigite o nome do aluno: ");
	fflush(stdin);
	scanf("%s",&agenda[pos].nome);
//	agenda[pos].nome="Andre";
}//fim função

void _cadastrar(Agenda *agenda,int pos)
{
	int i=0;
	printf("\nCADASTRAMENTO:");
	_lerNome(agenda,pos);
	agenda[pos].dia=_lerDia();
	agenda[pos].mes=_lerMes();
}//fim função

void _pesquisarMes(Agenda *agenda,int mes)
{
	for(int i=0;i<LIM;i++){
		if(agenda[i].mes==mes){
			printf("%s\n",agenda[i].nome);
		}//fim if;
	}//fim for;
}//fim função

int _interfaceMenu()
{
	int opcao;
	do{
		printf("-----MENU-----");
		printf("\n0-Para sair.");
		printf("\n1-Para cadastro.");
		printf("\n2-Para pesquisar aniversariante do mes.");
		printf("\nDigite uma das opcoes acima: ");
		scanf("%d",&opcao);
		if(opcao>2||opcao<0)
			printf("\nOpcao invalida");
	}while(opcao>2||opcao<0);
}//fim função

void _menu(Agenda *agenda)
{
	int opcao,
	    mes;
	int i=0;
	do{
		opcao=_interfaceMenu();
		switch(opcao){
			case 1:
				_cadastrar(agenda,i);
				i++;
				break;
			case 2:
				mes=_lerMes();
				_pesquisarMes(agenda,mes);
				break;
		}//fim switch
	}while(opcao!=FLAG);
	_agradecimentos();
}//fim função

