#include "mochilaDoHeroi.h"

const int MAX = 30;

typedef struct Agenda{
    char nome[30];
    int dia;
    int mes;
}Agenda;

int EscolhaUsuario();
void Cadastrar(Agenda agenda[], int contador);
void Aniversariantes(Agenda agenda[]);

void main(){
    apresentacao();
    int numCadastrados = 0,
        escolhaUsuario;
    Agenda agenda[MAX];


    escolhaUsuario = EscolhaUsuario();
    while(1){ //repetir a escolha do usuario para sempre, ate ele digitar 0 e sair do programa
      switch(escolhaUsuario){
          case 1:
              Cadastrar(agenda, numCadastrados);
              numCadastrados++;
              break;
          case 2:
              Aniversariantes(agenda);
              break;
          case 0:
              despedida();
              exit(0);
      }
      escolhaUsuario = EscolhaUsuario();
    }
}


int EscolhaUsuario(){
    //O usuario escolha o que quer fazer no programa
    int entrada;
    printf("\nEscolha o que quer fazer:");
    printf("\nDigite:\n0 - Para sair\n1 - Para cadastrar na agenda\n2 - Para pesquisar aniversariantes do mes");
    do{
        entrada = lerInt();
    }while(entrada < 0 || entrada > 3);
    return entrada;
}


void Cadastrar(Agenda agenda[], int contador){
  //preencher agenda
  printf("\n------Cadastrar novo usuario------\n");

  printf("\nEscreva o nome do usuario: ");
  fflush(stdin);
  scanf("\n%s", agenda[contador].nome);

  printf("\nEscreva o dia do aniversario: ");
  agenda[contador].dia = lerInt();

  printf("\nEscreva o mes: ");
  agenda[contador].mes = lerInt();
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
  printf("\n");
}
