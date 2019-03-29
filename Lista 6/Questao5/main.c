#include <stdlib.h>
#include <stdio.h>

int main(){
    int ano;
    char user = 's';
  
    printf("Calculadora de ano bissexto");

  do{
    printf("\nDigite o ano: ");
    scanf("%d", &ano);
  
  //Checar se o ano e bissexto
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        printf("\nAno bissexto.\n");
  
    }else {

        printf("\nAno nao bissexto.\n");  
  }

  //fim da checagem
  
  printf("\nDeseja checar outro ano?");
  printf("\nSe sim digite (s), se quiser sair do programa digite (n): ");
  scanf("\n%c", &user);

  if (user == 'n')
    return 0;

  if (user != 's' && user != 'n'){
      printf("\nVoce digitou algo errado");
      printf("\nTente novamente");
      user = 's';
  }

  }while (user == 's');
}