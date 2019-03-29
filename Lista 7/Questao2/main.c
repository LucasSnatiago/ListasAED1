#include <stdlib.h>
#include <stdio.h>

int main(void){
    int termos, PA1, PA2, resultado;

    printf("Calculadora de n termos da equacao (1/100,   97/2,   3/94,   91/4,   5/88, ...)");
    printf("\nDigite o numero de termos: ");
    scanf("%d", &termos);

    for(int i = 0; i < termos; i++){

        PA1 = 1 + (1 * i);
        PA2 = 100 - (3 * i);

        if(PA1 % 2 == 1.0){
            printf("\n%d/%d", PA1, PA2);
        }
        else{
            printf("\n%d/%d", PA2, PA1);
        }

    }

    printf("\nObrigado por usar meu programa!\n");

}

/*

    Calcular N valores de (1/100,   97/2,   3/94,   91/4,   5/88, ...)
        PA1 = valores 1, 2, 3...
        PA2 = valores 100, 97 ,94

*/