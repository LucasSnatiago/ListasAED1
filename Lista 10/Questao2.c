#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

float somar(float num1, float num2);

void main(){
  apresentacao();
  printf("\nCalculadora que soma dois numeros.\n");
  float num1 = lerFloat();
  float num2 = lerFloat();

  printf("\n%.2f + %.2f = %.2f", num1, num2, somar(num1, num2));
  despedida();
}

float somar(float num1, float num2){
/*
Lucas Santiago - 11/04/19
objetivo: somar dois numeros
entrada: dois numeros float
saida: um numero float
*/
  float resultado = num1 + num2;
  return resultado;
}
