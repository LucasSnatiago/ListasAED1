#include "mochilaDoHeroi.h"

const int MAX = 100;
const int flag = 0;
int lerLista(int lista[]);
void trocarItensArranjo(int lista[], int item1, int item2);

void main(){
    apresentacao();

    int lista[MAX];
    int itensLista = lerLista(lista);
    printf("\nEscreva o primeiro item para ser trocado");
    int pos1 = lerInt();
    printf("\nEscreva o segundo item para ser trocado");
    int pos2 = lerInt();

    trocarItensArranjo(lista,--pos1,--pos2);

    printf("\nA lista final ficou:\n");
    for(int i = 0; i < itensLista; i++){
        printf("%d\n", lista[i]);
    }

    despedida();
}


int lerLista(int lista[]){
/*
Lucas Santiago - 13/05/19
Objetivo: escrever valroes em uma lista
Entrada: Lista
Saida: numero de itens que foram escritos nela
*/
    int num, contador = 0;

    num = lerInt();
    while(num != flag){
        lista[contador] = num;
        contador++;
        num = lerInt();
    }
    return contador;
}

void trocarItensArranjo(int lista[], int item1, int item2){
/*
Lucas Santiago - 13/05/19
Objetivo: trocar itens em um arranjo
Entrada: Arranjo, primeiro item para ser troca, segundo item para ser trocado
Sem saida
*/
    int aux;
    aux = lista[item1];
    lista[item1] = lista[item2];
    lista[item2] = aux;
    printf("A posicao %d e %d foram trocados!", item1, item2);
}
