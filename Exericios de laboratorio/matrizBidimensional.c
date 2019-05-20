#include <stdio.h>
#include <stdlib.h>

const int MAX1 = 3;
const int MAX2 = 2;


void leArranjo(int arranjo[][MAX2]);
void escreverMatriz(int arranjo[][MAX2]);
float mediaArranjo(int arranjo[][MAX2]);

void main(){
    int arranjo[MAX1][MAX2];
    leArranjo(arranjo);

    escreverMatriz(arranjo);
    float media = mediaArranjo(arranjo);

    printf("A media dos valores do arranjo eh %.2f", media);
}


void leArranjo(int arranjo[][MAX2]){
    int entrada;
    printf("\nEscreva Valores para serem adicionados no arranjo");
    for(int i = 0; i < MAX1; i++){
        for(int j = 0; j < MAX2; j++){ 
            printf("\nEscreva um numero int: ");
            fflush(stdin);
            scanf("%d", &entrada);
            arranjo[i][j] = entrada;
        }
    }
}

void escreverMatriz(int arranjo[][MAX2]){
    for(int i = 0; i < MAX1; i++){
        for(int j = 0; j < MAX2; j++){
            printf("%d\t", arranjo[i][j]);
        }
        printf("\n");
    }
}


float mediaArranjo(int arranjo[][MAX2]){
    float media;
    int soma = 0;
    for(int i = 0; i < MAX1; i++){
        for(int j = 0; j < MAX2; j++){
            soma += arranjo[i][j];
        }
    }
    media = (float) soma / (MAX1 * MAX2);
    return media;
}