#!/bin/bash

##COMPILADOR DE C

##Limpar terminal
clear
##Compilar arquivo c
gcc $1
##Executar arquivo compilado
./a.out

##Remover arquivo compilado
rm a.out
