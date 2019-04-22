#include <stdio.h>
#include <stdlib.h>
#include "mochilaDoHeroi.h"

float perimetro(float lado);


void main(){
    float ladoQuadrado;

    apresentacao();
    printf("\nCalculadora de perimetro de quadrado");

    do{
      ladoQuadrado = lerFloat();
      if(ladoQuadrado <= 0.0) printf("\nO lado do quadrado nao pode ser negativo nem zero");
    }while (ladoQuadrado <= 0.0);

    printf("\nO perimetro do quadrado de lado %.2f e %.2f", ladoQuadrado, perimetro(ladoQuadrado));
    despedida();
}


float perimetro(float lado){
/*
Lucas Santiago - 11/04/19
Objetivo: calcular perimetro de quadrado
entrada: lado do quadrado
saida: perimetro do quadrado
*/
  float resultado = lado * 4;
  return resultado;
}
