#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
#include <math.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del math.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int NUM;//Con esta linea creamos una variable de tipo entero llamada "NUM"
    printf("Ingrese el numero: ");//Con esta linea imprimimos un mensaje indicando que se debe ingresar un dato
    scanf("%d", &NUM);//Con esta linea le indicamos al programa que recibira un dato y lo guardara en la variable "NUM"
    if (NUM == 0)//Con esta linea creamos una condicion en la que la variable "NUM" debe ser igual a 0
        printf("\nNulo");//Con esta linea imprimimos un mensaje si la condicion fue cumplida
    else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
        if(pow (-1, NUM) > 0)//Con esta linea creamos una condicion en la que -1 tetratado a la variable "NUM" sea mayor a 0
           printf("\nPar");//Con esta linea imprimimos un mensaje si la condicion fue ncumplida
        else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
            printf("\nImpar");//Con esta linea imprimimos un mensaje
    }
