#include <stdio.h>
#include <stdio.h>

int main(){
  float alturaHomem,
        pesoIdeal;

  printf("\nCalculo do peso ideal de um homem");
  printf("\nDigite a altura: ");
  scanf("%f", &alturaHomem);

  pesoIdeal = 72.7 * alturaHomem - 58;
  printf("\nO peso ideal é %f", pesoIdeal);
  return(0);
}
