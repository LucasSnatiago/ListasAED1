#include "mochilaDoHeroi.h"

const int MAX = 30;

typedef struct Agenda{
    char *nome;
    int dia;
    int mes;
}Agenda;

int EscolhaUsuario();
int Cadastrar(Agenda agenda[], int contador);
void Aniversariantes(Agenda agenda[]);

void main(){
    apresentacao();
    int numCadastrados = 0, escolhaUsuario;
    Agenda agenda[MAX];

    do{
      escolhaUsuario = EscolhaUsuario();
      switch(escolhaUsuario){
          case 1:
              numCadastrados = Cadastrar(agenda, numCadastrados);
              break;
          case 2:
              Aniversariantes(agenda);
              break;
          case 0:
              despedida();
              exit(0);
      }
    }while(escolhaUsuario > 0 && escolhaUsuario <= 3); //repetir sempre que o usuario digitar algo
}



int EscolhaUsuario(){
    //O usuario escolha o que quer fazer no programa
    int entrada;
    printf("\nEscolha o que quer fazer:");
    printf("\nDigite:\n0 - Para sair\n1 - Para cadastrar na agenda\n2 - Para pesquisar aniversariantes do mes");
    do{
        entrada = lerInt();
    }while(entrada < 0 && entrada > 3);
    return entrada;
}


int Cadastrar(Agenda agenda[], int contador){
  //preencher agenda
  printf("\n------Cadastrar novo usuario------\n");

  printf("\nEscreva o nome do usuario: ");
  fflush(stdin);
  char nome[30];
  scanf("%s", nome);

  printf("\nEscreva o dia do aniversario: ");
  int dia = lerInt();

  printf("\nEscreva o mes: ");
  int mes = lerInt();

  agenda[contador].nome = nome;
  agenda[contador].dia = dia;
  agenda[contador].mes = mes;
  return contador+1;
}


void Aniversariantes(Agenda agenda[]){
  //Pegar mes dos aniversariantes
  printf("\nDigite o mes: ");
  int mes = lerInt();
  //Dar parabens aos aniversariantes
  printf("\nOs aniversariantes do mes sao: ");
  for(int i = 0; i < MAX; i++){
    if(agenda[i].mes == mes){
      printf("\n%s", agenda[i].nome);
    }
  }
  printf("\n\n");
}
