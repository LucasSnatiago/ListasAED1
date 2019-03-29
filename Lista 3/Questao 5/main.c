#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ponto1, ponto2, resultado;
    printf("Calculadora de distancia de uma reta");
    printf("\nDigite o ponto de maior valor: ");
    scanf("%f", &ponto1);
    printf("\nDigite o ponto de menor valor: ");
    scanf("%f", &ponto2);

    resultado = ponto1 - ponto2;
    printf("A distancia entre esses dois pontos é %f", resultado);
}
