/*
Feito pelo Paulo Campos
*/

#include <stdio.h>
#include <stdlib.h>

float lenumero();
float SOMA(float num1, float num2);
void escreva(float valor);

int main()
{
    float a = lenumero();
    float b = lenumero();
    float soma = SOMA(a,b);
    escreva(soma);
}

float lenumero()
{
    float x;
    
    printf("\nDigite valor");
    scanf("%f", &x);
    return x;
}

float SOMA(float num1, float num2)
{
    float num3=num1+num2;
    return num3;
}

void escreva(float valor)
{
    printf("\n%f", valor);
}
