
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//IMC = peso_kg / (altura_metro)2

int main(){
    float imc, altura, peso;

    printf("Calculadora de IMC");
    printf("\nDigite seu peso em kg: ");
    scanf("%f", &peso);
    printf("\nDigite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("O seu Imc é %.2f e ", imc);
    if(imc < 16){
        printf("voce esta com magreza grave!");
    }
    else if(imc >= 16 && imc < 17){
        printf("voce esta com magreza moderada!");
    }
    else if(imc >= 17 && imc < 18.5){
        printf("voce esta com magreza leve!");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("voce esta saudavel!");
    }
    else if(imc >= 25 && imc < 30){
        printf("voce esta com sobrepeso!");
    }
    else if(imc >= 30 && imc < 35){
        printf("voce esta com obesidade grau 1!");
    }
    else if(imc >= 35 && imc < 40){
        printf("voce esta com obesidade grau 2!");
    }
    else if(imc > 40){
        printf("voce esta com obesidade grau 3!");
    }
    printf("\n");
    
}