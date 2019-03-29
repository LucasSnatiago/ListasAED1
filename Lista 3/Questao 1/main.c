#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x, resultado;

    printf("\nCalculadora de funcao do primeiro grau");
    printf("\nQual o (a) da equacao (f(x) = ax + b): ");
    scanf("%f", &a);
    printf("\nQual o (b) da equacao (f(x) = ax + b): ");
    scanf("%f", &b);
    printf("\nQual o (x) da equacao (f(x) = ax + b): ");
    scanf("%f", &x);

    resultado = a*x + b;
    printf("\nO resultado de equacao é %f", resultado);
    return (0);
}
