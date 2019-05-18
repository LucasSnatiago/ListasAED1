#include "mochilaDoHeroi.h"

int numParesArquivo(FILE *arq);

void main(){
    apresentacao();

    FILE *arq = fopen("numeros.dat", "r");
    int quantosParesArquivo = numParesArquivo(arq);
    printf("\nHa %d numeros pares no arquivo", quantosParesArquivo);

    despedida();
}

int numParesArquivo(FILE *arq){
  int contador = 0, num;
  while(!feof(arq)){
    fscanf(arq, "%d\n", &num);
    if(ehPar(num)){
      contador++;
    }
  }
  return contador;
}
