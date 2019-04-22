#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

void main() {
  apresentacao();

  printf("\nCalculadora para descobrir o maior numero");
  float maior = maiorNumero();

  printf("\nO maior numero lido foi %.2f", maior);
  despedida();
}
