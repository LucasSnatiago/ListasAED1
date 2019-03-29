#include <stdlib.h>
#include <stdio.h>

int main(void){
    int termos;
    float resultado = 0, PA = 0;

    printf("Calculadora de termos da sequencia (1/100, 1/97, 1/94...)");
    printf("\nPor favor digite a precisao do calculo: ");
    scanf("%d", &termos);


    for(int i = 0; i < termos; i++){
        
        PA = 100.0 - (3.0 * i);
        resultado += 1.0 / PA;

    } 
    
    printf("O resultado da soma dos %d termos é %f\n", termos, resultado);
    
}



/*
  -- Adicionar todos os termos de 1/100, 1/97, 1/94...
    -- Permitir que o usuario escolha a precisao da conta



*/