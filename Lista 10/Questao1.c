#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

float maiorNum(float num1, float num2);



void main(){
  apresentacao();
  float num1 = lerFloat();
  float num2 = lerFloat();
  printf("\nO maior numero entre esses dois é %.2f", maiorNum(num1, num2));
  despedida();
}


float maiorNum(float num1, float num2){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo de calcular o maior entre dois numeros
Precisa de dois floats de entrada,
retornando o maior entre eles
*/

  float maior = num1;

  if(num2 > num1) maior = num2;

  return maior;
}
