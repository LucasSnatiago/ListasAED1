#include <stdlib.h>
#include <stdio.h>

int main(){
    int numAlunos = 0;
    float media = 0;

    printf("Calculadora de idade media de alunos");
    printf("\nDigite o numero de alunos da sala: ");
    scanf("%d", &numAlunos);

    printf("\nDigite a idade dos alunos (para cada idade clique enter): ");
    for(int i = 0, idade = 0; i < numAlunos; i++){
        
        scanf("%d", &idade);
        media += idade;     
    }
    
    media /= numAlunos;

    printf("A media da idade dos alunos e %.2f anos.\n", media);

}