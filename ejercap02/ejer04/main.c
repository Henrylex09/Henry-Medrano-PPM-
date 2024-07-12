#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float PRE, NPR;//Con esta linea cremaos 2 variables "PRO, NPR" de tipo flotante
    printf("Ingrese el precio del producto: ");//Con esta linea imprimimos un mensajes para indicar que se ingrese un dato
    scanf("%f", &PRE);//Con esta linea damos la opcion de introducir un dato y guardarlo con la variable "PRE"
    if(PRE < 1500)//Con esta linea ponemos una condicion en la que la variable "PRE" debe ser menor a 1500
        NPR = PRE * 1.11;//Con esta linea indicamos que la variable "NPR" sea igual a la variable PRE multiplicado por 1.11 si se cumple la condicion de if
    else//Con esta linea indicamos que en caso no se cumpla la condicion de if ejecutara una serie de ordenes
        NPR = PRE * 1.08;//Con esta linea indicamos que la variable NPR sea igual a la variable PRE multiplicado por 1.08 como consecuencia de no cumplirse la condicion de if
    printf("\nNuevo precio del producto: %8.2f", NPR);//Con esta linea imprimimos la variable "NPR" con un salto de linea eh, indicando que solo se imprimiran los 2 primeros decimales de la parte decimal; Este printf es independiente del if, y el else
}
