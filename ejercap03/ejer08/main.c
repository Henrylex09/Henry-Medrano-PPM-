#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int i, num;//Con esta linea, creamos 2 variables de tipo entero, "i" y "num"
    long fac;//Con esta linea creamos una variable de tipo entero de largo alcance, "fac"
    printf("\nIngrese el numero: ");//Con esta linea imprimimos un mensaje indicando que se debe de ingresar un valor
    scanf("%d", &num);//Con esta linea le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "num"
    if (num >= 0)//Con esta linea creamos una condicion, en la que si la variable "num" es mayor o igual a 0, se cumple la condicion
    {
        fac = 1;//Con esta linea indicamos que la variable "fac" es igual a 1
        for (i=1; i <= num; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a la variable "num", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
            fac *= i;//Con esta linea indicamos que la variable "fac" sera igual a su valor multiplicado por el valor de la variable i
        printf("\nEl factorial de %d es: %ld", num, fac);//Con esta linea imprimimos el valor de las variables "num" y "fac"
    }
    else//Con esta linea indicamos lo que se realizara en caso de no cumplirse la condicion del if
        printf("\nError en el dato registrado");//Con esta linea imprimimos un mensaje indicando un error en el dato registrado
}
