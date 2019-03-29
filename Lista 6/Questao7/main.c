#include <stdlib.h>
#include <stdio.h>

int main(){
    double num, maior, menor;

    printf("Calculadora de maior e menor numero, dentre 10 numeros");

    printf("\nDigite o numero: ");
    scanf("%lf", &num);
    maior = num;
    menor = num;

    for(int i = 0; i < 9; i++){
        printf("\nDigite outro numero: ");
        scanf("%lf", &num);

        if(num >= maior){
            maior = num;
        }
        else if (num <= menor) {
            menor = num;
        }

        }

        printf("O maior numero e %.2f e o menor numero e %.2f\n", maior, menor);



    }
