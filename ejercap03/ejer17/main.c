#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i, j, num, sum, c = 0;//Con esta linea creamos 5 variables de tipo entero, "i", "j", "num", "sum" y "c", he indicando que la variable "c", es igual a 0
printf("\nIngrese el numero limite: ");//Con esta linea, imprimimos un mensaje, indicando que se debe de ingresar un dato
scanf("%d", &num);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "num"
for(i=1; i <= num; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a la variable "num", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
{
    sum = 0;//Con esta linea, indicamos que la variable "sum" sera igual a 0
    for (j=1; j <= (i / 2); j++)//Con esta linea creamos un bucle con "j" como variable de conteo, y la condicion logica es que mientras la variable "j" sea menor o igual a la mitad de la variable "i", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "j"
    {
        if ((i % j) == 0)//Con esta linea creamos una condicion, en la que el residuo de las variables "i" y "j" debe ser igual 0, para que se cumpla
            sum += j;//Con esta linea, indicamos que la variable "sum" sera igual a la suma de su valor mas el de la variable "j"
    }
    if (sum == i)//Con esta linea, creamos una condicion, en la que la variable "sum" debe ser iguala la variable "i" para que se cumpla
    {
        printf("\n%d es un numero perfecto", i);//Con esta linea imprimimos el valor de la variable "i"
        c++;//Con esta linea indicamos que a la variable "c" se le sumara 1
    }
}
printf("\nEntre 1 y %d hay %d numeros perfeectos", num, c);//Con esta linea, que se imprimiran las cariables "num" y "c"
}
