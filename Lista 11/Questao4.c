#include <stdio.h>
#include "mochilaDoHeroi.h"

void decrescente(int num);
int lerInt();

int main(void) {
  apresentacao();
  decrescente(lerInt());
  despedida();
  return 0;
}

void decrescente(int num){
  printf("%d ", num);
  if(num > 1) decrescente(num - 1);

}

