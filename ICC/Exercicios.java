import java.lang.Math;
import java.util.Random;
import java.util.Scanner;


/*
 *  Uma interface serve para especificar um ou mais m�todos de um tipo:
 *  seu tipo de retorno, nome e lista de par�metros.
 *
 *  "Para usar um tipo, o que importa � O QUE o tipo faz e n�o como faz."
 *
 */

/**
 * Interface para tipo que devem disponibilizar um m�todo para rodar
 * algo espec�fico do tipo. Neste caso, rodar um programa (exerc�cio)
 * de uma lista de exerc�cios qualquer.
 *
 * @author saulo
 *
 */
interface Runnable {
	void run();
}

/**
 * Classe que implementa a interfce Runnable e expressa a vontade do @author rsrsrs
 *
 * Ao implementar uma interface a classe se torna sua herdeira.
 *
 * @author saulo
 *
 */
class AToa1 implements Runnable {
	private int N;

	/**
	 * Uma fun��o construtora...
	 *
	 * @param quantasVezesAtoa: n�mero de vezes que �toa1 expressa sua vontade.
	 */
	public AToa1(int quantasVezesAtoa ) {
		this.N = quantasVezesAtoa;
	}

	/**
	 *  Construtora default.
	 *  Cuidado ao usar!!!
	 */
	public AToa1() {
		this.N = Integer.MAX_VALUE;
	}

	/**
	 * Implementa��o do m�todo "herdado" da interface.
	 */
	public void run() {
		for (int i = 0; i < this.N; i++)
			System.out.println("\n\n\t" + (i+1) + ") Quero ficar à toa!");
	}
}



class BufferCircular implements Runnable {
	private Object[] buffer;
	private int pos;			// Sempre indica a posi��o a inserir o elemento

	/**
	 * Cria um buffer circular do tamanho especificado por TAMANHO.
	 *
	 * @param TAMANHO
	 */
	public BufferCircular(int TAMANHO) {
		this.buffer = new Object[TAMANHO];
		this.pos = 0;					// useless
	}

	/**
	 * Insere um elemento sempre na "�ltima" posi��o.
	 *
	 * @param elemento: pode ser de qualquer tipo!
	 */
	public void insere(Object elemento) {
		this.buffer[this.pos] = elemento;
		this.pos = (this.pos + 1) % this.buffer.length;
	}

	public Object getElemento(int qual) {
		return this.buffer[ qual % this.buffer.length ];
	}

	/**
	 * Aqui vai o exerc�cio a ser rodado...
	 *
	 */
	public void run() {
		// Sorteia e cria objetos de dois tipos
		Random rd = new Random();
		for (int i = 0; i < this.buffer.length; i++) {
			int escolhe = rd.nextInt(2);
			if (escolhe == 0)
				this.insere(rd.nextLong());
			else
				this.insere(rd.nextGaussian());
		}

		for (int i = 0; i < this.buffer.length + 1; i++) {
			System.out.print("\nElemento " + i + " no buffer: " + this.getElemento(i));
			System.out.print(" do tipo " + this.getElemento(i).getClass().getSimpleName());
			System.out.println(" (" + this.getElemento(i).getClass().getName() + ")");
		}
	}
}	// fim BufferCircular

/**
 * Esta classe exemplifica o poder dado pelas interfaces.
 * seus m�todos trabalham com os m�todos da interface Runnable
 * mas n�o sabem nada sobre as classes "concretas":
 *
 * qualquer classe que implementar Runnable pode ser processada pelos
 * m�todos "runExercicio"
 *
 * @author saulo
 *
 */


class ConversorNumerico implements Runnable {
	static int numero = 0;
	static int base = 0;

	public void run() {
		System.out.println("Conversao de bases:");
		System.out.println("1 - Converter de decimal para qualquer base (1 - 10)");
		System.out.println("2 - Converter de qualquer base (1 - 10) para decimal");
		System.out.print("Digite: ");
		int decisaoUsuario = Exercicios.leitor.nextInt();
		switch (decisaoUsuario) {
			case 1:
				orquestradorConverter();
				break;
		
			case 2:
				orquestradorConverterDec();
				break;
			default:
				System.out.println("Valor inválido!");
				break;
		}
	}

	public void orquestradorConverter(){
		// Funcao que converte bases
		System.out.println("Por favor escreva um numero e sua base, para que ele seja convertido");
		System.out.print("Digite o numero: ");
		numero = Exercicios.leitor.nextInt();
		System.out.print("Digite a base: ");
		base = Exercicios.leitor.nextInt();
		if(base != 1){
			String resultado = converter(numero, base);
			System.out.println(resultado);
		}
		else{
			for(int i = 0; i < numero; i++){
				System.out.print("1");
			}
			System.out.println();
		}
	}

	public String converter(int numero, int base){
		String numConvertido = ""; //Variavel que armazena o numero convertido
		String numConvertidoFormatado = "";

		while(numero > 0){
			numConvertido += numero % base;
			numero /= base;
		}

		int tamanhoString = numConvertido.length();
		while(0 < tamanhoString){
			numConvertidoFormatado += numConvertido.charAt(tamanhoString-1);
			tamanhoString--;
		}

		return numConvertidoFormatado;
	}

