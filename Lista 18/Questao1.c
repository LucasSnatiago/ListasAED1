#include "mochilaDoHeroi.h"

const int MAX = 100;

bool existeValorMatriz(float arranjo[], float pesquisa, int tamanhoArranjo);

void main(){
  apresentacao();

  //criacao da matriz
  float matriz[MAX];
  //preenchendo matriz
  int numItensMatriz = preencherMatriz(matriz);

  //procurando valor na matriz
  printf("\nEscreva um valor para ser procurado na matriz");
  float pesquisa = lerFloat();
  bool existePesquisa = existeValorMatriz(matriz, pesquisa, numItensMatriz);

  //resultado
  if(existePesquisa) printf("\nO valor existe na matriz!");
  else printf("\nO valor nao foi encontrado na matriz!");
  despedida();
}


bool existeValorMatriz(float arranjo[], float pesquisa, int tamanhoArranjo){

  bool existeValor = false;
  int i = 0;
  while(!existeValor && i < tamanhoArranjo){
      if(arranjo[i] == pesquisa) existeValor = true;
      i++;
    }
  return existeValor;
}
