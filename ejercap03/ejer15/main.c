#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa
#include <math.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i = 1, b = 0, c;//Con esta linea, creamos 3 variables de tipo entero, "i", "b" y "c", he indicando que las variables "i" y "b" son iguales a 1 y 0, respectivamente
double res;//Con esta linea, creamos una variable de doble expresion, "res"
res = 4.0 / i;//Con esta linea, indicamos que la variable "res" sera igual al cociente de 4 entre la vriable "i"
c = 1;//Con esta linea indicamos que la variable "c" sera igual a 1
while((fabs (3.1415 - res)) > 0.0005)//Con esta linea, creamos un bucle, con la condicion de que el valor absoludo de 3.1415 menos la variable "res" sera mayor a 0.0005
{
    i += 2;//Con esta linea, indicamos que la variable "i" sera igual a su valor mas 2
    if (b)//Con esta linea, creamos una condicion, en la que la variable "b" debe ser verdadera
    {
        res += (double) (4.0 / i);//Con esta linea, indicamos que la variable "res" sera igual a su valor mas el cociente de 4 entre la variable "i"
        b = 0;//Con esta linea, indicamos que la variable "b" sera igual a 0
    }
    else//Con esta linea indicamos lo que se hara en caso de que la condicion del if no se cumpla
    {
        res -= (double) (4.0 / i);//Con esta linea indicamos que la variable "res" sera igual a su valor  menos el cociente de 4 entre la variable "i"
        b = 1;//Con esta linea indicamos que la variable "b" sera igual a 1
    }
    c++;//Con esta linea, indicamos que a la variable "c" se le sumara 1
}
printf("\nNumero de terminos:%d", c);//Con esta linea, imprimimos el valor de la variable "c"
}
