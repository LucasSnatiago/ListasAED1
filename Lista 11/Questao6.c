#include <stdio.h>
#include "mochilaDoHeroi.h"

int somarCubos(int num, int soma);


void main(){
    int num;

    apresentacao();
    printf("\nCalculadora de soma dos cubos de N numeros");
    num = lerInt();

    int cubosSomados = somarCubos(num, 0);

    printf("\nA soma de todos os cubos de 1 ate %d eh %d", num, cubosSomados);
    despedida();
}


int somarCubos(int num, int soma){
  int cubos;

  if(num > 0) {
  cubos = potencia(num, 3);
  soma += cubos;
  somarCubos(num - 1, soma);
  }
  else return soma;
}


/*
Construa um método recursivo que calcule a soma dos primeiros N cubos:
S= 13 + 23 + 33 + ... + N3
*/
