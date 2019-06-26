#include <iostream>

class Quadrado{
  private:
    static int quantidadeObjetos;
    float lado;
  public:
    Quadrado(float lado){
      this->lado = lado;
      quantidadeObjetos++;
    }
    Quadrado(){
      this->lado = 0;
      quantidadeObjetos++;
    }

    void escrever(){
      std::cout << "\nLado= " << this->lado;
    }

    static int getQuantidade(){
      return quantidadeObjetos;
    }

};

int Quadrado::quantidadeObjetos = 0;

int main(){
  Quadrado Q1;

  Quadrado Q2(7);

  Q1.escrever();
  Q2.escrever();

  Quadrado *Q3;
  Q3 = new Quadrado(5);

  Q3->escrever();

  std::cout << "\nNumero de objetos criados: " << Q1.getQuantidade();

  Quadrado *Q4[5];
  Q4[0] = new Quadrado(3);

  Q4[1] = new Quadrado;

  Q4[0]->escrever();
  Q4[1]->escrever();
  std::cout << "\nNumero de objetos criados: " << Q4[1]->getQuantidade();


  std::cout << "\n";
  return 0;
}
