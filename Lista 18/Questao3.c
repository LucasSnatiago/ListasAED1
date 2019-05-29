#include "mochilaDoHeroi.h"

const int MAX = 3;

float preencherMatrizBi(float matriz[][MAX]);
bool checarDiagonal(float matriz[][MAX]);

void main(){
  apresentacao();

  //criacao da matriz
  float matriz[MAX][MAX];
  //preencher preencherMatriz
  preencherMatrizBi(matriz);

  //checar diagonal principal da matriz
  bool diagonal = checarDiagonal(matriz);

  if(diagonal) printf("\nA diagonal principal eh igual em toda a matriz");
  else printf("\nA diagonal principal da matriz nao eh igual");
  despedida();
}


float preencherMatrizBi(float matriz[][MAX]){
/*
Lucas Santiago - 26/05/19
Objetivo: preencher matriz bidimensional
Entrada: matriz bidimensional
Saida: numero de Itens da matriz
*/
  int numItensMatriz = 0;
  for(int i = 0; i < MAX; i++){
    printf("\nPreenchendo coluna %d", i+1);
    for(int j = 0; j < MAX; j++){
      matriz[j][i] = lerFloat();
      numItensMatriz++;
    }
  }
  return numItensMatriz;
}


bool checarDiagonal(float matriz[][MAX]){
  //checando valores na diagonal principal da matriz
  bool diagonalEhIgual = true;
  for(int i = 0; i < MAX-1; i++){
    if(matriz[i][i] != matriz[i+1][i+1]) diagonalEhIgual = false;
  }
  return diagonalEhIgual;
}
