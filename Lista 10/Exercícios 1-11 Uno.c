#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

void funPresentation();
int funReadSelect();
void funSeletor(int exe);
void funExeRunner(int exe);
void funExeEnder();
float funLerVal(); //para todos os exercicios
int funLerInt(); //para todos os exercicios
int funExe1();
int funExe2();
int funExe3();
int funExe4();
int funExe5();
int funExe6();
int funExe7();
int funExe8();
int funExe9();
int funExe10();
int funExe11();

//exercico 1
void funExe1Begin();
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

//exercicio 5
void funExe5Begin();
int funLerAno();
bool funCalcAno(int ano);
void funMostrarAno(bool bissex);
//

//exercicio 6
void funExe6Begin();
bool funCalcPar(int num);
void funMostrarPar(bool par);
//

//exercicio 7
void funExe7Begin();
int funLerPrim();
bool funCalcPrimo(int num);
void funMostrarPrimo(bool primo, int num);
//

//exercicio 8
void funExe8Begin();
int funLerGen();
float funLerAlt();
float funCalcPeso(float alt, char gen);
void funMostrarPeso(float peso);
//

//exercicio 9
void funExe9Begin();
int funCalcFat(int num);
void funMostrarFat(int fat);
//

//exercicio 10
void funExe10Begin();
void funOrd();
float funCalcExpo(float base, float expo);
void funMostrarPoten(float result);
//

//exercicio 11
void funExe11Begin();
float funLerVals();
float funCalcBig();
void funMostrarBig(float maior);
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
    printf("---Digite o numero do exercicio---\n");
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

        case 5:
            funExe5();
            funExeEnder();
        break;

        case 6:
            funExe6();
            funExeEnder();
        break;

        case 7:
            funExe7();
            funExeEnder();
        break;

        case 8:
            funExe8();
            funExeEnder();
        break;

        case 9:
            funExe9();
            funExeEnder();
        break;

        case 10:
            funExe10();
            funExeEnder();
        break;

        case 11:
            funExe11();
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
    printf("|=========================|\n");
    printf("| Exe1                    |\n");
    printf("| Calcular o maior numero |\n");
    printf("|=========================|\n");
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
    printf("|===============|\n");
    printf("| Exe 2         |\n");
    printf("| Calcular soma |\n");
    printf("|===============|\n");
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
    printf("|==================================|\n");
    printf("| Exe 3                            |\n");
    printf("| Calcular o perimetro do quadrado |\n");
    printf("|==================================|\n");
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
    printf("|============================|\n");
    printf("| Exe 4                      |\n");
    printf("| Calcular a area do circulo |\n");
    printf("|============================|\n");
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

//exercicio 5=========================================================================

int funExe5()
{
    int ano;
    bool bissex;
    funExe5Begin();
    ano=funLerAno();
    bissex=funCalcAno(ano);
    funMostrarAno(bissex);
    return (0);
}

void funExe5Begin()
{
    printf("|=======================|\n");
    printf("| Exe 5                 |\n");
    printf("| Calcular ano bissexto |\n");
    printf("|=======================|\n");
}

int funLerAno()
{
    int ano;
    do{
        printf("Digite o ano\n");
        fflush(stdin);
        scanf("%i",&ano);
    }while(ano<0);
    return (ano);
}

bool funCalcAno(int ano)
{
    bool bissex;
    bissex=((ano%4==0&&ano%100!=0)||(ano%400==0));
    return(bissex);
}

void funMostrarAno(bool bissex)
{
    if(bissex)
    {
        printf("O ano eh bissexto");
    }else printf("O ano nao eh bissexto");
}

//fim exercicio 5=========================================================================

//exercicio 6=========================================================================

int funExe6()
{
    int num;
    bool par;
    funExe6Begin();
    num=funLerInt();
    par=funCalcPar(num);
    funMostrarPar(par);
    return (0);
}

void funExe6Begin()
{
    printf("|=====================|\n");
    printf("| Exe 6               |\n");
    printf("| Calcular numero par |\n");
    printf("|=====================|\n");
}

int funLerInt()
{
    int num;
    printf("Digite um numero\n");
    fflush(stdin);
    scanf("%i",&num);
    return(num);
}

bool funCalcPar(int num)
{
    bool par;
    par=(num%2==0);
    return(par);
}

void funMostrarPar(bool par)
{
    if(par)
    {
        printf("O numero eh par");
    }else printf("O numero eh impar");
}

//fim exercicio 6=========================================================================

//exercicio 7=========================================================================


int funExe7()
{
    int num;
    bool primo;
    funExe7Begin();
    num=funLerPrim();
    primo=funCalcPrimo(num);
    funMostrarPrimo(primo, num);
    return(0);
}

