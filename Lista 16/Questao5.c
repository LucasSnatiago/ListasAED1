#include "mochilaDoHeroi.h"


int lerIdade(int arranjo[]);
float mediaIdadeTurma(int arranjo[], int numItensArranjo);
int alunosAcimaMedia(int arranjo[], int numItensArranjo, float media);

const int MAX = 100;

void main(){
  apresentacao();

  //Criacao do arranjo de idades da turma
  int idadesTurma[MAX];
  idadesTurma[0] = -1;
  int numPessoasTurma = lerIdade(idadesTurma);
  float mediaIdade = mediaIdadeTurma(idadesTurma, numPessoasTurma);
  int acimaMedia = alunosAcimaMedia(idadesTurma, numPessoasTurma, mediaIdade);

  printf("\nA turma tem %d pessoas, com a media de idade de %.2f e %d pessoas tem idade superior a media", numPessoasTurma, mediaIdade, acimaMedia);
  despedida();
}

int lerIdade(int arranjo[]){
/*
Lucas Santiago - 18/05/19
Objetivo: ler idades e escrever em um arranjo
Entrada: arranjo
Saida: numeros de itens no arranjo
*/
  const int flag = 0;
  int i = 0, entrada;
  while(entrada != flag){
    do{
      entrada = lerInt();
    }while(entrada < 0 || entrada > 150);
    if(entrada != 0){
      arranjo[i] = entrada;
      i++;
    }
  }
  return i;
}


float mediaIdadeTurma(int arranjo[], int numItensArranjo){
/*
Lucas Santiago - 18/05/19
Objetivo: descobrir a media das idades
Entrada: arranjo com as idades e o numero de itens do arranjo
Saida: media das idades
*/
  int soma = 0;
  float media;
  for(int i = 0; i < numItensArranjo; i++){
    soma += arranjo[i];
  }
  media = (float) soma / numItensArranjo;
  return media;
}


int alunosAcimaMedia(int arranjo[], int numItensArranjo, float media){
/*
Lucas Santiago - 18/05/19
Objetivo: contar o numero de alunos acima da media
Entrada: arranjo, numero de itens desse arranjo, media de idades
Saida: numero de alunos acima da media
*/
  int contador = 0;
  for(int i = 0; i < numItensArranjo; i++){
    if(arranjo[i] > media) contador++;
  }
  return contador;
}
