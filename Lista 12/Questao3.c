#include <stdio.h>
#include <stdlib.h>

int lerInt();
void maiorNum(int *num1, int *num2);
void escreverTela(int *num);

void main(){
    int num1 = lerInt();
    int num2 = lerInt();

    printf("\nLocalizacao da memoria num1: %p", &num1); //localizacao das variaveis na memoria para simples conferencia
    printf("\nLocalizacao da memoria num2: %p", &num2); //localizacao das variaveis na memoria para simples conferencia

    maiorNum(&num1 ,&num2);
    escreverTela(&num1);
}


int lerInt(){
    int num;
    printf("\nEscreva um numero inteiro: ");
    fflush(stdin);
    scanf("%d", &num);
    return num;
}

void maiorNum(int *numero1, int *numero2){

    if(*numero1 < *numero2) *numero1 = *numero2;

}

void escreverTela(int *num){

    printf("\nO maior eh %d\n", *num);

}
