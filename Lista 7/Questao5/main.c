#include <stdlib.h>
#include <stdio.h>

int main(void){
    int  i = 0;
    float media = 0, num, soma, maior;

    printf("Calculadora de media");
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    maior = num;
    soma = num;

    for(; num != 0; i++){

        printf("Digite um numero: ");
        scanf("%f", &num);
        
        soma += num;

        if(num > maior){
            maior = num;
        }

    }
    printf("\nsoma: %f\ni: %i",soma , i);
    media = soma / i;

    printf("\nA media dos numeros é %.2f e o maior valor inserido é %.2f\n", media, maior);

}

/*
    Construa um programa que leia uma sequência de números naturais até que o valor zero seja lido
        o valor zero deverá ser a flag para finalizar a leitura
        Ao interromper a leitura, o programa deverá informar a média dos valores lidos e o maior valor entre eles
            Obs: note que o valor zero não deverá ser considerado como um valor válido. Ele apenas sinaliza a interrupção da leitura dos valores.

*/