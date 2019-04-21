#include <stdlib.h>
#include <stdio.h>

int main(){
  float num1, num2, num3;

  printf("\nCalculadora de numero maior");
  printf("\nDigite o primeiro numero: ");
  scanf("%f", &num1);
  printf("\nDigite o segundo numero: ");
  scanf("%f", &num2);
  printf("\nDigite o terceiro numero: ");
  scanf("%f", &num3);

  if (num1 > num2 && num1 > num3){
    printf("\nO %f e o maior numero!", num1);
  }
  else if (num2 > num1 && num2 > num3){
    printf("\nO %f e o maior numero!", num2);
  }
   else if (num3 > num2 && num3 > num1){
    printf("\nO %f e o maior numero!", num3);
  }
  else{
    printf("\nDois ou mais numeros sao iguais!");
  }
}
