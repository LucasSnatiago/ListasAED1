#include <stdio.h>
#include "mochilaDoHeroi.h"

float potenciaRecursiva(float base, int expoente, float resultadoPR);


void main(){
  apresentacao();
  printf("\nCalculadora de potencia usando recursividade");
  printf("\nEscreva um numero");
  float bas = lerFloat();
  printf("\nEscreva o expoente");
  int expoent = lerInt();

  float result = potenciaRecursiva(bas, expoent, 1.0);
  printf("\no resultado da potencia eh %.2f", result);
  despedida();
}


float potenciaRecursiva(float base, int expoente, float resultadoPR){
  float resultFinal = resultadoPR;
  if(expoente > 0) resultFinal = potenciaRecursiva(base, expoente - 1, resultadoPR * base);

  return resultFinal;
}

/*
Calcular potencia usando recursividade
*/
