#include <stdlib.h>
#include <stdio.h>

int main(){
  float alturaMulher,
      pesoIdeal;

  printf("\nCalculo do peso ideal de uma mulher");
  printf("\nDigite a altura: ");
  scanf("%f", &alturaMulher);

  pesoIdeal = 62.1 * alturaMulher - 44.7;
  printf("\nO peso ideal para essa mulher é %f", pesoIdeal);
  return (0);
}
