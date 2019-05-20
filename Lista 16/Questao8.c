#include "mochilaDoHeroi.h"

int lerNumeros(int arranjo[]);
int contarNegativos(int arranjo[], int numItens, int contador);

const int MAX = 100;

void main(){
  apresentacao();

  //Criacao do arranjo numerico
  int numeros[MAX];
  //Lendo valores para o arranjo
  int quantTermosNumeros = lerNumeros(numeros);
  //Contar numeros negativos do arranjo
  int numNegativos = contarNegativos(numeros, quantTermosNumeros-1,0);

  printf("\nA quantidade de itens no arranjo eh %d e desses todos %d sao negativos", quantTermosNumeros, numNegativos);
  despedida();
}


int lerNumeros(int arranjo[]){
  //Funcao para ler valores e escrever no arranjo
  int entrada = -1, contador = 0;
  printf("\nPor favor escreva 10 valores para serem adicionados ao arranjo\nEscreva 0 para sair");
  for(int i = 0; i < MAX; i++){
    if(entrada != 0){
      entrada = lerInt();
      if (entrada != 0){ // Se o valor digitado for diferente de 0 sera adicionado no arranjo e somado 1 no contador
        arranjo[i] = entrada;
        contador++;
      }
    }else
    return  contador; //retorna o numero de itens no arranjo
  }
}


int contarNegativos(int arranjo[], int numItens, int contador){
  //Contar o numero de itens negativos do arranjo

  //Se o valor do arranjo for negativo o contador recebe mais 1
  if(arranjo[numItens] < 0) contador++;
  //O numItens do arranjo eh o contador de quantos itens faltam para ler todo o arranjo
  if(numItens > 0) contarNegativos(arranjo, numItens - 1, contador);
  //retorna o numero de negativos do arranjo
  else return contador;
}
