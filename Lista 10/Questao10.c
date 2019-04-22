#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

void main() {
  apresentacao();

  printf("\nCalculadora de potencia");
  printf("\nEscreva a base ");
  float num = lerFloat();
  printf("\nEscreva o expoente");
  float expoen = lerInt();
  float poten = potencia(num, expoen);

  printf("\nO resultado da potencia eh %.2f", poten);
  despedida();
}
