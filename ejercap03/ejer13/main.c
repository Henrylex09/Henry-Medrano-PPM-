#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i, pri = 0, seg = 1, sig;//Con esta linea creamos 4 variable de tipo entero "i" "pri" "seg" y "sig", he indicando que "pri" es igual a 0, y "seg" a 1
printf("\t %d \t %d", pri, seg);//Con esta linea, imprimimos las variables "pri" y "seg" con tabulaciones
for (i = 3; i <= 50; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a 50, se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
{
    sig = pri + seg;//Con esta linea, indicamos que la variable "sig" sera igual a su valor mas el de la variable "seg"
    pri = seg;//Con esta linea, indicamos que la variable "pri" sera igual a la variable "seg"
    seg = sig;//Con esta linea, indicamos que la variable "seg" sera igual a la variable "sig"
    printf("\t %d", sig);//Con esta linea imprimimos el valor de la variable "sig" con una tabulacion
}
}