void funExe7Begin()
{
    printf("|=======================|\n");
    printf("| Exe 7                 |\n");
    printf("| Calcular numero primo |\n");
    printf("|=======================|\n");
}

int funLerPrim()
{
    int num;
    do{
        printf("Digite um numero maior que 2\n");
        fflush(stdin);
        scanf("%i",&num);
    }while(num<=2);
    return(num);
}

bool funCalcPrimo(int num)
{
    bool primo=true;
    int i;
    for (i = 1; i <= num/2; i++) {
    if (num % i == 0&&i!=num&&i!=1) {
         primo=false;
        }
      }

    return(primo);
}

void funMostrarPrimo(bool primo, int num)
{
    if (primo == true)
       { printf("O numero %d eh primo!", num);}
      else
        { printf("O numero %d nao eh primo!", num);}

}

//fim exercicio 7=========================================================================

//exercicio 8=========================================================================

int funExe8()
{
    float alt;
    float peso;
    char gen;

    funExe8Begin();
    gen=funLerGen();
    alt=funLerAlt();
    peso=funCalcPeso(alt, gen);
    funMostrarPeso(peso);
    return(0);
}

void funExe8Begin()
{
    printf("|=====================|\n");
    printf("| Exe 8               |\n");
    printf("| Calcular peso ideal |\n");
    printf("|=====================|\n");
}

int funLerGen()
{
    char gen;

    do{
        printf("Digite o seu sexo\n[m]masculino\n[f]feminino\n");
        fflush(stdin);
        scanf("%c",&gen);
        gen=tolower(gen);
    }while (gen!='m'&&gen!='f');
    return(gen);
}

float funLerAlt()
{
    float alt;

    do{
        printf("Digite sua altura\n");
        fflush(stdin);
        scanf("%f",&alt);
    }while(alt<0);
    return(alt);
}

float funCalcPeso(float alt, char gen)
{
    float peso;

    if(gen=='m')
    {
        peso=(72.7*alt)-58;
    } else peso=(62.1*alt)-44.7;

    return(peso);
}

void funMostrarPeso(float peso)
{
    printf("O seu peso ideal eh %f",peso);
}


//fim exercicio 8=========================================================================

//exercicio 9=========================================================================


int funExe9()
{
    int num,
        fat;
    funExe9Begin();
    num=funLerInt();
    fat=funCalcFat(num);
    funMostrarFat(fat);
    return(0);
}

void funExe9Begin()
{
    printf("|===================|\n");
    printf("| Exe 9             |\n");
    printf("| Calcular fatorial |\n");
    printf("|===================|\n");
}

int funCalcFat(int num)
{
    int fat=1;
    for(int i=1;i<num;i++)
    {
        fat=fat*(i+1);
    }
    return(fat);
}

void funMostrarFat(int fat)
{
    printf("O fatorial eh %i",fat);
}

//fim exercicio 9=========================================================================

//exercicio 10========================================================================


int funExe10()
{
    float base,
        result,
          expo;
    funExe10Begin();
    funOrd();
    base=funLerVal();
    expo=funLerVal();
    result=funCalcExpo(base, expo);
    funMostrarPoten(result);
    return(0);
}

void funExe10Begin()
{
    printf("|======================|\n");
    printf("| Exe 10               |\n");
    printf("| Calcular potenciacao |\n");
    printf("|======================|\n");
}

void funOrd()
{
    printf("\nDigite a base e depois o expoente\n");
}

float funCalcExpo(float base, float expo)
{
    float poten=base;

    for(int i=1;i<expo;i++)
    {
        poten=poten*base;
    }
    return (poten);
}

void funMostrarPoten(float result)
{
    printf("O resultado eh %.2f",result);
}

//fim exercicio 10========================================================================

//exercicio 11========================================================================

int funExe11()
{
    float maior;
    funExe11Begin();
    maior=funLerVals();
    funMostrarBig(maior);
    return(0);
}

void funExe11Begin()
{
    printf("|====================================|\n");
    printf("| Exe 11                             |\n");
    printf("| Calcular o maior de varios valores |\n");
    printf("|====================================|\n");
}

float funLerVals()
{
    float maior;
    maior=funCalcBig();
    return(maior);
}

float funCalcBig()
{
    float x,
          maior=0,
          flag=0;
    do{
        printf("\nDigite [0] para terminar");
        x=funLerVal();
        if (x>maior)
        {
            maior=x;
        }
    }while (x!=flag);
    return(maior);
}

void funMostrarBig(float maior)
{
    printf("O maior eh %.2f",maior);
}

//fim exercicio 11========================================================================

void funEnd()//final
{
    printf("|===================|\n");
    printf("| Program by Tallys |\n");
    printf("|===================|\n");
}
