/*
Lucas Santiago - 24/04/19
Biblioteca criada para facilitar a vida dos programadores
Como importar minha biblioteca:
basta acrescentar:
#include "mochilaDoHeroi.h"
(lembre-se de colocar aspas nao é para usar o simbolo de maior e menor que <> )
no comeco do seu codigo
A biblioteca precisa estar na mesma pasta que o seu codigo.c para ser compilado!
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


void apresentacao(){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo de apresentar o programa
Nao ha entradas
Nao ha saidas
*/
  printf("\nBem-vindo ao meu programa!\n");
}

void despedida(){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo de se despedir do usuario na saida
Nao ha entradas
Nao ha saidas
*/

  printf("\nObrigado por usar meu programa!\n\n");
}

int lerInt(){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo de ler um numero inteiro
Sem entrada
Saida: numero inteiro
*/
  int inputDeUsuario;

  printf("\nPor favor escreva um numero inteiro: ");
  fflush(stdin);
  scanf("%d", &inputDeUsuario);

  return inputDeUsuario;
}

float lerFloat(){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo de ler um float escrito pelo usuario
Sem entrada
Saida: float
*/
  float inputDeUsuario;

  printf("\nPor favor escreva um numero: ");
  fflush(stdin);
  scanf("%f", &inputDeUsuario);

  return inputDeUsuario;
}

float lerChar(char type){
/*
Lucas Santiago - 15/04/19
Objetivo: ler um char escrito pelo usuario
Entrada: opcional do programador - se enviar a letra 'l'
sera retornado um valor minusculo e se colocado 'u' sera
retornado um valor maiusculo, qualquer outro valor ira retornar
o valor que o usuario digitou
Saida: char
*/
  char inputDeUsuario;

  printf("\nEscreva uma letra: ");
  fflush(stdin);
  scanf("%c", &inputDeUsuario);

  if(type == 'l') inputDeUsuario = tolower(inputDeUsuario);
  if(type == 'u') inputDeUsuario = toupper(inputDeUsuario);

  return inputDeUsuario;
}

float PI(){
/*
Feita no dia 11/04/19
Pelo Lucas Santiago
Com o objetivo escrever o numero pi
Sem entrada
Saida: pi
*/
  return 3.14159265359;
}

bool ehPar(int num){
/*
Lucas Santiago - 12/04/19
Objetivo: descobrir se um numero eh par ou impar
Entrada: numero inteiro
Saida: verdadeiro ou falso
*/
  bool ehPar = false;

  if(num % 2 == 0) ehPar = true;

  return ehPar;
}

bool ehPrimo(int num){
/*
Lucas Santiago - 12/04/19
Objetivo: descobrir se um numero eh primo ou nao
Entrada: numero inteiro
Saida: verdadeiro - primo / falso - nao eh primo
*/
  bool primo = true;

    for (int i = 2; i < (num/2 + 1); i++){
      if(num % i == 0) primo = false;
      break;
    }

  return primo;
}

int positivoInteiro(){
/*
Lucas Santiago - 12/04/19
Objetivo: ler apenas numeros inteiros e positivos
Entrada: sem entrada
Saida: Apenas numeros positivos e inteiros (excluindo o zero)
*/
  int numero;

  do{
    printf("\nEscreva um numero inteiro e positivo: ");
    fflush(stdin);
    scanf("%d", &numero);
    if(numero <= 0) printf("\nValor invalido");
  }while(numero <= 0);
}

int fatorial(int num){
/*
Lucas Santiago - 13/04/19
Objetivo: calcular o fatorial de um numero
Entrada: numero inteiro
Saida: numero inteiro
*/
    int fatorial = 1;

    for(int i = num; i > 0; i--){
      fatorial *= i;
    }

    return fatorial;
}

float potencia(float base, int expoente){
/*
Lucas Santiago - 13/04/19
Objetivo: calcular potencia de um numero
Entrada: numero para ser elevado, expoente
Saida: resultado da potencia em float
*/
  float potencia = 1;
  for(int i = 0; i < expoente; i++){
    potencia *= base;
  }
  return potencia;
}

float maiorNumero(){
/*
Lucas Santiago - 13/04/19
Objetivo: Calcular o maior entre varios numeros lidos
Sem entrada
Saida: maior numero
*/
  float maior,
        inputDeUsuario;

  const float flag = 0;

  printf("\nEscreva um numero (0 para sair): ");
  fflush(stdin);
  scanf("%f", &inputDeUsuario);

  maior = inputDeUsuario;

  while(inputDeUsuario != flag){
    printf("\nEscreva um numero (0 para sair): ");
    fflush(stdin);
    scanf("%f", &inputDeUsuario);

    if(inputDeUsuario > maior && inputDeUsuario != flag) maior = inputDeUsuario;
  }

  return maior;
}

float menorNumero(){
/*
Lucas Santiago - 13/04/19
Objetivo: Calcular o menor entre varios numeros lidos
Sem entrada
Saida: menor numero
*/
  float menor,
        inputDeUsuario;

  const float flag = 0;

  printf("\nEscreva um numero (0 para sair): ");
  fflush(stdin);
  scanf("%f", &inputDeUsuario);

  menor = inputDeUsuario;

  while(inputDeUsuario != 0){
    printf("\nEscreva um numero (0 para sair): ");
    fflush(stdin);
    scanf("%f", &inputDeUsuario);

    if(inputDeUsuario < menor && inputDeUsuario != flag) menor = inputDeUsuario;
  }

  return menor;
}

FILE *criarArquivo(){
/*
Lucas Santiago - 11/05/19
Objetivo: Criar arquivo no disco
Sem entrada
Saida: ponteiro apontando para o arquivo criado
*/
    FILE *arq = fopen("dados.dat", "w");
    if (arq == NULL){
      printf("\nO arquivo nao pode ser criado!");
    }
    else{
      printf("\nArquivo criado com sucesso!");
    }
return arq;
}

int preencherMatriz(float arranjo[]){
/*
Lucas Santiago - 26/05/19
Objetivo: Preencher uma matriz unidimensional
Entrada: matriz para ser preenchida
Saida: Numero de itens escritos na matriz
*/
  const int flag = 0;
  float entrada;
  int contador = 0;
  printf("\nEscreva os valores para serem adicionados na matriz (Digite 0 para sair)");
  entrada = lerFloat();
  while(entrada != flag){
    arranjo[contador] = entrada;
    contador++;
    entrada = lerFloat();
  }
  return contador;
}
