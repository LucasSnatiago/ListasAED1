#include "mochilaDoHeroi.h"

void criarArquivo();
float mediaTurma();
int numAlunosAcimaMedia(float media);

void main(){
    apresentacao();

    criarArquivo();
    float media =  mediaTurma();
    printf("\nA media das notas eh %.2f", media);
    int acimaMedia = numAlunosAcimaMedia(media);
    printf("\nO numero de alunos acima da media eh %d", acimaMedia);

    despedida();
}



void criarArquivo(){
//funcao de criar arquivos caso nao exista

  FILE *arq = fopen("alunos.dat", "w");
  float notaAlun;

  do{
    printf("\nEscreva a nota dos alunos(digite algum numero negativo para sair): ");
    notaAlun = lerFloat();
    if(notaAlun >= 0) fprintf(arq, "%f\n", notaAlun);
  }while(notaAlun > 0);
  fflush(arq);
  fclose(arq);
}

float mediaTurma(){
  FILE *arq = fopen("alunos.dat", "r");
  float notaAlun, somaNotas = 0, numNotas = 0, media;

  while(!feof(arq)){
    fscanf(arq, "%f\n", &notaAlun);
    somaNotas += notaAlun;
    numNotas++;
  }

  media = somaNotas / numNotas;
  return media;
}

int numAlunosAcimaMedia(float media){
  FILE *arq = fopen("alunos.dat", "r");
  float notaAlun;
  int numAlunosAcimaMedia = 0;

  while(!feof(arq)){
    fscanf(arq,"%f\n", &notaAlun);
    if(notaAlun > media) numAlunosAcimaMedia++;
  }
  return numAlunosAcimaMedia;
}
