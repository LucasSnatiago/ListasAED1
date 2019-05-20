#include "mochilaDoHeroi.h"


void fibonacci(long int arranjo[]);
void escreverFibonnaci(long int arranjo[]);

const int MAX = 60;

void main(){
  apresentacao();

  //Arranjo com os 100 primeiros itens de fibonnaci
  long int sequenciaFibonnaci[MAX];

  fibonacci(sequenciaFibonnaci);
  escreverFibonnaci(sequenciaFibonnaci);

  despedida();
}


void fibonacci(long int arranjo[]){
/*
Lucas Santiago - 18/05/19
Objetivo: Escrever a sequencia de Fibonnaci em um arranjo
Entrada: arranjo
Sem saida
*/
  int num1=0, num2=1, aux, pa=1;
  for(int i = 0; i < MAX; i++){
    arranjo[i] = pa;
    pa = num1 + num2;
    num1 = num2;
    num2 = pa;
  }
}


void escreverFibonnaci(long int arranjo[]){
//Escrever a sequencia de Fibonnaci na tela
  for(int i = 0; i < MAX; i++){
    printf("%ld, ", arranjo[i]);
    if (i % 10 == 0) printf("\n");
  }
}
