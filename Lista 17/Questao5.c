#include "mochilaDoHeroi.h"


void checarArray(int* colunas, int *linhas, int liminf, int limsup);
int escreverMatriz(float m[10][10]);
float media(float m[10][10], int dimensoes);
int acimaMedia(float m[10][10], float media);


int main(){
    int dimensoes, acimaDaMedia;
    float m[10][10], numMedia;
    apresentacao();

    dimensoes = escreverMatriz(m);
    numMedia = media(m, dimensoes);
    acimaDaMedia = acimaMedia(m, numMedia);

    printf("A media eh %.2f, e existem %d numeros acima dela", numMedia, acimaDaMedia);
    despedida();
}


void checarArray(int* colunas, int *linhas, int liminf, int limsup){
    while( (*colunas > limsup) || (*colunas < liminf) || (*linhas > limsup) || (*linhas < liminf) ){
        printf("Valores fora do intervalo 1-10. Digite novamente o numero de colunas, depois o de linhas:\n\n");
        scanf("%d%d", colunas, linhas);
    }
}


int escreverMatriz(float m[10][10]){
    int colunas, linhas;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            m[i][j] = 0;
        }
    }

    printf("Quantas colunas e linhas na matriz 1?: (1-10)\n");
    scanf("%d%d", &colunas, &linhas);
    checarArray(&colunas, &linhas, 1, 10);

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            printf("Digite um numero para armazenar em [%d] [%d]:\n", i, j);
            scanf("%f", &m[i][j]);
        }
    }
    return (colunas * linhas);
}


float media(float m[10][10], int dimensoes){
    float soma = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            soma += m[i][j]; 
        }
    }
    return (soma / dimensoes);
}


int acimaMedia(float m[10][10], float media){
    int acimaDaMedia = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(m[i][j] > media){
                acimaDaMedia++;
            }
        }
    }
    return acimaDaMedia;
}