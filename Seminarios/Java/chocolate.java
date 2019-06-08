import java.util.Scanner;

public class chocolate{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //ler numero de itens que serao usados
    int quantidade;
    do{
      quantidade = leitor.nextInt();
    }while(quantidade < 1 || quantidade > 1000);

    //Criando arranjo para armazenar os valores
    int[] numeros;
    numeros = new int[quantidade];

    //Ler valores e escrever no arranjo
    for(int i = 0; i < quantidade; i++){
      do{
        numeros[i] = leitor.nextInt();
      }while(numeros[i] < 2 || numeros[i] > 10);
    }
    //Numero de pedacos de chocolate
    int pedacosChocolate = Calculadora.cortes(numeros); //Funcao que conta o numero de pedacos de chocolate
    System.out.println(pedacosChocolate);
  }
}


class Calculadora{
    public static int cortes(int[] sequencia){
      int barras = 0;
      //Contagem do numero de barras de chocolate
      for(int numero : sequencia){
        barras += numero - 1;
      }
      return barras;
    }
}
