#include <stdlib.h>
#include <stdio.h>

int main(void){
    float porcentagemMaiorIdade, maiorDeIdade = 0;
    int Velho, Novo, idade, i = 0, soma = 0;
    
    printf("Calculadora de perfil de turma\n");
    
    do{
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &idade);
    }while(idade < 0 || idade > 100);

    Velho = idade;
    Novo = idade;
    soma += idade;
    i++;

    while(idade != 0){
        
        printf("Digite uma idade: ");
        fflush(stdin);
        scanf("%d", &idade);

        
        if(idade < 0 || idade > 100){
            printf("\nVoce digitou a idade incorretamente.");
            printf("\nPor favor tente novamente!\n");
        }
    
        else{
            i++;
            soma += idade;
            if(idade > Velho){
                Velho = idade;
        }
            if(idade < Novo){
                Novo = idade;
        }
            if(idade >= 18){
                maiorDeIdade++;
            }
        }

    }
    
    porcentagemMaiorIdade = maiorDeIdade / i * 100;

    printf("\n%.2f%% sao maiores de idade.", porcentagemMaiorIdade);
    printf("\nA pessoa mais velha tem %d e a mais nova tem %d\n", Velho, Novo);

/*
    Construa uma versão para a questão anterior em que a finalização do programa não seja definida pelo número de alunos da turma. 
    Ao contrário, a finalização deverá ocorrer a partir da leitura da idade: flag para finalização do programa: idade igual a zero (sair do programa).
* Lembre-se de ajustar a consistência da idade lida

*/