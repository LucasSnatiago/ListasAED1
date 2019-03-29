#include <stdlib.h>
#include <stdio.h>

  int main(){
    float raio,
          pi = 3.14159265359,
          area;

    printf("\nCálculo da area de um circulo");
    printf("\nDigite o valor do raio do circulo:");
    scanf("%f", &raio);

    area = raio * raio * pi;
    printf("\nA area do circulo é %f", area);
    exit(0);
  }