	public void orquestradorConverterDec(){
		// Conversao de alguma base para decimal
		System.out.println("Por favor escreva um numero e sua base, para que ele seja convertido para decimal");
		System.out.print("Digite o numero: ");
		numero = Exercicios.leitor.nextInt();
		System.out.print("Digite a base: ");
		base = Exercicios.leitor.nextInt();
		if(base != 1){
			int resultado = converterDec(numero, base);
			System.out.println(resultado);
		}
		else{
			int base1Dec = 0;
			String numeroString = Integer.toString(numero);
			int tamanhoString = numeroString.length();
			for(int i = 0; i < tamanhoString; i++){
				base1Dec++;
			}
			System.out.println(base1Dec);
		}
	 }

	public int converterDec(int numero, int base){
		int numConvertido = 0; //Variavel que armazena o numero convertido
		String numConvertidoFormatado = "";

		String numString = Integer.toString(numero);
		int tamanhoString = numString.length();
		for (int i = 1 ; i <= tamanhoString; i++){
			numConvertidoFormatado += numString.charAt(tamanhoString-i);
		}


		int numFormatado = Integer.parseInt(numConvertidoFormatado);
		for(int i = 1; i <= tamanhoString; i++){
			numConvertido += numFormatado % 10 * Math.pow(base, tamanhoString-i);
			numFormatado /= 10;
		}

		return numConvertido;
	}

}

class BitWise implements Runnable {

	public void run() {
		System.out.println("Multiplicação por bitwise:");
		System.out.println("1 - Multiplicar por 2");
		System.out.println("2 - Dividir por 2");
		System.out.print("Digite: ");
		int decisaoUsuario = Exercicios.leitor.nextInt();
		switch (decisaoUsuario) {
			case 1:
				orquestradorMul();
				break;
		
			case 2:
				orquestradorDiv();
				break;
			default:
				System.out.println("Valor inválido!");
				break;
		}
	}

	public void orquestradorMul(){
		// Funcao que multiplica por bitwise
		System.out.println("Por favor escreva um numero, para que ele seja multiplicado");
		System.out.print("Digite o numero: ");
		int numero = Exercicios.leitor.nextInt();
		int resultado = Multiplicar(numero);
		System.out.println(resultado);
	}

	public int Multiplicar (int numero) {
		int resultado = 0;
		resultado = numero << 1;
		return resultado;
	}
	
	public void orquestradorDiv(){
		// Funcao de divisao por bitsise
		System.out.println("Por favor escreva um numero, para que ele seja dividido");
		System.out.print("Digite o numero: ");
		int numero = Exercicios.leitor.nextInt();
		int resultado = Dividir(numero);
		System.out.println(resultado);
	}

	public int Dividir(int numero) {
		int resultado = 0;
		resultado = numero >> 1;
		return resultado;
	}


}


public class Exercicios {
	static Scanner leitor = new Scanner(System.in);

	/**
	 * Roda um exerc�o qualquer!
	 * @param ex
	 */
	public void runExercicio(Runnable ex) {
		ex.run();
	}

	public void runExercicio(Runnable[] exercicios) {
		for (Runnable r: exercicios)
			r.run();
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		Runnable[] exs = new Runnable[4];
		for (int i = 0; i < exs.length; i++)
			if (i % 2 == 0)
				exs[i] = new BufferCircular(i + 4);
			else
				exs[i] = new AToa1(i + 4);

		Exercicios lista = new Exercicios();
		BufferCircular bf = new BufferCircular(4);
		ConversorNumerico cn = new ConversorNumerico();
		BitWise bw = new BitWise();
		//AToa1 atoa = new AToa1();						// IXI!!

		//lista.runExercicio(bf);		// roda um buffer

		//Rodar meus exercicios
		//lista.runExercicio(cn);
		lista.runExercicio(bw);


	 //lista.runExercicio(atoa); 	// IXI! IXI!

		// lista.runExercicio(exs); 	// roda runnables de tipos variados

		/*
		 * experimente cria um buffer de buffers!!!
		 *
		 */
	}

}	// fim Exercicios


/*

   									TRABALHO PR�TICO

 	Em cada exerc�cio, escreva uma classe que implementa a interface Runnable.
 	Ao terminar, use a classe Exercicios para rodar todas as tarefas do trabalho,
 	como foi feito no m�todo main.

 	Para facilitar, se achar conveniente, escreva todas as classes neste arquivo,
 	como foi feito para as classes bufferCircular e �Toa.

   	Exerc�cio 1)
   				Escreva um algoritmo que converta n�meros inteiros positivos
   				de um sistema de numera��o de base b, b < 10, para decimal e de decimal
   				para o referido sistema.

   				Encapsule seu algoritmo em uma classe que implementa a interface Runnable.

	Exerc�cio 2)
				Escreva uma classe que multiplica e divide n�meros inteiros por 2 uilizando
				os operadores de deslocamento de bits "<<", ">>" e ">>>"

	EXTRA 1)
	 			Utilizar os sistemas octal e/ou hexadecimal para converter de bin�rio para
	 			decimal e vice-versa.

	EXTRA 2)
	 			Utilizar o Sistema Ene�rio (base 9) para converter de tern�rio (base 3) para
	 			decimal e vice-versa.

	EXTRA 3)
	 			Converter n�meros decimais fracion�rios para bin�rio com precis�o p,
	 			fornecida pelo usu�rio.

 */
