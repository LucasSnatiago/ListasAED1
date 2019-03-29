#include <stdlib.h>
#include <stdio.h>

int main(){
  int num;

  printf("\nCalculadora para descobrir numeros pares e impares");
  printf("\nEscreva seu numero: ");
  scanf("%i", &num);


  if(num % 2 == 0){
    printf("\nO numero %i é par!", num);
  }
  else{
    printf("\nO numero %i é impar!", num);
  }
}
