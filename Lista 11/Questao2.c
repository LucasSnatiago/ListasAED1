#include <stdio.h>
#include "mochilaDoHeroi.h"

int recursividade(int num);
int volta(int num);

int main(void) {
  apresentacao();
  recursividade(5);
  volta(5);
  despedida();
  return 0;
}

int recursividade(int num){
  if(num > 1) recursividade(num - 1);
  printf("%d ", num);
  return 0;
}

int volta(int num){
  printf("%d ", num);

  if(num > 1) volta(num - 1);
  //volta(num - 1);
  
  return 0;
}
