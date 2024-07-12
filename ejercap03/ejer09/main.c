#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i = 2, cam = 1;//Con esta linea creamos 2 variable, "i" la cual es igual a 2, y "cam" la cual es igual a 1
long sse = 0;//Con esta linea creamos una variable de tipo entero de largo alcance llamada "sse" y la igualamos a 0
while (i <= 2500)//Con esta linea creamos un bucle, con la condicion de que la variable "i" sea menor o igual a 2500
{
    sse = sse + i;//Con esta linea, indicamos que la variable "sse" sera igual a su valor mas el de la variable "i"
    printf("\t %d", i);//Con esta linea, imprimimos la variable "i" para indicarnos el valor del termino de la susecion en esa vuelta del bucle
    if (cam)//Con esta linea creamos una condicion, en la que la variable "cam" sea verdadera
    {
        i += 5;//Con esta linea indicamos que la a variable "i" se le sumara 5
        cam--;//Con esta linea, indicamos que a la variable "cam" se le restara 1
    }
    else//Con esta linea indicamo lo que se hara en caso de que no se cumpla la condicion del if0
    {
        i += 3;//Con esta linea indicamos que a la variable "i" se le sumara 3
        cam++;//Con esta linea indicamos que a la variable "cam" se le sumara 1
    }
}
printf("\nLa suma de la serie es: %ld", sse);//Con esta linea imprimimos el valor de la variable "sse"
}
