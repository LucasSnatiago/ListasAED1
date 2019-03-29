#include <stdlib.h>
#include <stdio.h>

int main(){
    float num1, num2, num3, soma;

    printf("Calculadora para dizer se a soma de dois numeros (a + b) e menor que um terceiro numero (c)");
    printf("\nEscreva o primeiro numero (a): ");
    scanf("%f", &num1);
    printf("\nEscreva o segundo numero (b): ");
    scanf("%f", &num2);
    printf("\nEscreva o terceiro numero (c): ");
    scanf("%f", &num3);

    
    if (num1 + num2 < num3)
    {
        printf("\nA soma dos numeros %.2f e %.2f e menor que o numero %.2f", num1, num2, num3);
    }
    else if(num1 + num2 > num3)
    {
        printf("\nA soma dos numeros %.2f e %.2f e maior que o numero %.2f", num1, num2, num3);
    }
    else
    {
    printf("\nA soma dos numeros %.2f e %.2f e igual ao numero %.2f", num1, num2, num3); 
    }
    
}