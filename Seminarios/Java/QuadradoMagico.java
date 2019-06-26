import java.util.Scanner;

public class QuadradoMagico{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //Instanciar a classe QuadradoMagico
    QuadradoMagico quadradoMagico = new QuadradoMagico();

    //Receber tamanho do quadrado
    int n = leitor.nextInt();

    //Criacao do quadrado com o tamanho informado em n
    int[][] quadrado = new int[n][n];

    //Preencher quadradoMagico com os valores que o usuario informar
    for(int i = 0; i < n;i++){
      for(int j = 0; j < n; j++){
        quadrado[i][j] = leitor.nextInt();
      }
    }

    int resultado = quadradoMagico.valorDoQuadrado(quadrado, n);
    System.out.println(resultado);

  }
}

class QuadradoMagico{
  public static int valorDoQuadrado(int[][] quadrado, int n){
    //valor quadrado: 0 para quadrado com valor incorreto
    //outros valores para o resultado da soma de todos os lados do quadrado
    int valorQuadrado = 0;

    boolean quadradoCerto = true; //Testar se o quadrado realmente tem todos os lados iguais

    int valorSoma = 0; //Valor da soma da primeira linha
    int somaLinhaAtual = 0;  //Valor da linha para ser comparada com o valorSoma

    //Valor da primeira linha do quadrado
    //Todos os valores da outras linhas precisam ser iguais a esse para o quadrado estar certo
    for(int i = 0; i < n; i++){
      valorSoma += quadrado[i][0];
    }
    

    //Testar horizontal
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        somaLinhaAtual += quadrado[i][j];
      }
      if(somaLinhaAtual != valorSoma){
        quadradoCerto = false; //Se uma linha estiver errada, o quadrado todo esta errado
      }
      somaLinhaAtual = 0; //Zerar contador da linha atual
    }

    //Testar vertical
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        somaLinhaAtual += quadrado[j][i];
      }
      if(somaLinhaAtual != valorSoma){
        quadradoCerto = false; //Se uma linha estiver errada, o quadrado todo esta errado
      }
      somaLinhaAtual = 0; //Zerar contador da linha atual
    }

    if(quadradoCerto){
      valorQuadrado = valorSoma;
    }

    return valorQuadrado;

  }
}
