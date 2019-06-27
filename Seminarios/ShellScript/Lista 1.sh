#1) Quais os comandos para criar um caminho de diretório “seminarios/lista1” dentro do seu
#diretório home? Execute estes comandos.

cd ~
mkdir seminarios
cd seminarios
mkdir lista1
cd lista1


#2) Se você estiver no diretório ~/seminarios/lista1, em que diretório estará após a execução
#de 'cd ../.. ' ?

Estara no directorio home


#3) Suponha que um arquivo texto nomeado trabalho.txt contém os dados de nomes e
#números de matrículas de vários alunos. Qual comando você executaria para mostrar este
#arquivo, página por página?

more trabalho.txt

#4) Sabendo que o arquivo separa nomes e matrículas por ponto-e-vírgula (;), como você
#localizaria um aluno de matrícula 133051 neste arquivo e mostraria somente seu nome?

grep "133051" trabalho.txt | cut -d ";" -f 2

#5) Execute o comando 'wc ipsum.txt'. Consultando as man pages e observando o resultado,
#explique para que serve o comando wc.

O comando wc mostra em ordem o numero de novas linhas, numero de palavras no arquivo e o numero de bytes ocupado.

#6) O que fará o comando cp *.sh fontes ?

O comando cp *.sh fontes copiara todos os sh do directorio para dentro de uma pasta chamada fontes, caso essa pasta exista.

#7) Execute ls /bin > teste2.txt .Em seguida execute cat -n teste2.txt .Observe o resultado.
#O que significa o parâmetro n?Utilize o vi ou o nano para editar e salvar um arquivo 'numeros.txt' contendo os números de
#1 a 15, um número em cada linha.
  
O parametro n serve para numerar os arquivos de 1 até o arquivo final.

#8) Qual o resultado do comando sort < numeros.txt ? Baseado nisso, o que faz o comando
#sort?

O comando sort ordena os numeros, mas tem alguns problemas ele ordena com base no primeiro digito da linha depois ordena com base no segundo digito e assim por diante. Dessa forma, ordenar valores com digitos diferentes pode sair fora de ordem


#9) Qual o resultado do comando sort -nr < numeros.txt ? O que significam, portanto, os
#parâmentros n e r?

O parametro n organiza os numeros considerando todos os digitos contidos nele, já o parametro r inverte a ordem de escrita da lista

#Para os exercícios a seguir, utilize o arquivo “dados2019.txt” fornecido em anexo. Este
#arquivo representa os programas em execução em um sistema Linux, contendo, em cada
#linha, os seguintes dados:
#Usuário, ID do programa, %CPU usada, início, tempo de execução, programa Total de Memória usada, Terminal, Hora de No arquivo, cada dado está separado do outro por um espaço em branco.
#10) Escreva um script que mostre o nome do programa que gasta a maior quantidade de
#memória.

#/bin/bash
##cortar os valores de dados2019.txt e salva apenas o quarto elemento
## ordena todos os valores em ordem decrescente
##Exibe apenas o primeiro item
cut dados2019.txt -d " " -f 4 | sort -nr | head -n 1

#11) Escreva um script que mostre a quantidade de programas que ocupem mais do que
#10000 bytes de memória do usuário user007

#!/bin/bash

##Contador de arquivos com mais de $bytes
i=0
##Quantidade de bytes
bytes=10000

##Corta apenas o valor de gasto de memoria e salva em dados.temp
cut dados2019.txt -d " " -f 4 > dados.temp
##Testa todos os valores de dados.temp e todos que tiverem 10000 bytes ou mais aumenta 1 no contador
for arq in $(<dados.temp)
do
	if [ $arq -ge $bytes ]
	then
		i=$((i + 1))
	fi
done

##Apaga o arquivo temporario
rm dados.temp

##Exibe o numero de arquivos com 10000 bytes ou mais
echo $i

#12) Escreva um script que recebe um nome de usuário como parâmetro e mostre o total de
#memória gasto pelos programas deste usuário

#!/bin/bash

##Contador de bytes
i=0

echo "Escreva qual usuario voce quer checar o gasto de memoria"
read parametro
##Separando os dados
grep "$parametro" dados2019.txt | cut -d " " -f 4 > dados.temp
##Soma o gasto de cada programa de um usuario
for arq in $(<dados.temp)
do
	i=$(($i+$arq))
done

##Apaga o arquivo temporario
rm dados.temp

##Mostra o gasto de bytes de um usuario
echo $i "bytes"

#13) Escreva um shellscript que conte exatamente quantos arquivos um usuário possui em
#um diretório qualquer recebido por parâmetro e informe esta quantidade.

#!/bin/bash


echo "Listar numero de arquivos em um directorio"
echo ""
printf "Escreva o directorio: "
##Ler directorio escrito por um usuario
read parametro
##Listar todos os elementos do directorio e salvar em um arquivo temporario 
ls $parametro > dados.temp
##Contar o numero de linhas que o arquivo contendo os directorios possui
wc dados.temp | cut -d " " -f 2
echo "Arquivos nesse directorio"

##Apaga o arquivo tempo
rm dados.temp
