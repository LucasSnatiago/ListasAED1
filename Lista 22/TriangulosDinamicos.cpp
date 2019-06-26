#include <iostream>
#include "mochilaDoHeroi++.h"

using namespace std;

//Classe float de triangulos
class Triangulo{
  private:
    static int quantidadeObjetos;
    float lado1;
    float lado2;
    float lado3;

    //Funcao set dos lados
    //Orquestrador
    void setLados(float lado1, float lado2, float lado3){
      this->lado1 = setLado1(lado1);
      this->lado2 = setLado2(lado2);
      this->lado3 = setLado3(lado3);
      quantidadeObjetos++;
    }

  public:
    //Construtor
    Triangulo(float lado1, float lado2, float lado3){
      this->setLados(lado1, lado2, lado3);
    }
    Triangulo(float lado){
      this->setLados(lado, lado, lado);
    }
    Triangulo(){
      this->setLados(0,0,0); //Cricao de um triangulo sem tamanho
    }
    //Funcao para o usuario digitar os lados de um triangulo
    void lerLados(){
        float lado1,
              lado2,
              lado3;

        cout << "Escreva o lado de um triangulo: ";
        cin >> lado1;

        cout << "Escreva o segundo lado de um triangulo: ";
        cin >> lado2;

        cout << "Escreva o ultimo lado de um triangulo: ";
        cin >> lado3;

        setLados(lado1, lado2, lado3);
    }


    //Funcao set do lado1
    float setLado1(float lado1){
      if(lado1 < 0) lado1 = 0;
      return lado1;
    }

    //Funcao set do lado2
    float setLado2(float lado2){
      if(lado2 < 0) lado2 = 0;
      return lado2;
    }

    //Funcao set do lado3
    float setLado3(float lado3){
      if(lado3 < 0) lado3 = 0;
      return lado3;
    }

    //Funcao get da quantidade de objetos em memoria
    int quantidadeObjetosMemoria(){
      int quantidadeObjetosMemoria = this->quantidadeObjetos;
      return quantidadeObjetosMemoria;
    }


    //Funcao para recuperar lado1 do triangulo
    float getLado1(){
      float lado = this->lado1;
      return lado;
    }

    //Funcao para recuperar lado2 do triangulo
    float getLado2(){
      float lado = this->lado2;
      return lado;
    }

    //Funcao para recuperar lado3 do triangulo
    float getLado3(){
      float lado = this->lado3;
      return lado;
    }


    //Calcular perimetro do triangulo
    float perimetroTriangulo(){
      float lado1 = getLado1();
      float lado2 = getLado2();
      float lado3 = getLado3();

      float perimetro = lado1 + lado2 + lado3;
      return perimetro;
    }


    //Descobrir tipo do triangulo
    int tipoTriangulo(){
      //variavel que salva a resposta
      //0 = triangulo nao existe
      //1 = triangulo equilatero
      //2 = triangulo isosceles
      //3 = triangulo escaleno
      int resposta;

      //Pegar os valores do objeto
      float lado1 = getLado1();
      float lado2 = getLado2();
      float lado3 = getLado3();

      //checar caso nao exista o triangulo
      if(lado1 == 0 || lado2 == 0 || lado3 == 0) resposta = 0;
      else{ //Checar os tipos de triangulos
        if(lado1 == lado2 && lado2 == lado3) resposta = 1;
        else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3) resposta = 3;
        else resposta = 2;
      }

      return resposta;
    }

    //Verificar se dois triangulos sao iguais
    bool vericarTriangulos(Triangulo triangulo){
      bool saoIguais = true;
      float triangulo1[3] = {this->getLado1(), this->getLado2(), this->getLado3()};
      float triangulo2[3] = {triangulo.getLado1(), triangulo.getLado2(), triangulo.getLado3()};

      //Verificar se os triangulos sao diferentes
      for(int i = 0; i < 3; i++){
        //Verificando se algum lado de um dos triangulos nao pertence ao outro triangulo
        if(triangulo1[i] != triangulo2[0] && triangulo1[i] != triangulo2[1] && triangulo1[i] != triangulo2[2]){
          saoIguais = false;
        }
      }

      return saoIguais;
    }

    //Verificar se um triangulo existe
    bool validaTriangulo(){
      bool trianguloValido = true;
      if(this->lado1 == 0 || this->lado2 == 0 || this->lado3 == 0){
        trianguloValido = false;
      }
      return trianguloValido;
    }
};

//Zerar contador de objetos que existem na memoria
int Triangulo::quantidadeObjetos = 0;

const int TAM = 100;
const int SAIR = 0;

//Assinatura das funcoes
void escreverTriangulo(Triangulo triangulo);
void verificaTriangulos(Triangulo triangulo[]);
void ehValido(Triangulo triangulo[]);
void listarTipo(Triangulo triangulo[]);

