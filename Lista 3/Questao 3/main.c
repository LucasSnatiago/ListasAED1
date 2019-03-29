#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, resultado;

    printf("Calculadora de area de retangulo");
    printf("\nPor favor digite a base do retangulo: ");
    scanf("%f", &base);
    printf("\nAgora digite a altura: ");
    scanf("%f", &altura);

    resultado = base * altura;

    printf("A area desse retangulo é %f", resultado);
}
