#include "mochilaDoHeroi.h"

const int MAX = 3;

int preencherMatrizBi(int matriz[][MAX]);
bool checarValores(int matriz[][MAX]);

void main(){
  apresentacao();

  //criacao da matriz
  int matriz[MAX][MAX];
  //preenchendo a matriz
  int itensMatriz = preencherMatrizBi(matriz);

  //checar primeiro e ultimo valor da matriz
  bool ehIgual = checarValores(matriz);
  if(ehIgual) printf("\nO primeiro e o ultimo valor da matriz sao iguais");
  else printf("\nO primeiro e o ultimo valor da matriz sao diferentes");

  despedida();
}


int preencherMatrizBi(int matriz[][MAX]){
/*
Lucas Santiago - 26/05/19
Objetivo: preencher matriz bidimensional
Entrada: matriz bidimensional
Saida: numero de Itens da matriz
*/
  int numItensMatriz = 0;
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++){
      matriz[i][j] = lerInt();
      numItensMatriz++;
    }
  }
  return numItensMatriz;
}


bool checarValores(int matriz[][MAX]){

  bool ehIgual = false;
  if(matriz[0][0] == matriz[MAX-1][MAX-1]) ehIgual = true;
  return ehIgual;
}


/*
2. Construa uma função que retorne verdadeiro se a primeira linha de uma matriz quadrada de reais for igual à sua última linha, e falso, caso contrário.
Argumento: Uma matriz quadrada de reais.
*/