int main(){
  apresentacao();
  //Criacao do objeto triangulo
  Triangulo *triangulos;

  //Criacao do contador para saber qual triangulo esta sendo usado
  int contador = 0;

  //Variavel para salvar a resposta do usuario
  int entrada;
  do{
    //Escrever na tela o menu de opcoes
    cout << "Por favor escolha o que deseja fazer: " << endl;
    cout << "1 - Adicionar um novo triangulo" << endl;
    cout << "2 - Listar todos os triangulos" << endl;
    cout << "3 - Verificar se dois triangulos sao iguais" << endl;
    cout << "4 - Listar triangulos de um determinado tipo" << endl;
    cout << "5 - Verificar se um triangulo eh valido" << endl;
    cout << "0 - Sair" << endl;
    cin >> entrada;
    cout << endl;

      switch(entrada){
        case 1:
          //Adicionar um novo triangulo
          if(contador < TAM){
            triangulos[contador].lerLados();
            contador++;
          } else cout << endl << "Voce ja adicionou o maximo de triangulos possiveis!" << endl;
          break;
        case 2:
          //Listar todos os triangulos;
          for(int i = 0; i < contador; i++){
            cout << "Triangulo " << i+1 << endl;
            escreverTriangulo(triangulos[i]);
          }
          break;
        case 3:
          //Verificar dois triangulos
          verificaTriangulos(triangulos);
          break;
        case 4:
          //Escrever todos os triangulos de um mesmo tipo
          listarTipo(triangulos);
          break;
        case 5:
          //Verificar se um triangulo eh valido
          ehValido(triangulos);
          break;
      }

    cout << endl << "-----------------------" << endl << endl;

  }while(entrada != SAIR);
  despedida();
  return 0;
}


void escreverTriangulo(Triangulo triangulo){
  //Descobrir o tipo de triangulo
  int tipo = triangulo.tipoTriangulo();
  //Escrever na tela qual o tipo do triangulo
  float perimetro;  //variavel que salva o tamanho do perimetro
  switch(tipo){
    case 1:
      cout << "O triangulo eh equilatero!" << endl;
      //Descobrir o perimetro do triangulo
      perimetro = triangulo.perimetroTriangulo();
      cout << "O perimetro do triangulo eh " << perimetro << endl;
      break;
    case 2:
      cout << "O triangulo eh isosceles!" << endl;
      //Descobrir o perimetro do triangulo
      perimetro = triangulo.perimetroTriangulo();
      cout << "O perimetro do triangulo eh " << perimetro << endl;
      break;
    case 3:
      cout << "O triangulo eh escaleno!" << endl;
      //Descobrir o perimetro do triangulo
      perimetro = triangulo.perimetroTriangulo();
      cout << "O perimetro do triangulo eh " << perimetro << endl;
      break;
    case 0:
      cout << "Algum lado do triangulo eh invalido!\nNenhum lado pode ser menor ou igual a 0!" << endl;
      break;
  }
  cout << endl;
}


void verificaTriangulos(Triangulo triangulo[]){
  int triangulo1,
      triangulo2;

  //Usuario decide quais triangulos comparar
  do{
    cout << endl << "Escreva o primeiro triangulo: ";
    cin >> triangulo1;
  }while(triangulo1 < 1 || triangulo1 > 5);

  do{
    cout << endl << "Escreva o segundo triangulo: ";
    cin >> triangulo2;
  }while(triangulo2 < 1 || triangulo2 > 5);

  bool iguais = triangulo[triangulo1-1].vericarTriangulos(triangulo[triangulo2-1]);
  if(iguais){
    cout << endl << "Os dois triangulos sao iguais!" << endl;
  }
  else{
    cout << endl << "Os dois triangulos sao diferentes!" << endl;
  }
}


void ehValido(Triangulo triangulo[]){
  bool ehValido;
  int qualTriangulo;
  cout << endl << "Escreva o triangulo que voce quer checar: ";
  cin >> qualTriangulo;

  ehValido = triangulo[qualTriangulo-1].validaTriangulo();
  if(ehValido){
    cout << endl << "Esse triangulo eh valido" << endl;
  }
  else{
    cout << endl << "Esse triangulo nao eh valido";
  }
}

void listarTipo(Triangulo triangulo[]){
  int escolhaUsuario;

  cout << triangulo[0].quantidadeObjetosMemoria();

  cout << "Exibir todos os triangulos de mesmo tipo" << endl;
  cout << "Escolha o tipo de triangulo para ser exibido" << endl;
  cout << "1 - equilatero" << endl;
  cout << "2 - isosceles" << endl;
  cout << "3 - escaleno" << endl;
  cout << "4 - triangulos invalidos" << endl;
  cout << "Digite: ";
  cin >> escolhaUsuario;

  cout << endl << "---------------------" << endl;

  if(escolhaUsuario == 1){
    cout << "Os triangulos equilateros sao:" << endl;
    for(int i = 0; i < triangulo[0].quantidadeObjetosMemoria(); i++){
      if(triangulo[i].tipoTriangulo() == 1){
        cout << "Triangulo: " << i+1;
      }
    }
  }

  else if(escolhaUsuario == 2){
    cout << "Os triangulos isosceles sao:" << endl;
    for(int i = 0; i < triangulo[0].quantidadeObjetosMemoria(); i++){
      if(triangulo[i].tipoTriangulo() == 2){
        cout << "Triangulo: " << i+1;
      }
    }
  }

  else if(escolhaUsuario == 3){
    cout << "Os triangulos escaleno sao:" << endl;
    for(int i = 0; i < triangulo[0].quantidadeObjetosMemoria(); i++){
      if(triangulo[i].tipoTriangulo() == 3){
        cout << "Triangulo: " << i+1 << endl;
      }
    }
  }

  else if(escolhaUsuario == 4){
    cout << "Os triangulos invalidos sao:" << endl;
    for(int i = 0; i < triangulo[0].quantidadeObjetosMemoria(); i++){
      if(triangulo[i].tipoTriangulo() == 0){
        cout << "Triangulo: " << i+1 << endl;
      }
    }
  }

  else{
    cout << "Voce digitou algum valor invalido!" << endl << endl;
  }
}
