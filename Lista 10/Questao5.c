#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

int ehBissexto(int ano);

void main(){
  int ano;

  apresentacao();
  printf("\nCalculadora de ano bissexto");
  ano = lerInt();
  if(ehBissexto(ano)) printf("\nEsse ano é bissexto!");
  else printf("\nEsse ano nao eh bissexto");
  despedida();
}

int ehBissexto(int ano){
/*
Lucas Santiago - 12/04/19
Objetivo: ver se um ano eh bissexto ou nao
Entrada: int Ano
Saida: bool - verdadeiro ou falso -
*/
  int ehBissexto = 0;

  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    ehBissexto = 1;
  }
  return ehBissexto;
}
