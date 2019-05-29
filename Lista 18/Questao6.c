#include "mochilaDoHeroi.h"

const int MAX1 = 3;
const int MAX2 = 3;

float preencherMatrizBi(float matriz[][MAX2]);
float somaColunaMatriz(float matriz[][MAX2], int coluna);

void main(){
  apresentacao();

  //criacao da matriz
  float matriz[MAX1][MAX2];
  //preencher preencherMatriz
  preencherMatrizBi(matriz);

  //calcular soma de uma coluna da matriz
  printf("\nEscreva a coluna da matriz para ser somada");
  int coluna = lerInt();
  float somaColuna = somaColunaMatriz(matriz, coluna - 1);

  printf("\nA soma da coluna %d eh %.2f", coluna, somaColuna);

  despedida();
}


float preencherMatrizBi(float matriz[][MAX2]){
/*
Lucas Santiago - 26/05/19
Objetivo: preencher matriz bidimensional
Entrada: matriz bidimensional
Saida: numero de Itens da matriz
*/
  int numItensMatriz = 0;
  for(int i = 0; i < MAX1; i++){
    printf("\nPreenchendo coluna %d", i+1);
    for(int j = 0; j < MAX2; j++){
      matriz[j][i] = lerFloat();
      numItensMatriz++;
    }
  }
  return numItensMatriz;
}


float somaColunaMatriz(float matriz[][MAX2],int coluna){
  //Soma dos itens de uma coluna da matriz
  float soma = 0;
  for(int i = 0; i < MAX1; i++){
    soma += matriz[i][coluna];
  }
  return soma;
}
