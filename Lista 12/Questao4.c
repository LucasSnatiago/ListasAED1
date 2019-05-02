#include <stdio.h>
#include "mochilaDoHeroi.h"

void trocarValores(float *num1, float *num2);
void ordenarValores(float *num1, float *num2, float *num3);
void printarSegundoValor(float num);


void main(){
  apresentacao();
  printf("\nCalculadora que ordena valores\n");
  printf("\nEscreva o primeiro valor");
  float num1 = lerFloat();
  printf("\nEscreva o segundo valor");
  float num2 = lerFloat();
  printf("\nEscreva o terceiro valor");
  float num3 = lerFloat();

  ordenarValores(&num1, &num2, &num3);
  printarSegundoValor(num2);

  despedida();
}


void ordenarValores(float *num1, float *num2, float *num3){
/*
Lucas Santiago - 01/05/19
Objetivo: ordenar 3 valores
Entrada: localizacao de memoria das 3 variaves
Saida: 3 valores organizados em ordem crescente
*/
  if (*num2 > *num1) trocarValores(num1, num2);
  if (*num3 > *num2) trocarValores(num2, num3);
  if (*num2 > *num1) trocarValores(num1, num2);
}

void trocarValores(float *num1, float *num2){
/*
Lucas Santiago - 01/05/19
Objetivo: trocar os valores de duas variaveis
Entrada: localizacao de memoria das duas variaves
Saida: localizacao de memoria das duas variaveis trocadas
*/
  float aux;
  aux = *num1;
  *num1 = *num2;
  *num2 = aux;
}


void printarSegundoValor(float num){
  printf("\nO valor do meio eh %.2f", num);
}
