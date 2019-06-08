import java.util.Scanner;

public class invictos{
  public static void main(String[] args){
    Scanner leitor = new Scanner(System.in);

    //Instancia da classe Futebol
    Futebol futebol = new Futebol();

    // numero de jogos do time
    int N = leitor.nextInt();
    futebol.N = N;
	
    //Matriz com o placar dos jogos -placares[Pontuacao do time A][Pontuacao do time B]
    int[][] placares = new int[N][2];

    //ler valores e escrever na matriz
    String entrada;
    for (int k = 0; k < N; k++) {
      entrada = leitor.next();
      for(int j = 0; j < 2; j++){
        placares[k][j] = Integer.parseInt(entrada.split("x")[j]);
      }
    }

    //Escrever valores na tela
    int[] resposta = new int[3];
    resposta = futebol.streak(placares);
    System.out.printf("%d\n%d %d", resposta[0], resposta[1], resposta[2]);
  }
}


class Futebol{
  static int N; //Numero de jogos do time

  public static int[] streak(int[][] placares){
    int contadorDeStreak = 0; //Quantos pontos seguidos um time fez
    int maiorStreak = 0;  //Maior sequencia entre todas lidas
    int primeiroDoStreak = 100000;  //Pos inicial do comeco da sequencia de vitorias
    int ultimoDoStreak = -1;  //pos final da sequencia de vitorias
    int[] resultado = new int[3];  //vetor com os 3 itens que precisam ser mostrados na tela
   
    //Contadores usados na questao
    int i = 0; 
    int j = 0;
    int l = 0;

    for(i = 0; i < N; i++){
      contadorDeStreak = 0; //Para todo novo i a sequencia de vitorias eh zerada
      for(int k = j; k < N; k++){  //Para toda vez que achar uma sequencia vai percorrer ela
        if(placares[k][0] >= placares[k][1]){
          contadorDeStreak++;
        }
        else{	//Caso a sequencia acabe, termine a contagem
          l = k;
          break;
        }
       }
       j++;
       if(maiorStreak < contadorDeStreak){  //Caso seja encontrada uma nova sequencia dos os valores do vetor de resposta sao atualizados
         maiorStreak = contadorDeStreak;
         primeiroDoStreak = i+1;
         ultimoDoStreak = l;
       }
    }
  //resultados encontrados
  resultado[0] = maiorStreak;
  resultado[1] = primeiroDoStreak;
  resultado[2] = ultimoDoStreak;

  return resultado;
  }
}
