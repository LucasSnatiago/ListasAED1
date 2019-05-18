#include "mochilaDoHeroi.h"

void escreverNumeros(int *arranjo);
int numParesArranjo(int *arranjo);

void main(){
  apresentacao();
  int numeros[10];


  escreverNumeros(numeros);
  int pares = numParesArranjo(numeros);

  printf("\nO numero de pares do arranjo sao: %d", pares);

  despedida();
}

void escreverNumeros(int *arranjo){
  int escrever;
  printf("\nEscreva numeros para serem adicionados no arranjo");
  for(int i = 0; i < 10; i++){
    escrever = lerInt();
    arranjo[i] = escrever;
  }
}

int numParesArranjo(int *arranjo){
  int contador = 0;
  for(int i = 0; i < 10; i++){
    if(arranjo[i] % 2 == 0){
      contador++;
    }
  }
  return contador;
}
