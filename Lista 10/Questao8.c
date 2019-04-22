#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

float pesoIdeal();

void main() {

  apresentacao();
  float peso = pesoIdeal();

  printf("\nO peso ideal para essa pessoa eh %.2f", peso);

  despedida();
}


float pesoIdeal(){
  char genero;
  float altura,
        pesoIdeal;

  printf("\nCalculo de peso ideal para homens e mulheres.");

  do{
    printf("\nEscreva o genero (m para masculino e f para feminino)");
    genero = lerChar('l');

    if(genero != 'm' && genero != 'f') printf("\nLeitura invalida\n");
  }while(genero != 'm' && genero != 'f');

  do{
    printf("\nDigite a altura (em metros)");
    altura = lerFloat();

    if(altura <= 0) printf("\nA altura precisa ser maior que 0!\n");
  }while(altura <= 0);


  if(genero == 'm'){
      pesoIdeal = altura * 72.7 - 58;
  }
  else if(genero == 'f'){
      pesoIdeal = 62.1  *  altura - 44.7;
  }
  return pesoIdeal;
}


/*
Peso ideal masculino: (72,7  x  altura) – 58
Peso ideal feminino: (62,1  x  altura) – 44,7
*/
