#include <stdlib.h>
#include <stdio.h>

  int main(){
    float lado1,
          lado2,
          perimetro;

    printf("\nCálculo do perímetro de um retangulo");
    printf("\nDigite o valor dos lados do retangulo (com um espaço entre eles)");
    scanf("%f %f", &lado1, &lado2);

    perimetro = lado1 * 2 + lado2 * 2;
    printf("\nO perimetro do retangulo é %f", perimetro);
    exit(0);
  }
