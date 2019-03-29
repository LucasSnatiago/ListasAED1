#include <stdlib.h>
#include <stdio.h>

int main(void){
    int termos, num1=0, num2=1, resultado;

    printf("Sequencia de Fibonacci");
    printf("\nDigite quantos termos voce desja exibir na tela: ");
    scanf("%d", &termos);

    printf("\n%d", num2);

    for(int i = 1; i < termos; i++){        
        
        resultado = num1 + num2;
        num1 = num2;
        num2 = resultado;
        printf(", %d", resultado);
  
    }
    printf("\nObrigado por usar o programa!\n");

}

/*
    Calcule e escreva os n primeiros termos Fibonacci, sendo n um valor lido. A sequência Fibonacci é constituída dos seguintes termos:
	    1, 1, 2, 3, 5, 8, 13, 21, 34, ...

*/