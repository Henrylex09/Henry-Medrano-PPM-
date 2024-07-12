#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float PRO;//Con esta linea creamos una variable de tipo real llamada "PRO"
    printf("Ingrese el promedio del alumno: ");//Con esta linea mandamos un mensaje en el que se pide se ingrese un dato
    scanf("%f", &PRO);//Con esta linea damor la opcion a introducir un dator, y el mismo se guardara en la variable "PRO"
    if(PRO >= 6.0)//Con esta linea creamos una condicion, en este caso es que la variable "PRO" sea mayor o igual a 6
        printf("\nAprobado");//Con esta linea imprimimos un mensaje en pantalla en caso de que la condicion de if se cumpla
    else//Con esta linea indicamos que en caso no se cumpla la condicion de if ejecutara una serie de ordenes
        printf("\nReprobado");//Con esta linea imprimimos un mensaje como consecuencia de no cumplirse la condicion de if
}
