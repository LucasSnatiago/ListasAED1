#include <stdio.h>
#include <stdlib.h>

void main(){
  int producao = 0, defeituosos = 0, prodEntrada, defeitEntrada;

  for(int i = 0; i < 500; i++){

    do{
      printf("Digite a quantidade de pecas produzidas (Digite '0' para sair):");
      fflush(stdin);
      scanf("\n%d", &prodEntrada);
      if(prodEntrada < 1 && prodEntrada != 0) printf("\nO numero de peças defeituosas tem que ser no minimo 1\n");
    }while(prodEntrada < 1 && prodEntrada != 0); //fim do while

    do{
      printf("\nQuantidade de peças defeituosas (Digite '0' para sair): ");
      fflush(stdin);
      scanf("\n%d", &defeitEntrada);
      if(defeitEntrada < 1 && defeitEntrada != 0) printf("\nO numero de peças defeituosas tem que ser no minimo 1!\n");
    }while(defeitEntrada < 1 && defeitEntrada != 0); //fim do while

        if( (prodEntrada == 0) || (defeitEntrada == 0) ){
                printf("Saindo...\n");
          break;
        }//fim if

    if(prodEntrada >  producao)
    {
                producao = prodEntrada;
                defeituosos = defeitEntrada;
      }//fim if
}//fim for
  printf("A maquina com maior producao produziu %d items, e teve %d pecas defeituosas\n", producao, defeituosos);
  printf("\nObrigado por usar meu programa!\n");
}

/*
Para realizar o controle da produção, foram realizadas medidas em 500 máquinas.
Para cada máquina, verificou-se o número de itens produzidos por ela em um intervalo de tempo e quantos, entre eles, ficaram defeituosos.
Deseja-se saber quantos itens defeituosos foram gerados pela máquina com a maior produção (com o maior número de itens produzidos).
Rejeitar a leitura de dados inválidos (a produção e o número de itens defeituosos não têm valor máximo, mas a quantidade mínima deve ser igual a um).
*/
