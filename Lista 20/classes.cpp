#include <iostream>

using namespace std;

const int TAM = 50;


class Agenda{ //Criacao da classe agenda
  private:
    int dia;
    int mes;
    string nome;

  public:
    bool setDia(int dia){  //Cricao da funcao de checagem do dia
      bool sucesso = true;
      if(dia >= 1 && dia <= 31){
          this->dia = dia;
      }
      else{
        cout << "Voce escreveu um dia invalido!" << endl;
        sucesso = false;
      }
      return sucesso;
    }// fim set dia

      bool setMes(int mes){ //Cricao da funcao de checagem do mes
        bool sucesso = true;
        if(mes >= 1 && mes <= 12){
          this->mes = mes;
        }
        else{
          cout << "Voce digitou um mes invalido!" << endl;
          sucesso = false;
        }
        return sucesso;
      }//fim set dia

    void setNome(string nome){ //Criacao da funcao de salvar o nome
      this->nome = nome;
    }//fim setNome

    void setAgenda(int dia, int mes, string nome){ //Funcao mestre para inserir valores na agenda
      bool diaCerto, mesCerto;

      diaCerto = this->setDia(dia);
      mesCerto = this->setMes(mes);
      if(diaCerto && mesCerto)  this->setNome(nome);
    }//fim setAgenda

    void getAgenda(){ //Funcao de pegar todos os valores da agenda
      cout << "Nome: " << this->nome << "\nDia: " << this->dia << "\nMes: " << this->mes << "\n" << endl;
    }//fim da funcao getAgenda

    string getNome(){  //Funcao que retorna algum nome da agenda
      return this->nome;
    }//fim da funcao GetNome

    int getMes(){  //Funcao que retorna algum mes da agenda
      return this->mes;
    }//fim da funcao getMes
};//fim da agenda

//Assinatura das funcoes
//Precisa ser depois da agenda, pois a classe agenda precisa ser criada antes de chamar alguma funcao use ela
void adicionarNaAgenda(Agenda agenda[], int numAgenda);
void verificarNaAgenda(Agenda agenda[], int numAgenda);
void verificarTodosNaAgenda(Agenda agenda[], int numAgenda);


int main(void){
  Agenda agenda[TAM];
  int entrada;
  int pessoasNaAgenda = 0;

  do{
  cout << "\nPor favor escolha o que deseja fazer agora";
  cout << "\n1 - Adicionar alguem";
  cout << "\n2 - Verificar alguem";
  cout << "\n3 - Verificar todas as pessoas na agenda";
  cout << "\n0 - sair" << endl;
  cin >> entrada;

  switch (entrada) {
    case 1:
      adicionarNaAgenda(agenda, pessoasNaAgenda);
      pessoasNaAgenda++;
      break;
    case 2:
      verificarNaAgenda(agenda, pessoasNaAgenda);
      break;
    case 3:
      verificarTodosNaAgenda(agenda, pessoasNaAgenda);
      break;
    case 0:
      return 0;
    default:
      cout << "\nValor invalido!" << endl;
  }

  }while(entrada > 0 || entrada < 3);
}//fim da main


void adicionarNaAgenda(Agenda agenda[], int numAgenda){
  string nome;
  int dia,
      mes;

  cout << "\nPor favor escreva o seu nome: ";
  cin >> nome;

  cout << "\nEscreva o dia do seu aniversario: ";
  cin >> dia;

  cout << "\nEscreva o mes do seu aniversario: ";
  cin >> mes;

  agenda[numAgenda].setAgenda(dia, mes, nome);
}//fim da funcao adicionarNaAgenda


void verificarNaAgenda(Agenda agenda[], int numAgenda){
  int aniversario;
  cout << "Por favor digite o mes de aniversario: ";
  cin >> aniversario;

  cout << "Os anivesariantes do mes sao:" << endl;
  for(int i = 0; i < numAgenda; i++){
    if(agenda[i].getMes() == aniversario){
      cout << agenda[i].getNome() << endl;
    }
  }
}//fim da funcao verificarNaAgenda


void verificarTodosNaAgenda(Agenda agenda[], int numAgenda){ //Exibir todos que estao cadastrados na agenda
  for(int i = 0; i < numAgenda; i++){
    agenda[i].getAgenda();
  }
}//fim da funcao verificarTodosNaAgenda
