#include <stdlib.h>
#include <stdio.h>

  int main(){
    float lado,
          area;

    printf("\nCálculo da area de um quadrado");
    printf("\nDigite o valor do lado do quadrado:");
    scanf("%f", &lado);

    area = lado * lado;
    printf("\nA area do quadrado é %f", area);
    exit(0);
  }
