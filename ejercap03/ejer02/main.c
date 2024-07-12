#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main (void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int i, n, num, sum;//Con esta linea creamos 4 variables de tipo entero "i" "n" "num" y "sum"
    sum = 0;//Con esta linea indicamos que la variable "sum" sea igual a 0
    printf("Ingrese el numero de datos:\t");//Con esta linea imprimimos un mensaje indicando que se debe ingresar un dato
    scanf("%d", &n);//Con esta linea indicamos al progreama que se ingresara un dato, y el mismo se guardara en la variable "n"
    for(i=1; i<=n; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a la variable "n", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
    {
        printf("Ingrese el dato numero %d:\t", i);//Con esta linea imprimimos un mensaje indicando que se debe ingresar un dato
        scanf("%d", &num);//Con esta linea indicamos al programa que se ingresara un dato y el mismo se guardara en la variable "num"
        if (num > 0)//Con esta linea creamos una condicion, en la que si la variable "num" es mayor a 0, se cumple la condicion
            sum = sum + num;//Con esta linea indicamos que la variable "sum" es igual a su valor + la variable "num"
    }
    printf("\nLa suma de los numeros positivos es: %d", sum);//Con esta linea imprimimos el valor de la variable sum
}
