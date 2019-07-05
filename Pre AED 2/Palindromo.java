import java.io.*;


class Palindromo{

  public static void main(String[] args) throws IOException{

    InputStream is = System.in;
    InputStreamReader isr = new InputStreamReader(is);
      BufferedReader br = new BufferedReader(isr);

      String digitado = br.readLine();

    boolean ehPalindromo = verificaPalindromo(digitado);
    if(ehPalindromo){
      System.out.println("Eh Palindromo");
    }
    else{
      System.out.println("Nao eh Palindromo");
    }

  }//fim main

  public static boolean verificaPalindromo(String entrada){
    boolean ehPalindromo = true;

    for(int i = 0, j=entrada.length()-1; i < entrada.length()/2; i++,j--){
      if(entrada.charAt(i) != entrada.charAt(j)){
        ehPalindromo = false;
        i = j;
      }
    }//fim for
    return ehPalindromo;
  }//fim verificaPalindromo
}//fim Palindromo
