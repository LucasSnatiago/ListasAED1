#include <stdio.h>
#include "mochilaDoHeroi.h"

int fatorialRecursivo(int num, int resul);



void main(){
  apresentacao();
  printf("\nCalculadora de fatorial");
  int num = lerInt();
  int result = fatorialRecursivo(num, 1);

  printf("\nO fatorial de %d eh %d", num, result);
  despedida();
}



int fatorialRecursivo(int num, int resul){
  resul *= num;
  if(num > 1) fatorialRecursivo(num - 1, resul);
  else return resul;
}
