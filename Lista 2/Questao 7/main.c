#include <stdio.h>
#include <stdlib.h>

int main() {
  float celsius,
        farenheit;

  printf("\nTransformacao de farenheit para celsius");
  printf("\nDigite a temperatura em farenheit: ");
  scanf("%f", &farenheit);

  celsius = (farenheit - 32) * 5 / 9;
  printf("\n%f em farenheit é igual a %f em celsius.", farenheit, celsius);
  return(0);
}
