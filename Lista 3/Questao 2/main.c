#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, potencia, resultado;

    printf("Calculadora de potencia");
    printf("\nPor favor digite o valor da base: ");
    scanf("%f", &base);
    printf("Por favor digite a potencia: ");
    scanf("%f", &potencia);
    resultado = pow(base, potencia);

    printf("O resultado da sua potencia é %f", resultado);
}
