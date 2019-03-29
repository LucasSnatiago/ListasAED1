#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;

    printf("Calculadora de hipotenusa");
    printf("\nPor favor diga um dos catetos: ");
    scanf("%f", &cateto1);
    printf("\nPor favor digite o outro cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("A hipotenusa desse triangulo é %f", hipotenusa);
}
