import java.util.Scanner;

public class Notas1{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in); //Criacao do scanner

    //Receber valores da questao
    int n = leitor.nextInt();  //Receber o numero de alunos

    //receber o nome dos Alunos
    String[] nomes = new String[n];
    for(int i = 0; i < n; i++){
      nomes[i] = leitor.next();  //Preenchendo string com o nome dos alunos
    }

    //Receber a nota dos alunos
    int[][] notas = new int[n][4];
    //Preencher a matriz com as 4 notas de cada aluno
    for(int i = 0; i < n; i++){
      for(int j = 0; j < 4; j++){
        notas[i][j] = leitor.nextInt();
      }
    }


    //Instanciar a classe Alunos
    Alunos alunos = new Alunos(nomes, notas);

    //Receber os valores da classe
    int[] notaFinal = alunos.somarNotas();

    //Printar valores na tela
    for(int i = 0; i < n; i++){
      System.out.println(nomes[i] + " " + notaFinal[i]);
    }
  }
}


class Alunos{
  //Variaveis para serem usadas por toda a classe
  static String[] nomes;
  static int[][] notas;
  //Construtor para montar o objeto
  Alunos(String[] Nomes, int[][] Notas){
    nomes = Nomes;
    notas = Notas;
  }

  //funcao de somar as notas dos alunos
  public static int[] somarNotas(){
    int[] somaNotas = new int[nomes.length];
    int somaNotasAluno = 0;

    for(int i = 0; i < nomes.length; i++){
      for(int j = 0; j < 4; j++){
        somaNotasAluno += notas[i][j]; //Somar a linha recebida em notas[][] em somaNotas[]
      }
      somaNotas[i] = somaNotasAluno;
      somaNotasAluno = 0; //Zerar a contagem da linha
    }

    return somaNotas;
  }


}
