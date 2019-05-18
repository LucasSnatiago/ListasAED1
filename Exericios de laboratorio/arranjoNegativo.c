#include "mochilaDoHeroi.h"

const int MAX = 10;
float percentualNegativo(float lista[], int numItens);

void main(){
    apresentacao();
   
    float lista[] = {18,17,18,19,18,17,18,17,-20,-5};
    float percentual = percentualNegativo(lista, MAX);
    printf("A porcentagem de numeros negativo %.2f", percentual);

    despedida();
}

float percentualNegativo(float lista[], int numItens){
/*
Lucas Santiago - 13/05/19
Objetivo: descobrir o percentual de numeros negativos em uma lista
Entrada: array, numero de itens da lista
Saida: porcetagem de numeros negativos na lista
*/
    int c = 0;

    for(int i = 0; i < MAX; i++){
        if(lista[i] < 0){
            c++;
        }
    }
    float Percentual = (float) c / (float) MAX * 100.0;
    return Percentual;
}