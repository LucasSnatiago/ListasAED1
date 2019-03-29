#include <stdlib.h>
#include <stdio.h>

int main(){
    float PA, termo, razao;
    int iteracoes;

    printf("Calculadora de termos de PA");
    printf("\nEscreva o primeiro termo da PA: ");
    scanf("%f", &termo);
    printf("\nEscreva a razao entre os proximos termos: ");
    scanf("%f", &razao);

    printf("\nDigite o numero de iteracoes: ");
    scanf("%d", &iteracoes);

    for(int i = 0; i <= iteracoes; i++){
       
        PA = termo + razao * i;

        printf("\n%.2f", PA);
    }

    printf("\n");
    return 0;

}