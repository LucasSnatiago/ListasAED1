#include "mochilaDoHeroi.h"


void leArranjo(int arranjo[]);
void ordenarArranjo(int arranjo[]);
void trocarArranjo(int arranjo[], int pos);
void escreveArranjo(int arranjo[]);

int main() {
  apresentacao();
  int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];
	leArranjo(C);  // Preenche todo o arranjo com valores lidos
  ordenarArranjo(A);  // Ordena o arranjo em ordem crescente
  ordenarArranjo(B);
  ordenarArranjo(C);
	escreveArranjo(A);   // Escreve na tela todo o arranjo
	escreveArranjo(B);
	escreveArranjo(C);
  despedida();
	return 0;
}


void leArranjo(int arranjo[]){
/*
Lucas Santiago - 18/05/19
Objetivo: Ler valores e escrever no arranjo c
Entrada: arranjo
Sem saida
*/
  printf("\nEscreva os numeros para serem adicionados no arranjo C");
  for(int i = 0; i < 6; i++){
    arranjo[i] = lerInt();
  }
}


void ordenarArranjo(int arranjo[]){

  int contador = 0;
  do{
    contador = 0;
    for(int i = 0; i < 5; i++){
      if(arranjo[i] > arranjo[i+1]){
        trocarArranjo(arranjo, i);
        contador++;
      }
    }
  }while (contador != 0);
}


void trocarArranjo(int arranjo[], int pos){
  int aux;
  aux = arranjo[pos];
  arranjo[pos] = arranjo[pos+1];
  arranjo[pos+1] = aux;
}


void escreveArranjo(int arranjo[]){
/*
Lucas Santiago - 18/05/19
Objetivo: Escrever o arranjo na tela
Entrada: Arranjo
Sem saida
*/
  printf("\n");
  for(int i = 0; i < 6; i++){
    printf("%d, ", arranjo[i]);
  }
}
