#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    long long int result = 0;
    printf("Calculadora da serie de Fetuccine\n");
    
    printf("Escreva o primeiro valor: ");
    fflush(stdin);
    scanf("\n%d", &num1);

    printf("Escreva o segundo valor: ");
    fflush(stdin);
    scanf("\n%d", &num2);

    printf("100 primeiros termos da serie:\n");
    for(int i = 0; i < 100; i++){
        
        if(i % 2 == 0){
            result = num1 - num2;
        }
        else{
            result = num1 + num2;
        }

        num2 = num1;
        num1 = result;
        
    
        printf("%lld, ", result);
    }
    printf("\nObrigado por usar meu programa.\n");
}

/*
A série de FETUCCINE é gerada da seguinte forma: 
os dois primeiros termos são fornecidos pelo usuário;
a partir daí, os termos são gerados com a soma ou subtração dos dois termos anteriores, ou seja:
		Ai = Ai-1 + Ai-2, para i ímpar
		Ai = Ai-1 - Ai-2, para i par
Construa um programa que escreva os cem primeiros termos da série de FETUCCINE,
sabendo que para existir esta série são necessários pelo menos três termos.  
*/