#include <stdlib.h>
#include <stdio.h>

int main(){
  char genero[1];
  float altura, pesoIdeal;

  printf("\nPrograma de calculo de peso para homens e mulheres");
  printf("\nDigite (m) para selecionar calculo de peso masculino e (f) para calculo de peso feminino: ");
  scanf("%s", genero);

  if(genero[0] == 'm'){
    printf("\nPor favor, digite a altura: ");
    scanf("%f", &altura);

    pesoIdeal = (72.7  *  altura) - 58;

    printf("\nO peso ideal é %f", pesoIdeal);
  }
  else if(genero[0] == 'f'){
    printf("\nPor favor, digite a altura: ");
    scanf("%f", &altura);

    pesoIdeal = (62.1  *  altura) - 44.7;

    printf("\nO peso ideal é %f", pesoIdeal);
  }
  else{
    printf("\nVocê digitou o genero erroneamente");
  }

}
