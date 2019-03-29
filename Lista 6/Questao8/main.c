#include <stdlib.h>
#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operador;

    printf("Calculadora");
    
    do{
        printf("\n\nDigite sua conta no formato (operador ENTER numero ENTER numero):");
        printf("\n[s] para sair");
        printf("\n[+] para somar");
        printf("\n[-] para subtrair");
        printf("\n[*] para multiplicar");
        printf("\n[/] para dividir");
        printf("\n");

        scanf("\n%c", &operador);

        if (operador == 's'){
            printf("\nObrigado por usar este programa\n");
            return 0;
        }

        scanf("\n%f", &num1);
        scanf("\n%f", &num2);

        if(operador == '+'){
            resultado = num1 + num2;
            printf("\nO resultado da sua conta é %f", resultado);
        }
        else if(operador == '-'){
            resultado = num1 - num2;
            printf("\nO resultado da sua conta é %f", resultado);
        }
        else if(operador == '*'){
            resultado = num1 * num2;
            printf("\nO resultado da sua conta é %f", resultado);
        }
        else if(operador == '/'){
            resultado = num1 / num2;
            printf("\nO resultado da sua conta é %f", resultado);
        }
        else
        {
            printf("\nVoce digitou algo de errado!");
        }
    }while(operador != 's');

}


/*--Fazer uma calculadora

--Adicionar as opercoes basicas

--Rodar a calculadora dentro de um while

--Adicionar botoes para selecionar as operacoes aritmeticas
    --Primeria botao é o botao sair
        --Escrever “Obrigado por usar este programa” ao sair

*/