#include <stdlib.h>
#include <stdio.h>

  int main(){
    float raio,
          pi = 3.14159265359,
          perimetro;

    printf("\nCálculo do perimetro de um circulo");
    printf("\nDigite o valor do raio do circulo:");
    scanf("%f", &raio);

    perimetro = 2 * raio * pi;
    printf("\nO perimetro do circulo é %f", perimetro);
    exit(0);
  }
