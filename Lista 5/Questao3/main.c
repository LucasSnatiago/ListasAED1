#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, menor=0, medio=0, maior=0;

    printf("Ordenador de numeros em ordem decrescente");
    printf("\nDigite o primeiro numero: ");
    scanf("%i", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%i", &num2);
    printf("\nDigite o terceiro numero: ");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3){
        maior = num1;
        if(num1 > num3){
            if(num2 > num3){
                menor = num3;
                medio = num2;
            }
            else{
                
                medio = num3;
                menor = num2;
            }
        }
        else if(num1 < num3){
            if(num2 < num3){
                menor = num2;
                medio = num3;
            }
            else{
                medio = num2;
                menor = num3;
            }
        }
    }
    if(num2 > num1 && num2 > num3){
        maior = num2;
        if(num2 > num1){
            if(num1 > num3){
                menor = num3;
                medio = num1;
            }
            else{
                
                medio = num3;
                menor = num1;
            }
        }
        else if(num2 < num1){
            if(num1 < num3){
                menor = num3;
                medio = num1;
            }
            else{
                medio = num3;
                menor = num1;
            }
        }
    }    
    if(num3 > num1 && num3 > num2){
        maior = num3;
        if(num3 > num1){
            if(num1 > num2){
                menor = num2;
                medio = num1;
            }
            else{
                
                medio = num2;
                menor = num1;
            }
        }
        else if(num3 < num1){
            if(num1 < num2){
                menor = num1;
                medio = num2;
            }
            else{
                medio = num1;
                menor = num2;
            }
        }    
    }
    printf("Os numeros em ordem decrescente fica: %i, %i, %i", maior, medio, menor);
}
