#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void funPresentation(); //apresentação
int funReadSelect(); //ler o exercicio
void funSeletor(int exe); //seletor de exercicio
void funExeRunner(int exe); //executor de exercicio
void funExeEnder(); //finalizador

//exercicios
int funExe1();
int funExe2();
int funExe3();
int funExe4();
//

//exercico 1
void funExe1Begin();
float funLerVal(); //para todos os exercicios
float funCalcMaior(float va, float vb);
void funMostrarMaior(float maior);
//

//exercicio 2
void funExe2Begin();
float funSoma(float va, float vb);
void funMostrarResult(float soma);
//

//exercicio 3
void funExe3Begin();
float funCalcLad(float va);
void funMostrarPerim(float perim);
//

//exercicio 4
void funExe4Begin();
float funLerRai();
float funCalcAr(float raio);
void funMostrarArea(float area);
//

void funEnd();


int main() { //principal

  int exe;

  funPresentation();
  exe=funReadSelect();
  funSeletor(exe);
  funEnd();

}

void funPresentation(){ //Inicio do programa

  printf("|========================|\n");
  printf("| Corretor de Exercicios |\n");
  printf("|========================|\n\n");

}

int funReadSelect(){//selecionar exercicio

  int x,
      flag=0;

  do{
    printf("Digite o numero do exercicio\n");
    printf("Digite [0] para sair\n");
    fflush(stdin);
    scanf("%i",&x);
    if(x<flag){
        printf("Valor invalido!\n");
        printf("----------------\n");
    }
  }while(x<flag);

  if(x!=flag){
    printf("------------------------\n");}
  else{printf("========================\n");}

  return (x);
}

void funSeletor(int exe){ //chamar a execução

    int flag=0;

    while(exe!=flag){

        funExeRunner(exe);
        exe=funReadSelect();
    }
}

void funExeRunner(int exe){//rodar o exercicio

    switch (exe)
    {
        case 1:
            funExe1();
            funExeEnder();
        break;

        case 2:
            funExe2();
            funExeEnder();
        break;

        case 3:
            funExe3();
            funExeEnder();
        break;

        case 4:
            funExe4();
            funExeEnder();
        break;

        default:
            printf("Exercicio invalido!\n");
            printf("--------------------\n");
        break;
    }
}

void funExeEnder()
{
    printf("\n=========================\n");
    printf("Pressione qualquer tecla para continuar");
    getch();
    system("cls");
}

//exercicio 1 ==========================================================================

int funExe1() //exercicio 1 principal
{
    float va,
          vb,
          maior;
    funExe1Begin();
    va=funLerVal();
    vb=funLerVal();
    maior=funCalcMaior(va,vb);
    funMostrarMaior(maior);
    return(0);
}

void funExe1Begin() // apresentação do programa
{
    printf("|======|\n");
    printf("| Exe1 |\n");
    printf("|======|\n\n");
}

float funLerVal() //ler valores reais
{
    float vx;
    printf("\nDigite um numero\n");
    fflush(stdin);
    scanf("%f",&vx);
    return(vx);
}

float funCalcMaior(float va, float vb) //entra com os valores va e vb e calcula o maior
{
    float maior=va;

    if(vb>maior)
    { maior=vb; }

    return(maior);
}

void funMostrarMaior(float maior) //mostra o maior numero
{
    printf("\nO maior numero eh %.2f",maior);
}

//fim exercico 1 =========================================================================

// exercicio 2 =========================================================================

int funExe2() //princial
{
    float va,
          vb,
          soma;
    funExe2Begin();
    va=funLerVal();
    vb=funLerVal();
    soma=funSoma(va,vb);
    funMostrarResult(soma);
    return (0);
}

void funExe2Begin() //apresentação
{
    printf("|=======|\n");
    printf("| Exe 2 |\n");
    printf("|=======|\n\n");
}

float funSoma(float va, float vb) //soma
{
    float soma=va+vb;
    return (soma);
}

void funMostrarResult(float soma) //mostra o resultado
{
    printf("O resultado eh %.2f",soma);
}

//fim exercicio 2 ========================================================================

//exercicio 3 ========================================================================

int funExe3()
{
    float lado,
          perim;
    funExe3Begin();
    lado=funLerVal();
    perim=funCalcLad(lado);
    funMostrarPerim(perim);
    return (0);
}

void funExe3Begin()
{
    printf("|=======|\n");
    printf("| Exe 3 |\n");
    printf("|=======|\n");
}



float funCalcLad(float lado)
{
    float perim;
    perim=lado*4;
    return(perim);
}

void funMostrarPerim(float perim)
{
    printf("O perimetro eh %.2f",perim);
}

//fim exercicio 3 ========================================================================

//exercicio 4=========================================================================

int funExe4()
{
    float raio,
          area;
    funExe4Begin();
    raio=funLerRai();
    area=funCalcAr(raio);
    funMostrarArea(area);
    return(0);
}

void funExe4Begin()
{
    printf("|=======|\n");
    printf("| Exe 4 |\n");
    printf("|=======|\n");
}

float funLerRai()
{
    float vx;
    printf("\nDigite um numero\n");
    fflush(stdin);
    scanf("%f",&vx);
    return(vx);
}

float funCalcAr(float raio)
{
    float pi=3.14,
          area;
    area= pi *raio*raio;
    return(area);
}

void funMostrarArea(float area)
{
    printf("A area eh %.2f",area);
}

//fim exercicio 4=========================================================================
void funEnd()//final
{
    printf("|===================|\n");
    printf("| Program by Tallys |\n");
    printf("|===================|\n");
}
