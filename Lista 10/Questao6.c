#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

void main(){
  int num,
      par;

  apresentacao();

  printf("\nSou uma calculadora para descobrir se um numero eh par ou impar.");

  num = lerInt();
  par = ehPar(num);

  if(par) printf("\nEsse numero eh par!");
  else printf("\nEsse numero eh impar!");

  despedida();
}
