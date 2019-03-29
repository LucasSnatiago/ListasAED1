#include <stdlib.h>
#include <stdio.h>

int main(void){
    float porcentagemMaiorIdade, maiorDeIdade = 0;
    int Velho, Novo, idade, numAlunos, soma = 0;
    
    printf("Calculadora de perfil de turma\n");
    
    do{
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &idade);
    }while(idade < 0 || idade > 100);

    Velho = idade;
    Novo = idade;
    soma += idade;
    idade++;

    for(int i = 1; i < numAlunos; i++){
        
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

}

/*
    Construa um programa que permita identificar o perfil da turma:
        - Percentual de alunos maiores em idade.
        - Idade da pessoa mais velha.
        - Idade da pessoa mais nova.
Domínio dos dados:
		Idade: 1..100
* Deverão ser rejeitados os valores lidos fora do domínio
* O número de alunos da turma deverá ser um valor lido

*/