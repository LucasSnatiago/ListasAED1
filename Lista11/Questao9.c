#include <stdio.h>
#include "mochilaDoHeroi.h"

int fibonacciRecursivo(int termos, int atual, int anterior);

void main(){
  apresentacao();
  printf("\nDigite o numero de termos de fibonnaci para serem exibidos");
  int numTermos = lerInt();

  int result = fibonacciRecursivo(numTermos, 1, 0);
  despedida();
}

int fibonacciRecursivo(int termos, int atual, int anterior){
  printf("\n%d", atual);
  if(termos > 0) fibonacciRecursivo(termos - 1, (atual + anterior), atual);
}
