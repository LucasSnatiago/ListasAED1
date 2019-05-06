#include "mochilaDoHeroi.h"

int numNotas();
float calcularMedia(float *notas, int numNotas);
int calcularAcimaMedia(float *notas,int numNotas,float media);

void main(){
  //apresentacao do programa
  apresentacao();

  //Descobrindo o numero de total de notas que seram calculadas
  int numeroNotas = numNotas();

  //criando array com a nota dos alunos
  //Tem que ser feita na main se nao os dados sao apagados ao terminar de executar a funcao
  float notas[numeroNotas];
  for(int i = 0; i < numeroNotas; i++){
    printf("\nEscreva a nota: ");
    scanf("%f", &notas[i]);
  }

  //calculando medias
  float media = calcularMedia(notas, numeroNotas);
  int acimaMedia = calcularAcimaMedia(notas, numeroNotas, media);

  //printando resultado do programa
  printf("\nA media das notas dos alunos eh %.2f", media);
  printf("\nO numeros de alunos acima da media eh %d", acimaMedia);

  //Despedindo do usuario
  despedida();
}


int numNotas(){
/*
Lucas Santiago - 06/05/19
Objetivo: Descobrir o numero de notas
Sem entrada
Saida: numero de notas
*/
  printf("\nEscreva o numero de notas que serao calculadas");
  int numNotas = lerInt();
  return numNotas;
}

float calcularMedia(float *notas, int numNotas){
/*
Lucas Santiago - 06/05/19
Entrada: array com as notas, numero total de notas
Saida: media das notas dos alunos
*/
  float somaNotas = 0, resultado;
  for(int i = 0; i < numNotas; i++){
    somaNotas += notas[i];
  }
  resultado = somaNotas / (float)numNotas;
  return resultado;
}

int calcularAcimaMedia(float *notas,int numNotas,float media){
/*
Lucas Santiago - 06/05/19
Entrada: array com as notas, numero total de notas, media das notas
Saida: numero de pessoas acima da media
*/
  int acimaMedia = 0;
  for(int i = 0; i < numNotas; i++){
    if(notas[i] > media) acimaMedia++;
  }
  return acimaMedia;
}
