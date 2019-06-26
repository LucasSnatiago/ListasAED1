import java.util.Scanner;
import java.util.Locale;

public class Notas3{
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
    float[] porcentagemNotas = alunos.porcentagemNotas();
    int[] alunoMaiorNota = alunos.alunoMaiorNota();

    //Escrevendo as respostas das questoes
    System.out.println("PROVA 1 " + String.format(Locale.US, "%.2f", porcentagemNotas[0]));
    System.out.println("PROVA 2 " + String.format(Locale.US, "%.2f", porcentagemNotas[1]));
    System.out.println("PROVA 3 " + String.format(Locale.US, "%.2f", porcentagemNotas[2]));
    System.out.println("PROVA 4 " + String.format(Locale.US, "%.2f", porcentagemNotas[3]));
    System.out.printf("%s %d\n", nomes[alunoMaiorNota[0]], alunoMaiorNota[1]);
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

  //Funcao para descobrir a media de uma prova
  public static float[] porcentagemNotas(){
    float[] porcentagemNotas = new float[4]; //porcentagemNotas[Numero da prova - 1] -> porcentagem da turma nessa prova
    int somaNotas = 0;
    float media = 0;

    //Porcentagem das provas
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < nomes.length; j++){
        somaNotas += notas[j][i]; //lendo a linha que contem as notas de cada prova
      }
      porcentagemNotas[i] = (float) somaNotas / nomes.length; //Dividindo a pontucao das pessoas na prova pelo numero de pessoas
      somaNotas = 0;
    }

    return porcentagemNotas;
  }


  //Funcao para descobrir qual aluno teve a maior nota
  public static int[] alunoMaiorNota(){
     //alunoMaiorNota[0] posicao onde esta na string nome na main o aluno que obteve a maior nota
     //alunoMaiorNota[1] nota total que o aluno tirou
    int[] alunoMaiorNota = new int[2];
    int maiorNota = 0;
    int posAlunoMaiorNota = 0;
    int somaLinhaAtual = 0;


    //Somar todas as notas obtidas no semestre e checar se eh maior do que a maior que ja estava armazenada
    for(int i = 0; i < nomes.length; i++){
      for(int j = 0; j < 4; j++){
        somaLinhaAtual += notas[i][j];
      }
      if(somaLinhaAtual > maiorNota){
        maiorNota = somaLinhaAtual; //Maior nota
        posAlunoMaiorNota = i; //Posicao do aluno com a maior nota
      }
      somaLinhaAtual = 0;
    }

    //Escrevendo valores no arranjo com as respostas
    alunoMaiorNota[0] = posAlunoMaiorNota;
    alunoMaiorNota[1] = maiorNota;
    return alunoMaiorNota;
  }
}
