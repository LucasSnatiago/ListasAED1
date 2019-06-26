import java.util.Scanner;

public class Notas2{
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
    boolean[] estaoAprovados = alunos.estaAprovado(notaFinal);
    float[] quantidadeAprovados = alunos.quantidadeAprovados(estaoAprovados);

    //Printar valores na tela
    for(int i = 0; i < n; i++){
      if(estaoAprovados[i]){
        System.out.println(nomes[i] + " " + "APROVADO");
      }
      else{
        System.out.println(nomes[i] + " " + "REPROVADO");
      }
    }
    System.out.println((int)quantidadeAprovados[0] + " APROVADOS");
    System.out.println((int)quantidadeAprovados[1] + " REPROVADOS");
    System.out.printf("%.0f%%\n" ,quantidadeAprovados[2]);
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


  //funcao para checar se esta acima da media
  public static boolean[] estaAprovado(int[] notasFinais){
      boolean[] estaAprovado = new boolean[nomes.length];

      for(int i = 0; i < nomes.length; i++){
        estaAprovado[i] = false;
        if(notasFinais[i] >= 60) estaAprovado[i] = true;
      }

      return estaAprovado;
  }


  public static float[] quantidadeAprovados(boolean[] estaAprovado){
    //quantidadeAprovados[0] = numero de aprovados na materia
    //quantidadeAprovados[1] = Numero de reprovados na materia
    //quantidadeAprovados[2] = Porcentagem de aprovados na materia
    float[] quantidadeAprovados = new float[3];
    int aprovados = 0;
    int reprovados = 0;
    float porcentagem = 0;

    for(int i = 0; i < nomes.length; i++){
      if(estaAprovado[i]) aprovados++;
      else reprovados++;
    }

    porcentagem = (float)aprovados / (aprovados + reprovados) * 100;

    //Passagem das repostas para o arranjo
    quantidadeAprovados[0] = (float)aprovados;
    quantidadeAprovados[1] = (float)reprovados;
    quantidadeAprovados[2] = porcentagem;
    return quantidadeAprovados;
  }
}
