#include <stdio.h>
#include <stdlib.h>

void main() {
  int ano, primeiraExec = 1;
  char user = 's';
  
  printf("Calculadora de ano bissexto");
  printf("\nDigite o ano: ");
  scanf("%d", &ano);
  
  //Checar se o ano e bissexto
  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("\nAno bissexto.\n");
  
  }else {

    printf("\nAno nao bissexto.\n");  
  }

  //fim da checagem

while(user == 's'){

    printf("\nVoce deseja checar outro ano?");
    printf("\nDigite (s) para sim ou (n) para nao: ");
    scanf("\n%c", &user);
    


  if(user == 's'){
    printf("\nDigite o ano: ");
    scanf("%d", &ano);
  
  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("\nAno bissexto.\n");
  
  }else {
    printf("\nAno nao bissexto.\n");  

  }
  }
  if(user == 'n')
    printf("Voce escolheu sair!");



    while (user != 's' || user != 'n'){
    printf("\nVoce digitou algo de errado!");
    printf("\nTente novamente");
    printf("\nDigite (s) para sim e (n) para nao: ");
    scanf("\n%c", &user);
    }
}
}