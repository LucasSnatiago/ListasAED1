#include <stdio.h>
#include <stdlib.h>

void lerInt(int *num);
void maiorNum(int *num1, int *num2);
void escreverTela(int *num);

void main(){
    int num1, num2;
    lerInt(&num1); 
    lerInt(&num2); 

    maiorNum(&num1 ,&num2); 
    escreverTela(&num1);
}


void lerInt(int *num){
    printf("\nEscreva um numero inteiro: ");
    fflush(stdin);
    scanf("%d", num);
}

void maiorNum(int *numero1, int *numero2){
    
    if(*numero1 < *numero2) *numero1 = *numero2;
    
}

void escreverTela(int *num){

    printf("O maior eh %d", *num);

}
