#include <stdio.h>
#include "mochilaDoHeroi.h"

void recursivo(int limiteSuperior,int limiteInferior);

int main(void) {
  apresentacao();
  recursivo(5,5);
  despedida();
  return 0;
}

void recursivo(int limiteSuperior, int limiteInferior){
  if(limiteSuperior > 1) recursivo(limiteSuperior - 1, 0);
  if(limiteSuperior > 0) printf("%d ", limiteSuperior);


  if(limiteInferior > 0) printf("%d ", limiteInferior);
  if(limiteInferior > 1) recursivo(0, limiteInferior - 1); 
  return;
}

