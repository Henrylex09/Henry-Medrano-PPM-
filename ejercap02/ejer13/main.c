#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
#include <math.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del math.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float X;//Con esta linea creamos una variable "X" de tipo real
    int Y;//Con esta linea creamos una variable "Y" de tipo entero
    printf("Ingresa el valor de Y: ");//Con esta linea imprimimos un mensaje que indique que se bede ingresar un dato
    scanf("%d", &Y);//Con esta linea le indicamos al programa que recibira un dato y lo guardara en la variable "Y"
    if(Y < 0 || Y > 50)//Con esta linea creamos una condicion en la que la variable "Y" debe ser  menor a 0 o mayor a 50
        X = 0;//Con esta linea indicamos que la variable "X" es 0 en caso de que se cumpla la condicion anterior
    else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
          if(Y <= 10)//Con esta linea creamos una condicion en la que la variable "Y" debe ser menor o igual a 10
             X = 4 / Y - Y;//Con esta linea indicamos que la variable "X" es igual a la resta de  4 dividido entre la variable "Y" menos la variable "Y"en caso de que la condicion anterior se cumpla
          else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
             if(Y <= 25)//Con esta linea creamos una condicion en la que la variable "Y" sea menor o igual a 25, en caso de que la condicion anterior se cumpla
              else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
                X = pow(Y, 2) + pow(Y, 3) - 18;//Con esta linea indicamos que la variable "X" sera igual a la suma de la tetracion de la variable "Y" a la  mas la resta de la tetracion de la variable "Y" a la 3 menos 18
    printf("\n\nY = %d\tX = %8.2f", Y, X);//Con esta linea imprimimos las variables "Y" y "X"
        }
