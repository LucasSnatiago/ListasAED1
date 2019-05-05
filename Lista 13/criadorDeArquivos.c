#include "mochilaDoHeroi.h"

void criarArquivo();
void escreverArquivo();
void lerArquivo();


void main(){
  apresentacao();
  printf("\nPrograma para criar arquivos no disco");
  criarArquivo();
  escreverArquivo();
  lerArquivo();
  despedida();
}

void criarArquivo(){
/*
Lucas Santiago - 02/05/19
Objetivo: Criar um arquivo no disco
Sem entrada
Sem saida
*/
  FILE *arq;
  arq = fopen("exemplo.dat", "w");
  if(arq != NULL) printf("\nArquivo criado com sucesso!");
  else printf("\nHouve alguma falha durante a criação do arquivo!");
  fclose(arq);
}

void escreverArquivo(){
/*
Lucas Santiago - 02/05/19
Objetivo: Escrever algo em um arquivo
Sem entrada
Sem saida
*/
  int dado1 = 17, dado2 = 50, dado3 = 55, lerDado1, lerDado2, lerDado3;

  //Escrevendo no arquivo
  FILE *arqAberto = fopen("exemplo.dat", "a");
  fprintf(arqAberto, "%d", dado1);
  fprintf(arqAberto, "\n%d", dado2);
  fprintf(arqAberto, "\n%d", dado3);
  fflush(arqAberto);
  fclose(arqAberto);

  //Checando escrita
  FILE *arqLeitura = fopen("exemplo.dat", "r");
  fscanf(arqLeitura, "%d", &lerDado1);
  fscanf(arqLeitura, "\n%d", &lerDado2);
  fscanf(arqLeitura, "\n\n%d", &lerDado3);
  if(dado1 == lerDado1 && dado2 == lerDado2 && dado3 == lerDado3) printf("\nArquivo escrito com sucesso!");
  else printf("\nHouve alguma falha ao tentar escrever no arquivo!");
}


void lerArquivo(){
/*
Lucas Santiago - 02/05/19
Objetivo: ler dados de um arquivo
Sem entrada
Sem saida
*/
  FILE *lerArquivo;
  int dado1, dado2, dado3;
  lerArquivo = fopen("exemplo.dat", "r");
  fscanf(lerArquivo, "%d", &dado1);
  fscanf(lerArquivo, "\n%d", &dado2);
  fscanf(lerArquivo, "\n\n%d", &dado3);
  printf("\nOs valores lidos no arquivo sao:");
  printf("\n%d\n%d\n%d", dado1, dado2, dado3);
}
