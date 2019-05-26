#include "mochilaDoHeroi.h"

bool arraysIguais(float matriz1[10][10], float matriz2[10][10]);
void checarArray(int* colunas, int* linhas, int liminf, int limsup);
void escreverArray(float m[10][10]);

int main()
{
    apresentacao();
    bool iguais = false;
    float matriz1[10][10], matriz2[10][10];
    escreverArray(matriz1);
    escreverArray(matriz2);
    iguais = arraysIguais(matriz1,matriz2);

    if(iguais == true) printf("As matrizes sao identicas");   
    else printf("As matrizes sao diferentes"); 
    despedida();   
}


bool arraysIguais(float matriz1[10][10], float matriz2[10][10]){

    bool iguais = true;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(matriz1[i][j] != matriz2[i][j]) {
                iguais = false;
            }
        }
    }
    return iguais;
}


void checarArray(int* colunas, int *linhas, int liminf, int limsup){
    while( (*colunas > limsup) || (*colunas < liminf) || (*linhas > limsup) || (*linhas < liminf) )
    {
        printf("Valores fora do intervalo 1-10. Digite novamente o numero de colunas, depois o de linhas:\n\n");
        scanf("%d%d", colunas, linhas);
    }
}


void escreverArray(float m[10][10]){   
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
}