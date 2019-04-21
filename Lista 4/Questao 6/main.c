#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
  double a,b,c,x,y;
  printf("\nCalculadora de funcao de segundo grau");
  printf("\n(Considere a equacao como ax2 + bx + c = y)");
  printf("\nDigite o (a) da equacao: ");
  scanf("%lf", &a);
  printf("\nDigite o (b) da equacao: ");
  scanf("%lf", &b);
  printf("\nDigite o (c) da equacao: ");
  scanf("%lf", &c);
  printf("\nDigite o (x) da equacao: ");
  scanf("%lf", &x);

  y = a*pow(x,2) + b*x + c;

  printf("\nPara essa equacao o Y e %f\n", y);
  return 0;
}
