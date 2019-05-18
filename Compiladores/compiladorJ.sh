#!/bin/bash

##COMPILADOR DE JAVA

##Limpar terminal
clear
##Compilar arquivo java
##Para compilar corretamente nao pode escrever .java no final (EX: ./compiladorJ.sh helloWorld)
javac $1.java
##Executar arquivo compilado
java $1

##Remover arquivo compilado
rm $1.class
