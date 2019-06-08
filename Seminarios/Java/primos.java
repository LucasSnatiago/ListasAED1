import java.util.Scanner;

public class primos{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //Descobrir o numero de itens que serao recebidos
    int valores;
    do{
      valores = leitor.nextInt();
    }while(valores < 0 || valores > 100);

    //Criando vetor com o tamanho dos itens que serao recebidos
    int[] numeros;
    numeros = new int[valores];

    //Ler valores e escrever no vetor
    for(int i = 0; i < valores; i++){
      numeros[i] = leitor.nextInt();
    }

    //Escrever se eh primo ou nao
    for(int numero : numeros){
      if(Calculadora.ehPrimo(numero)){  //Rodar funcao para testar se um numero eh primo ou nao
        System.out.println("SIM");
      }
      else{
        System.out.println("NAO");
      }
    }
  }
}

class Calculadora{

  public static boolean ehPrimo(int numero){
    boolean ehPrimo = true;  //Todo numero a principio eh primo
    if(numero != 2){
      for(int i = 2; i < numero/2+1; i++){
        if(numero % i == 0){  //Se encontrar um divisor sem ser 1 e ele mesmo o numero deixa de ser primo e para a checagem
          ehPrimo = false;
          break;
        }
      }
    }
    return ehPrimo;
  }
}
