#include "mochilaDoHeroi.h"

const int MAX = 100;
const int flag = 0;
int lerLista(int lista[]);
void trocarItensArranjo(int lista[], int item1, int item2);

void main(){
    apresentacao();

    int lista[MAX];
    printf("\nPara finalizar o programa digite 0");
    int itensLista = lerLista(lista);
    trocarItensArranjo(lista, 0 ,itensLista - 1);
    printf("\nO primeiro item da lista eh: %d", lista[0]);
    printf("\nO ultimo item da lista eh: %d", lista[itensLista-1]);

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
    printf("A posicao %d e %d foram trocados!", item1+1, item2+1);
}
