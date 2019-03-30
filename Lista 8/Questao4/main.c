#include <stdio.h>
#include <stdlib.h>

int main(){
    char exec;
    float flag = 0, maior, menor, num;

    printf("Calculadora de amplitude em uma sequencia numerica!\n");

    do{
        do{
            printf("Digite um numero: ");
            fflush(stdin);
            scanf("%f", &num);
            if(num < 0) printf("\nNumeros negativos nao sao permitidos!\nTente Novamente!\n");
        }while(num < 0);

        if(num != flag){
            maior = num;
            menor = num;

       
            while(num != flag || num < 0){
                printf("Digite um numero: ");
                fflush(stdin);
                scanf("%f", &num);
                if(num < 0) printf("\nNumeros negativos nao sao permitidos!\nTente Novamente!\n");
        

                if(num > 0 && num != flag && num > maior) maior = num;
                if(num > 0 && num != flag && num < menor) menor = num;
            }
        
            printf("\nO maior numero lido é %.2f e o menor é %.2f.", maior, menor);
            num = maior - menor; //reciclei a variavel num, para gastar menos espaco de memoria, ja que nao esta sendo utilizada mais.
            printf("\nA amplitude entre esses valores é de %.2f.\n", num);

        }

        else {
            printf("\nNenhum valor informado!\n");
        }

    do{ 
        printf("\nVoce deseja usar o programa novamente (s/n): ");
        fflush(stdin);
        scanf("\n%c", &exec);
        if(exec != 's' && exec != 'n') printf("\nVoce digitou algo errado!\nTente Novamente!\n");
    }while(exec != 's' && exec != 'n');
    }while(exec == 's');

    printf("\nObrigado por usar meu programa!\n");
}

/*
Construa um programa que leia um conjunto de valores inteiros e positivos e que calcule e mostre sua amplitude
(diferença entre o maior e o menor valor do conjunto). Considere que:
Para encerrar a leitura dos dados, deve ser digitado o valor zero.
Caso nenhum valor seja lido, o programa deverá substituir a escrita da amplitude pela mensagem “nenhum valor informado”.
Para valores negativos, deve ser enviada uma mensagem de rejeição e forçada uma nova leitura.
Ao final, permitir ao usuário decidir entre repetir o programa ou encerrá-lo, rejeitando resposta diferente da prevista.
*/