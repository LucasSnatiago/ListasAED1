#include "mochilaDoHeroi.h"

const int MAX = 3;

float preencherMatrizBi(float matriz[][MAX]);
float maiorValorAcimaDiagonal(float matriz[][MAX]);
float maiorValorAbaixoDiagonal(float matriz[][MAX]);

void main(){
  apresentacao();

  //criacao da matriz
  float matriz[MAX][MAX];
  //preencher preencherMatriz
  preencherMatrizBi(matriz);

  //checar valores acima da diagonal principal
  float maiorValorAcimaDaDiagonal = maiorValorAcimaDiagonal(matriz);
  float menorValorAbaixoDaDiagonal = maiorValorAbaixoDiagonal(matriz);
  float diferenca = maiorValorAcimaDaDiagonal - menorValorAbaixoDaDiagonal;

  printf("\nO maior valor acima da diagonal principal eh %.2f e o maior abaixo eh %.2f!", maiorValorAcimaDaDiagonal, menorValorAbaixoDaDiagonal);
  printf("\nA diferença entre o valor acima da diagonal e abaixo dela eh %.2f", diferenca);
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


float maiorValorAcimaDiagonal(float matriz[][MAX]){
  //checar maior valor acima da diagonal principal
  float maior = matriz[0][1];
  int contador;
  for(int i = 0; i < MAX; i++){
    contador = i+1;
    while(contador < MAX){
      if(matriz[i][contador] > maior) maior = matriz[i][contador];
      contador++;
    }
  }
  return maior;
}


float maiorValorAbaixoDiagonal(float matriz[][MAX]){
  //checar maior valor abaixo da diagonal principal
  float maior = matriz[1][0];
  int contador;
  for(int i = 0; i < MAX; i++){
    contador = i-1;
    while(contador >= 0){
      if(matriz[i][contador] > maior) maior = matriz[i][contador];
      contador--;
    }
  }
  return maior;
}
