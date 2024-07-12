#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int DIS, TIE;//Con esta linea creamos 2 variables "DIS" y "TIE" de tipo entero
    float BIL;//Con esta linea creamos una variable "BIL" de tipo real
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");//Con esta linea imprimimos un mensaje indicando que se deben de ingresar unos datos
    scanf("%d %d", &DIS, &TIE);//Con esta linea le indicamos al programa que recibira 2 datos y los guardara en las variables "DIS" y "TIE"
    if ((DIS*2 > 500) && (TIE > 10))//Con esta linea creamos una condicion en la que la vriable "DIS" multiplicada por 2 sea mayor a 500, y la variable "TIE" mayor a 10
        BIL = DIS * 2 * 0.19 * 0.8;//Con esta linea indicamos que la variable "BIL" sera igual a la variable "DIS" multiplicado por 2, 0.19 y 0.8 en caso de que la condicion anterior se cumpla
    else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
        BIL = DIS * 2 * 0.19;//Con esta linea indicamos que la variable "BIL" sera igual a la variable "DIS" multiplicada por 2 y 0.19
    printf("\n\nCosto del billete: %7.2f", BIL);//Con esta linea imprimimos la variable "BIL"
}
