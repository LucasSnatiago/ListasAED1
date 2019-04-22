#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

void main() {
  apresentacao();

  printf("\nCalculadora de fatorial");
  int num = positivoInteiro();
  int factorial = fatorial(num);
  printf("\nO fatorial de %d é %d", num, factorial);

  despedida();
}
