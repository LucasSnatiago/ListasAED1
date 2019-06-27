#!/bin/bash

#Variaveis que salvam o arquivo percorrido
maiorMemoria=0 #Item com maior gasto na memoria
contador=0 #Contador de loops do for
posMaior=0 #Contador da posicao do maior programa

#Separando os nomes e a quantidade de memória de todos os programas em dois arquivos diferentes
cat dados2019.txt | cut -d " " -f4 >> tamanhoNaMemoria.temp #Arquivo com todos os tamanhos de memoria
cat dados2019.txt | cut -d " " -f8 >> nomeDoPrograma.temp #Arquivo com todos os nomes dos programas

for arq in $(<tamanhoNaMemoria.temp) #Loop for para ler todos os tamanhos de memoria
do
  contador=$(($contador+1))
  if [ $arq -ge $maiorMemoria ]
  then
    maiorMemoria=$arq
    posMaior=$contador #Salvar a posicao do item que gasta a maior quantidade de memoria
  fi
done

nomeDoPrograma="" #Inicializando a variavel que salva o nome do item que gasta a maior memoria

for nomes in $(<nomeDoPrograma.temp) #Percorrendo o arquivo com o nome dos programas
do
  posMaior=$(($posMaior-1)) #Procurando a posicao do arquivo que gasta mais memoria
  if [ $posMaior -eq 0 ] #Quando o contador chegar a 0 eh porque achou o arquivo que mais gasta memoria
  then
    nomeDoPrograma=$nomes
  fi
done

#Escrevendo na tela o item com maior gasto de memoria
echo "O programa que gasta mais memoria = $nomeDoPrograma"

#Apagando os arquivos temporarios
rm tamanhoNaMemoria.temp
rm nomeDoPrograma.temp

