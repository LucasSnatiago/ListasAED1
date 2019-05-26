#include "mochilaDoHeroi.h"


void copiarMatriz(float m1[10][10], float m2[10][10]);
bool checarMaior(int tamanho1, int tamanho2);
void ChecarArray(int* colunas, int* linhas, int liminf, int limsup);
int escreverArray(float m[10][10]);


int main(){
    apresentacao();

    bool ehMaior = false;
    float m1[10][10], m2[10][10];
    int tamanho1, tamanho2;
    tamanho1 = escreverArray(m1);
    tamanho2 = escreverArray(m2);

    ehMaior = checarMaior(tamanho1, tamanho2);

    if(ehMaior == true){
        printf("Impossivel copiar -- A matriz 1 eh maior que a matriz 2");
    }
    else{
        copiarMatriz(m1, m2);
        printf("A copia da matriz 1 para a matriz 2 foi um sucesso!");
    }
    despedida();
}


bool checarMaior(int tamanho1, int tamanho2){

    bool ehMaior = false;
    if(tamanho1 > tamanho2){
        ehMaior = true;
    } 
    return ehMaior;
}


void copiarMatriz(float m1[10][10], float m2[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            m2[i][j] = m1[i][j];
        }
    }
}


void ChecarArray(int* colunas, int *linhas, int liminf, int limsup){
    while( (*colunas > limsup) || (*colunas < liminf) || (*linhas > limsup) || (*linhas < liminf) ){
        printf("Valores fora do escopo (1-10. Digite novamente o numero de colunas, depois o de linhas:\n\n");
        scanf("%d%d", colunas, linhas);
    }
}


int escreverArray(float m[10][10]){
    int colunas, linhas;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            m[i][j] = 0;
        }
    }

    printf("Quantas colunas e linhas na matriz 1?: (1-10)\n");
    scanf("%d%d", &colunas, &linhas);

    ChecarArray(&colunas, &linhas, 1, 10);

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            printf("Digite um numero para armazenar em [%d] [%d]:\n", i, j);
            scanf("%f", &m[i][j]);
        }
    }
    return (colunas * linhas);
}