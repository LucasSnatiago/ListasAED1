#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

void main() {
  int num, primo;

  printf("\nCalculadora de numeros primos!");
  num = positivoInteiro();
  primo = ehPrimo(num);

  if(primo) printf("\nEsse numero eh primo!");
  else printf("\nEsse numero nao eh primo!");

  despedida();
}
