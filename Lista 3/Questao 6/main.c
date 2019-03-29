#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int main()
{

  struct tempo{
    int ano;
    int ano2;
  };

  struct tempo temporizador;

  int resul, dias;

  printf("\nCalculadora de dias de vida");
  printf("\nPor favor escreve o ano do seu nascimento: ");
  scanf("%i", &temporizador.ano);
  printf("\nAgora me diga qual foi o ano do seu ultimo aniversario: ");
  scanf("%i", &temporizador.ano2);

  resul = (temporizador.ano2 - temporizador.ano) * 365;

  printf("\nVocê tem %i dias vividos, durante esses anos.", resul);
  return 0;

}
