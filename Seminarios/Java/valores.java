import java.util.Scanner;


public class valores{

  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);
    int numeroItens;
    //Recebendo valores da entrada
    //Recebendo numero de itens que seram usados no programa
    numeroItens = leitor.nextInt();

    //Criando a matriz com os valores passados pelo site
    int[] numeros;
    numeros = new int[numeroItens];

    //Recebendo valores do site
    for(int i = 0; i < numeroItens; i++){
      do{
        numeros[i] = leitor.nextInt();
      }while(numeros[i] <= 0);
    }

    //Somando numeros pares da sequencia
    System.out.println(Calculadora.somaPares(numeros));
    //Descobrindo o maior valor
    System.out.println(Calculadora.maiorValor(numeros));
    //Descobrindo media da sequencia
    float media = Calculadora.media(numeros);
    System.out.printf("%.2f\n",media);
    //Descobrindo numero de itens abaixo da media
    System.out.println(Calculadora.menoresMedia(numeros, media));
  }
}


class Calculadora{

  public static int somaPares(int[] sequencia){  //Funcao para somar os valores pares da sequencia
    int soma = 0;
    for(int numero : sequencia){
      if(numero % 2 == 0){
        soma += numero;
      }
    }
    return soma;
  }

  public static int maiorValor(int[] sequencia){  //Funcao para descobrir o maior valor da sequencia
    int maior = sequencia[0];
    for(int numero : sequencia){
      if(maior < numero) maior = numero;
    }
    return maior;
  }

  public static float media(int[] sequencia){  //Funcao para descobrir a media dos valores da sequencia
    float media;
    int soma = 0;
    int itens = 0;
    for(int numero : sequencia){
      soma += numero;
      itens++;
    }
    media = (float) soma / itens;
    return media;
  }

  public static int menoresMedia(int[] sequencia, float media){  //Funcao para descobrir quantos numeros estao abaixo da media da sequencia
    int menores = 0;
    for(int numero : sequencia){
      if(numero < media) menores++;
    }
    return menores;
  }
}
