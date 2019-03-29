#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, raiz1, raiz2;

    printf("Calculadora de equacao de 2 grau");
    printf("\nDigite o (a) da equacao (f(x) = ax2 + bx + c): ");
    scanf("%f", &a);
    printf("\nDigite o (b) da equacao (f(x) = ax2 + bx + c): ");
    scanf("%f", &b);
    printf("\nDigite o (c) da equacao (f(x) = ax2 + bx + c): ");
    scanf("%f", &c);

    raiz1 = ((b*-1.0) + sqrt(pow(b,2)- 4.0*a*c))/2.0*a;
    raiz2 = ((b*-1.0) - sqrt(pow(b,2)- 4.0*a*c))/2.0*a;

    printf("\nAs raizes da equacao s�o: %f e %f", raiz1, raiz2);
}
