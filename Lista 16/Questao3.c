#include "mochilaDoHeroi.h"


void leArranjo(int arranjo[]);
void deslocaMaiorParaFinal(int arranjo[]);
void escreveArranjo(int arranjo[]);

int main() {
  apresentacao();
  int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];
	leArranjo(C);  // Preenche todo o arranjo com valores lidos
	deslocaMaiorParaFinal(A);   // Desloca o maior valor do arranjo para a última posição
	deslocaMaiorParaFinal(B);
	deslocaMaiorParaFinal(C);
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


void deslocaMaiorParaFinal(int arranjo[]){
/*
Lucas Santiago - 18/05/19
Objetivo: mover o maior valor do arranjo para o final
Entrada: arranjo
Sem saida
*/
  int POSmaior, maior;

  //descobrir qual o maior numero do arranjo
  maior = arranjo[0];
  for(int i = 0; i < 6; i++){
    if(maior < arranjo[i]){
      maior = arranjo[i];
      POSmaior = i;
      }
  }

  int aux;
  //mover o maior valor do arranjo para o final
  //mover o valor que estava no final do arranjo para o lugar onde o maior estava
  aux = arranjo[5];
  arranjo[5] = maior;
  arranjo[POSmaior] = aux;
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
