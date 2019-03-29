#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("Contador de numeros");
    
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    int maior = num1;
    int menor = num2;
    if (maior < num2){
        maior = num2;
        menor = num1;
    }
    for(; maior >= menor ; maior--)
        printf("%d\n", maior);
}