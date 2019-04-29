#include <stdio.h>
#include "mochilaDoHeroi.h"

int recursividade(int num);

int main(void) {
  apresentacao();
  recursividade(10);
  despedida();
  return 0;
}

int recursividade(int num){
  if(num > 1) recursividade(num - 1);
  printf("%d ", num);
  return 0;
}
