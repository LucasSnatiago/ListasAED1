#include <stdlib.h>
#include <stdio.h>


int main() {
  char genero;
  float altura, pesoIdeal;

  printf("\nCalculadora de peso ideal para homens e mulheres");
  printf("\nPor favor digite (m) para masculino e (f) para feminino: ");
  scanf("%c", &genero);

  if (genero == 'm')
  {
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    pesoIdeal = (72.7 * altura) - 58;
    printf("\nO peso ideal para um homem de %fm e %f",altura ,pesoIdeal);
  }
  else if (genero == 'f')
  {
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("\nO peso ideal para uma mulher de %fm e %f",altura ,pesoIdeal);
  }
  else
  {
    printf("\nVoce digitou errado!");
  }
  return 0;
}
