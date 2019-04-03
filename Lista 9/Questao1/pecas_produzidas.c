/*
Codigo criado pelo Pedro Madeira
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int total=0,
        numero_lote,
        lote1=0,
        lote2=0,
        lote3=0,
        lote4=0,
        lote5=0,
        boas=0,
        boas_1=0,
        boas_2=0,
        boas_3=0,
        boas_4=0,
        boas_5=0,
        ruins=0,
        ruins_1=0,
        ruins_2=0,
        ruins_3=0,
        ruins_4=0,
        ruins_5=0,
        aux1,
        aux2;


        /* Para cada (1) lote, ha 100 maquinas*/
        printf("------------------------------------------------------------\n");
        printf("\nStatus da Linha de producao.\n");
        printf("------------------------------------------------------------\n");
        do{
            printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
            printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
            scanf("%i", &numero_lote);
            if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
        }while (numero_lote < 0 || numero_lote > 5);

        while(numero_lote != 0){
/* lote 1 ------------------------------------------------------------------------------------------------------------------------*/
            if (numero_lote == 1){
                printf("------------------------------------------------------------\n");
                printf("Lote (1) selecionado.");
                printf("\n--Status atual do lote--\nTotal de pecas produzidas por este lote: (%i) \nTotal de pecas defeituosas: (%i)\n", lote1,ruins_1);
                do{
                    printf("\nDigite o numero de pecas produzidas: ");
                    scanf("%i",&aux1);
                    if (aux1<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                }while (aux1 <1);
                do{
                    printf("\nDigite o numero de pecas defeituosas: ");
                    scanf("%i",&aux2);
                    if (aux2<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                    if (aux2 > aux1) printf("\n\a=== Valor invalido. O numero de pecas defeituosas nao pode ser\n maior do que o numero de pacas produzidas. Tente novamente. ===\n");
                }while (aux2 <1 || aux2 > aux1);

                lote1 = lote1+aux1;
                boas_1 = boas_1+aux1-aux2;
                boas = boas + boas_1;
                ruins_1 = ruins_1+aux2;
                ruins = ruins + ruins_1;
                total = total+lote1;

                fflush(stdin);

                printf("\nAdicionado (+%i) pecas a lote (1) sendo (%i) delas defeituosas.", aux1,aux2);

                printf("\n------------------------------------------------------------\n");
                do{
                    printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
                    printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
                    scanf("%i", &numero_lote);
                    if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
                }while (numero_lote < 0 || numero_lote > 5);


            } /*fim if lote(1)*/
/* lote 2 ------------------------------------------------------------------------------------------------------------------------*/
            if (numero_lote == 2){
                printf("------------------------------------------------------------\n");
                printf("Lote (2) selecionado.\n");
                printf("\n--Status atual do lote--\nTotal de pecas produzidas por este lote: (%i) \nTotal de pecas defeituosas: (%i)\n", lote2,ruins_2);
                do{
                    printf("\nDigite o numero de pecas produzidas: ");
                    scanf("%i",&aux1);
                    if (aux1<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                }while (aux1 <1);
                do{
                    printf("\nDigite o numero de pecas defeituosas: ");
                    scanf("%i",&aux2);
                    if (aux2<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                    if (aux2 > aux1) printf("\n\a=== Valor invalido. O numero de pecas defeituosas nao pode ser\n maior do que o numero de pacas produzidas. Tente novamente. ===\n");
                }while (aux2 <1 || aux2 > aux1);

                lote2 = lote2+aux1;
                boas_2 = boas_2+aux1-aux2;
                boas = boas + boas_2;
                ruins_2 = ruins_2+aux2;
                ruins = ruins + ruins_2;
                total = total+lote2;

                fflush(stdin);

                printf("\nAdicionado (+%i) pecas a lote (2) sendo (%i) delas defeituosas.", aux1,aux2);

                printf("\n------------------------------------------------------------\n");
                do{
                    printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
                    printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
                    scanf("%i", &numero_lote);
                    if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
                }while (numero_lote < 0 || numero_lote > 5);

            } /*fim if lote(2)*/
/* lote 3 ------------------------------------------------------------------------------------------------------------------------*/
            if (numero_lote == 3){
                printf("------------------------------------------------------------\n");
                printf("Lote (3) selecionado.\n");
                printf("\n--Status atual do lote--\nTotal de pecas produzidas por este lote: (%i) \nTotal de pecas defeituosas: (%i)\n", lote3,ruins_3);
                do{
                    printf("\nDigite o numero de pecas produzidas: ");
                    scanf("%i",&aux1);
                    if (aux1<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                }while (aux1 <1);
                do{
                    printf("\nDigite o numero de pecas defeituosas: ");
                    scanf("%i",&aux2);
                    if (aux2<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                    if (aux2 > aux1) printf("\n\a=== Valor invalido. O numero de pecas defeituosas nao pode ser\n maior do que o numero de pacas produzidas. Tente novamente. ===\n");
                }while (aux2 <1 || aux2 > aux1);

                lote3 = lote3+aux1;
                boas_3 = boas_3+aux1-aux2;
                boas = boas + boas_3;
                ruins_3 = ruins_3+aux2;
                ruins = ruins + ruins_3;
                total = total+lote3;

                fflush(stdin);

                printf("\nAdicionado (+%i) pecas a lote (3) sendo (%i) delas defeituosas.", aux1,aux2);

                printf("\n------------------------------------------------------------\n");
                do{
                    printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
                    printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
                    scanf("%i", &numero_lote);
                    if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
                }while (numero_lote < 0 || numero_lote > 5);

            } /*fim if lote(3)*/
/* lote 4 ------------------------------------------------------------------------------------------------------------------------*/
            if (numero_lote == 4){
                printf("------------------------------------------------------------\n");
                printf("Lote (4) selecionado.\n");
                printf("\n--Status atual do lote--\nTotal de pecas produzidas por este lote: (%i) \nTotal de pecas defeituosas: (%i)\n", lote4,ruins_4);
                do{
                    printf("\nDigite o numero de pecas produzidas: ");
                    scanf("%i",&aux1);
                    if (aux1<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                }while (aux1 <1);
                do{
                    printf("\nDigite o numero de pecas defeituosas: ");
                    scanf("%i",&aux2);
                    if (aux2<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                    if (aux2 > aux1) printf("\n\a=== Valor invalido. O numero de pecas defeituosas nao pode ser\n maior do que o numero de pacas produzidas. Tente novamente. ===\n");
                }while (aux2 <1 || aux2 > aux1);

                lote4 = lote4+aux1;
                boas_4 = boas_4+aux1-aux2;
                boas = boas + boas_4;
                ruins_4 = ruins_4+aux2;
                ruins = ruins + ruins_4;
                total = total+lote4;

                fflush(stdin);

                printf("\nAdicionado (+%i) pecas a lote (4) sendo (%i) delas defeituosas.", aux1,aux2);

                printf("\n------------------------------------------------------------\n");
                do{
                    printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
                    printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
                    scanf("%i", &numero_lote);
                    if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
                }while (numero_lote < 0 || numero_lote > 5);


            } /*fim if lote(4)*/
/* lote 5 ------------------------------------------------------------------------------------------------------------------------*/
            if (numero_lote == 5){
                printf("------------------------------------------------------------\n");
                printf("Lote (5) selecionado.\n");
                printf("\n--Status atual do lote--\nTotal de pecas produzidas por este lote: (%i) \nTotal de pecas defeituosas: (%i)\n", lote5,ruins_5);
                do{
                    printf("\nDigite o numero de pecas produzidas: ");
                    scanf("%i",&aux1);
                    if (aux1<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                }while (aux1 <1);
                do{
                    printf("\nDigite o numero de pecas defeituosas: ");
                    scanf("%i",&aux2);
                    if (aux2<1) printf("\n\a=== Valor invalido. Tente novamente. ===\n");
                    if (aux2 > aux1) printf("\n\a=== Valor invalido. O numero de pecas defeituosas nao pode ser\n maior do que o numero de pacas produzidas. Tente novamente. ===\n");
                }while (aux2 <1 || aux2 > aux1);

                lote5 = lote5+aux1;
                boas_5 = boas_5+aux1-aux2;
                boas = boas + boas_5;
                ruins_5 = ruins_5+aux2;
                ruins = ruins + ruins_5;
                total = total+lote5;

                fflush(stdin);

                printf("\nAdicionado (+%i) pecas a lote (1) sendo (%i) delas defeituosas.", aux1,aux2);

                printf("\n------------------------------------------------------------\n");
                do{
                    printf("Digite o numero referente ao lote de maquinas voce quer entrar: \n");
                    printf("Lote1 = (1)\nLote2 = (2)\nLote3 = (3)\nLote4 = (4)\nLote5 = (5)\nFinalizar o progama = (0)\nNumero do lote: ");
                    scanf("%i", &numero_lote);
                    if (numero_lote < 0 || numero_lote > 5) printf("\n\a=== Lote invalido. Tente novamente. ===\n");
                }while (numero_lote < 0 || numero_lote > 5);


            } /*fim if lote(5)*/

        } /*---fim while---*/
        printf("\n==============================================================\n");
        printf("\nProgama Encerrado.");
        printf("\nStatus Geral da Producao:\nNumero total de pecas produzidas (%i).\nNumero total de pecas defeituosas (%i).", total,ruins);
        printf("\n--------------------------------------------------------------\n");
        printf("\nStatus individual de cada lote:\n-----\nLote(1)\nNumero de pecas produzidas: %i\nNumero de pecas produzidas com sucesso: %i\nNumero de pecas defeituosas: %i\n-----\nLote(2)\nNumero de pecas produzidas: %i\nNumero de pecas produzidas com sucesso: %i\nNumero de pecas defeituosas: %i\n-----\nLote(3)\nNumero de pecas produzidas: %i\nNumero de pecas produzidas com sucesso: %i\nNumero de pecas defeituosas: %i\n-----\nLote(4)\nNumero de pecas produzidas: %i\nNumero de pecas produzidas com sucesso: %i\nNumero de pecas defeituosas: %i\n-----\nLote(5)\nNumero de pecas produzidas: %i\nNumero de pecas produzidas com sucesso: %i\nNumero de pecas defeituosas: %i\n", lote1,boas_1,ruins_1,lote2,boas_2,ruins_2,lote3,boas_3,ruins_3,lote4,boas_4,ruins_4,lote5,boas_5,ruins_5);
        printf("\n==============================================================\n");
        if (lote1>lote2 && lote1>lote3 && lote1>lote4 && lote1>lote5){
            printf("O Lote (1) foi o lote com maior producao de pecas.\nDestas:\n(%i) Foram produzidas no total.\n(%i) Tiveram sucesso na producao.\n(%i) Ficaram defeituosas.", lote1,boas_1,ruins_1);
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }
        if (lote2>lote1 && lote2>lote3 && lote2>lote4 && lote2>lote5){
            printf("O Lote (2) foi o lote com maior producao de pecas.\nDestas:\n(%i) Foram produzidas no total.\n(%i) Tiveram sucesso na producao.\n(%i) Ficaram defeituosas.", lote2,boas_2,ruins_2);
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }
        if (lote3>lote2 && lote3>lote1 && lote3>lote4 && lote3>lote5){
            printf("O Lote (3) foi o lote com maior producao de pecas.\nDestas:\n(%i) Foram produzidas no total.\n(%i) Tiveram sucesso na producao.\n(%i) Ficaram defeituosas.", lote3,boas_3,ruins_3);
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }
        if (lote4>lote2 && lote4>lote3 && lote4>lote1 && lote4>lote5){
            printf("O Lote (4) foi o lote com maior producao de pecas.\nDestas:\n(%i) Foram produzidas no total.\n(%i) Tiveram sucesso na producao.\n(%i) Ficaram defeituosas.", lote4,boas_4,ruins_4);
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }
        if (lote5>lote2 && lote5>lote3 && lote5>lote4 && lote5>lote1){
            printf("O Lote (5) foi o lote com maior producao de pecas.\nDestas:\n(%i) Foram produzidas no total.\n(%i) Tiveram sucesso na producao.\n(%i) Ficaram defeituosas.", lote5,boas_5,ruins_5);
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }
        if (lote1==0 && lote2==0 && lote3==0 && lote4==0 && lote5==0){
            printf("\a Nao houve quantidade de pecas suficientes para o calculo da producao.");
            printf("\n--------------------------------------------------------------\n\n\n\n");
        }

    return 0;
}
