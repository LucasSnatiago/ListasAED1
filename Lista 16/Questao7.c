#include "mochilaDoHeroi.h"


void lerNumeros(int numeros[]);
int numNegativosArranjo(int numeros[]);

const int MAX = 10;

void main(){
  apresentacao();

  //arranjo numerico
  int numeros[MAX];
  //Escrever valores no arranjo
  lerNumeros(numeros);

  //Procurar valores negativos no arranjo
  int numerosNegativos = numNegativosArranjo(numeros);

  printf("\nHa %d numeros negativos na sequencia", numerosNegativos);
  despedida();
}


void lerNumeros(int numeros[]){
//Ler numeros e escrever em um arranjo
  int entrada;
  for(int i = 0; i < MAX; i++){
    numeros[i] = lerInt();
  }
}


int numNegativosArranjo(int numeros[]){
//Contar a quantidade de numeros negativos do arranjo
  int contador = 0;
  for(int i = 0; i < MAX; i++){
    if(numeros[i] < 0) contador++;
  }
  return contador;
}
