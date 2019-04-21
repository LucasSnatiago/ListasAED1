#include <stdio.h>
#include <stdlib.h>

int main(){
  float num1, num2, operador, calculo;
  printf("\nCalculadora basica");
  printf("\nEscolha sua operacao:");
  printf("\nSoma = 1");
  printf("\nSubtracao = 2");
  printf("\nMultiplicacao = 3");
  printf("\nDivisao = 4\n");
  scanf("%f", &operador);
  printf("\nDigite o primeiro numero: ");
  scanf("%f", &num1);
  printf("\nDigite o segundo numero: ");
  scanf("%f", &num2);

  if(operador == 1)
  {
    calculo = num1 + num2;
    printf("\nO resultado da conta e %f\n", calculo);
  }
  else if(operador == 2)
  {
    calculo = num1 - num2;
    printf("\nO resultado da conta e %f\n", calculo);
  }
  else if(operador == 3)
  {
    calculo = num1 * num2;
    printf("\nO resultado da conta e %f\n", calculo);
  }
  else if(operador == 4)
  {
    calculo = num1 / num2;
    printf("\nO resultado da conta e %f\n", calculo);
  }
  else
  {
    printf("\nEssa opcao nao existe!\n");
  }
}
