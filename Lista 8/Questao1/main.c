#include <stdlib.h>
#include <stdio.h>

void main(){
    int potencia;
    float base, result;

    printf("Calculadora de potencias");
    

    printf("\nEscreva a base: ");
    fflush(stdin);
    scanf("%f", &base);
    
    do{
        printf("Escreva o valor da potencia: ");
        fflush(stdin);
        scanf("%d", &potencia);
        if(potencia < 0) printf("Voce digitou algo errado!\n");
    }while(potencia < 0);

    if(potencia > 0) result = base;
    else{
        printf("O resultado da operacao é 1.00.\n");
        return;
    }

    for(int i = 1; i < potencia; i++){

        result *= base; 

    }

    printf("O resultado da operacao é %.2f.\n", result);
}




/*
    Calcular e escrever a potenciação. 
    A base e o expoente deverão ser valores lidos – rejeitar a leitura de valores inválidos.
    Considere: base um valor real.
    Expoente: um número inteiro, positivo ou nulo(zero).
    Obs: Não usar a classe Math. A potenciação deverá ser calculada de forma iterativa.
*/