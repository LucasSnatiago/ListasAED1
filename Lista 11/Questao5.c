#include <stdio.h>
#include "mochilaDoHeroi.h"

int somarValoresEntre(int num1, int num2, int soma);

int main(void) {
  int maior,
      menor;

  apresentacao();
  int num1 = lerInt();
  int num2 = lerInt();
  maior = num1;
  menor = num2;
  if(num2 > maior){
     maior = num2;
     menor = num1;
  }


  int somarTudo = somarValoresEntre(menor, maior, 0);
  printf("\nA soma de todos os valores entre %d e %d eh %d", num1, num2, somarTudo);
  despedida();
  return 0;
}



int somarValoresEntre(int menor, int maior, int soma){

  if(menor <= maior){
  soma += menor;
  somarValoresEntre(menor + 1, maior, soma);
  }
  else return soma;
}
