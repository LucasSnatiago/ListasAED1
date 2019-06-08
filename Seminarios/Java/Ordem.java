import java.util.Scanner;

public class Ordem{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //Recebendo valor inicial
    int N;
    N = leitor.nextInt();
   // Calculadora calc = new Calculadora(); Verde nao consegue rodar classes

    //Criando arranjo para receber os valores
    int[] sequencia = new int[N];
    for(int i = 0; i < N; i++){ //Lendo valores e escrevendo no arranjo
      sequencia[i] = leitor.nextInt();
    }

    //ler numero de pares de numeros que serao testados na sequencia
    int K;
    K = leitor.nextInt();

    //matriz com os valores a serem pesquisados
    int[][] pesquisar = new int[K][2];


	for(int i = 0; i < K; i++){ //Recebendo valores para escrever na matriz
		for(int j = 0; j < 2 ; j++){
		  pesquisar[i][j] = leitor.nextInt();
		}
	  }




    //Testes de ordem da matriz
    boolean[] estaOrdem = new boolean[K];
    estaOrdem = estaOrdem(pesquisar, sequencia, K);


    //Escrever as respostas na tela
    for(int i = 0; i < K; i++){
      if(estaOrdem[i]){
        System.out.println("SIM");
      }
      else{
        System.out.println("NAO");
      }
    }
  }

  //Funcao para pesquisar na matriz se dois numeros estao em ordem
    public static boolean[] estaOrdem(int[][] matriz, int[] sequencia, int K){
      boolean[] ordem = new boolean[K];
      for(int i = 0; i < K; i++){
        ordem[i] = true;  //A principio todos os valores estao em ordem
        for(int j = matriz[i][0]; j <= matriz[i][1] - 1; j++){
  	if(sequencia[j] > sequencia[j+1]){  //Caso algum valor seja encontrado fora de ordem, toda a sequencia esta fora de ordem
  	  ordem[i] = false;
  	  break;
  	}
        }
      }
      return ordem;
    }

}

