#include "mochilaDoHeroi.h"


void checarArray(int* colunas, int *linhas, int liminf, int limsup);
void escreverMatriz(float m[10][10]);
float primeiroValorLinha(float m[10][10], int linha);
int linhaMaiorValor(float m[10][10]);


int main(){
    apresentacao();

    float m[10][10], primeiroLinha;
    int linhaMaiorNum;
    escreverMatriz(m);

    linhaMaiorNum = linhaMaiorValor(m);
    primeiroLinha = primeiroValorLinha(m, linhaMaiorNum);

    printf("\nO primeiro numero da linha onde esta o maior numero eh %.2f", primeiroLinha);
    despedida();
}


void checarArray(int* colunas, int *linhas, int liminf, int limsup){
    while( (*colunas > limsup) || (*colunas < liminf) || (*linhas > limsup) || (*linhas < liminf) ){
        printf("Valores fora do intervalo 1-10. Digite novamente o numero de colunas, depois o de linhas:\n\n");
        scanf("%d%d", colunas, linhas);
    }
}


void escreverMatriz(float m[10][10]){
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
            printf("Digite um numero para armazenar em matriz [%d] [%d]:\n", i, j);
            scanf("%f", &m[i][j]);
        }
    }
}


int linhaMaiorValor(float m[10][10]){
    float maior = m[0][0];
    int linhaMaiorNum = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(m[i][j] > maior){
                maior = m[i][j];
                linhaMaiorNum = i;
            }
        }
    }
    return linhaMaiorNum;
}


float primeiroValorLinha(float m[10][10], int linha){
    return m[linha][0];
}