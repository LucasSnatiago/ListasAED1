// Questão: 6
// Nome completo do aluno: Lucas Santiago de Oliveira
// Número de matrícula: 650888
// Turno: manha
// Nome do professor: Joao Caram

import java.util.Scanner;
import java.util.Arrays;

public class q6_Lucas_650888{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //Receber valores da questao
    int n = leitor.nextInt();  //Receber o numero de botas

    int[] tamanhoSapato = new int[n]; //Ler tamanho dos sapatos
    char[] ladoSapato = new char[n];  //Ler lado do peh dos sapatos

    for(int i = 0; i < n; i++){
      tamanhoSapato[i] = leitor.nextInt();  //Ler tamanho do sapato
      ladoSapato[i] = leitor.next().charAt(0); //Ler lado do peh do sapato
    }

    //Instanciar a classe Botas
    Botas botas = new Botas(tamanhoSapato, ladoSapato);

    //Organizando sapatos na matriz da classe Bota
    botas.separarSapatos();

    //Recebendo valores da classe Bota e escrevendo na materia
    System.out.println(botas.numPares());

  }
}

class Botas{
  static int[] tamanhoSapato;
  static char[] ladoSapato;
  //Criacao da matriz com todos os tamanhos de sapatos e lados
  //sapatos[][0] -> Tamanho do sapato
  //sapatos[][1] -> Quantidade de pehs esquerdos
  //sapatos[][2] -> Quantidade de pehs direitos
  static int[][] sapatos;
  //Funcao construtora
  Botas(int[] TamanhoSapato, char[] LadoSapato){
    tamanhoSapato = TamanhoSapato;
    ladoSapato = LadoSapato;
    sapatos = new int[tamanhoSapato.length][3];
  }


  static int contadorSapatos = 0; //Contar quantos tamanhos de sapatos existem

  //Funcao para separar os sapatos em uma lista apenas -> sapatos
  public static void separarSapatos(){

      for(int tamanho : tamanhoSapato){
        if(!tamanhoExiste(tamanho)){
          tamanhoNaoExiste(tamanho);
        }

        else{
          for (int i = 0; i < sapatos.length; i++) {
            if(sapatos[i][0] == tamanho){  //Procurar na lista com todos os tamanhos dos sapatos o que tem o tamanho atual da busca
            //Verificar o lado do pe do sapato
              if(ladoSapato[i] == 'E'){  //Se o pe for esquerdo somar 1 no contador do esquerdo
                sapatos[i][1]++;

              }
              else if(ladoSapato[i] == 'D'){  //Se o pe for direito somar 1 no contador do direito
                sapatos[i][2]++;
              }
          }
        }
      }
  }
}

  //Verificar se o tamanho ja existe na matriz
  public static boolean tamanhoExiste(int tamanho){
    boolean existe = false;
    for(int i = 0; i < tamanhoSapato.length; i++){
      if(sapatos[i][0] == tamanho){
        existe = true;
        break;
      }
    }
    return existe;
  }

  //Adicionar um tamanho novo na lista de sapatos
  public static void tamanhoNaoExiste(int tamanho){
    sapatos[contadorSapatos][0] = tamanho;
    contadorSapatos++;
  }

  //Contar quantos pares tem em cada tamanho de sapato
  public static int numPares(){
    int numPares = 0;
    for(int i = 0; i < tamanhoSapato.length; i++){
      //O numero de pares de um sapato eh o mesmo numero que o menor numero de unidades de um dos pes
      //Por exemplo se tem 3 pes esquerdos e qualquer valor maior q 3 direitos, vai ter 3 pares
      if(sapatos[i][1] < sapatos[i][2]){  //Verificando se tem menos pe esquerdo do que direito
        numPares += sapatos[i][1];
      }
      else{  //Ha mais pe direito que esquerdo
        numPares += sapatos[i][2];
      }
    }
    return numPares;
  }
}
