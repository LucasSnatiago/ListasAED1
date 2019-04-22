#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

float areaCirculo(float raioCirculo);

void main(){
  apresentacao();
  printf("\nCalculadora de area de circulo");
  float raioCirculo = lerFloat();
  printf("\nA area do circulo e %f", areaCirculo(raioCirculo));
  despedida();
}

float areaCirculo(float raioCirculo){
/*
Lucas Santiago - 11/04/19
Objetivo calcular area de circulo
Entrada: raio do circulo
Saida: area do circulo
*/
  float pi = PI();
  float resultado = pi * raioCirculo * raioCirculo;
}
