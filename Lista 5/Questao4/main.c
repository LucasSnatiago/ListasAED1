#include <stdlib.h>
#include <stdio.h>

int main(){
    int diaSemana;

    printf("Calculadora de dia da semana\n");
    printf("Digite o dia da semana (sendo 1 = domingo e 7 = sabado: ");
    scanf("%i", &diaSemana);

    switch (diaSemana)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Voce digitou o numero errado");
            break;
    }
    printf("\n");
}