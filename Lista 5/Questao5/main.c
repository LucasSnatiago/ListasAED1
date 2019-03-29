#include <stdio.h>
#include <stdlib.h>

int main(){
    int numAno;

    printf("Numerador de meses do ano");
    printf("\nDigite o numero do mes: ");
    scanf("%i", &numAno);

    switch (numAno)
    {
        case 1:
            printf("Janeiro com 31 dias");
            break;
        case 2:
            printf("Fevereiro com 28 dias");
            break;
        case 3:
            printf("Março com 31 dias");
            break;
        case 4:
            printf("Abril com 30 dias");
            break;
        case 5:
            printf("Maio com 31 dias");
            break;
        case 6:
            printf("Junho com 30 dias");
            break;
        case 7:
            printf("Julho com 31 dias");
            break;
        case 8:
            printf("Agosto com 31 dias");
            break;
        case 9:
            printf("Setembro com 30 dias");
            break;
        case 10:
            printf("Outubro com 31 dias");
            break;
        case 11:
            printf("Novembro com 30 dias");
            break;
        case 12:
            printf("Dezembro com 31 dias");
            break;
        default:
            printf("Voce digitou algum numero incorreto!");
            break;
    }
    printf("\n");
}