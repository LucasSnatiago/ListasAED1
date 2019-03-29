#include <stdlib.h>
#include <stdio.h>

int main() {
  float num1, num2;

  printf("\nOrdenador de numeros em ordem crescente");
  printf("\nPor favor digite os 2 numeros: ");
  scanf("%f", &num1);
  scanf("%f", &num2);


  if(num1 > num2){
    printf("\nO maior numero é %f e o menor é %f", num1, num2);
  }
  else if(num2 > num1){
    printf("\nO maior numero é %f e o menor é %f", num2, num1);
  }
  else{
    printf("\nOs dois numeros que você digitou são iguais!");
  }


  return 0;
}
