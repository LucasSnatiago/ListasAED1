#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int PA, x, razao, numTermos;
    char Exec;

    printf("Calculadora de numeros divisiveis em uma PA.");
    
    do{
        do{
            printf("\nEscreva o primeiro termo da PA: ");
           fflush(stdin);
           scanf("%d", &x);
        }while(x < 0);

        do{
           printf("Digite a razao dos termos da PA: ");
          fflush(stdin);
           scanf("%d", &razao);
       }while(razao < 0);

        printf("Quantos termos essa PA contem: ");
       fflush(stdin);
       scanf("%d", &numTermos);

       //Calculadora da PA
        for(int i = 0; i < numTermos; i++){
           PA = x + (i * razao);

            if(PA % x == 0){
              printf("O número %d é divisivel por %d.\n", PA, x);
            }
   
        }
        do{
            printf("Deseja usar o programa novamente (s/n): ");
            fflush(stdin);
            scanf("%c", &Exec);
            tolower(Exec);
            if(Exec != 's' && Exec != 'n') printf("\nEntrada incorreta! Tente novamente!\n");
        }while(Exec != 's' && Exec != 'n');
    }while(Exec == 's');


    printf("Obrigado por usar meu programa!\n");
    //printf("Primeiro termo: %d, Razao: %d, PA: %d, numero de termos: %d\n", x, razao, PA, numTermos); //Debugger para descobrir erros da pa.
}

/*
Sobre uma Progressão Aritmética
deseja-se saber o número de termos divisíveis por x
sendo x um valor lido
O número de termos, o primeiro termo e a razão também deverão ser lidos.
O programa deverá rejeitar a leitura de valores inválidos, quando aplicável.
Ao final, permitir ao usuário decidir entre um novo cálculo ou o encerramento do programa, rejeitando resposta diferente da prevista.

*/