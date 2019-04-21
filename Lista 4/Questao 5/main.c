#include <stdio.h>
#include <stdlib.h>

int main() {
  int ano;
  printf("\nCalculadora de ano bissexto");
  printf("\nDigite o ano: ");
  scanf("%d", &ano);

  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("\nO ano %d e bissexto", ano);

  }

  else {
    printf("\nO ano %d nao e bissexto", ano);

  }
return 0;
}
