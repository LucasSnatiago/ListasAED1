#include <stdlib.h>
#include <stdio.h>

void main(){
    int entrada, fatorial;

    printf("Calculadora de fatorial");
    printf("\nPara sair do programa digite qualquer valor negativo!");

    do{
        fatorial = 1;

        
        printf("\nDigite um numero: ");
        fflush(stdin);
        scanf("%d", &entrada);
        
        for(int i = entrada; i > 0; i--){
            fatorial *= i;
        }

        if(entrada < 0){
            printf("Obrigado por usar meu programa.\n");
            return;
      }

        printf("\nO resultado é %d\n", fatorial);
    
    }while(entrada >= 0);

}



/*

Construa um programa que calcule e escreva o fatorial de um número inteiro e positivo
sendo este número um valor lido
Repetir o programa até que seja lido um valor negativo qualquer. 
Exemplo de fatorial: 5! = 5 x 4 x 3 x 2 x 1.
Lembre-se que, por definição, 0! é igual a 1.



*/