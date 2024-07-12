#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa
#include <math.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int num;//Con esta linea crwamos una variable de tipo entero llamada "num"
    long cua, suc = 0;//Con esta linea creamos 2 variables de tipo entero de largo alcance, "cua" y "suc", indicando que esta ultima es igual a 0
    printf("\nIngrese un numero entero -0 para terminar-:\t");//Con esta linea imprimimos un mensaje, con el que indicamos que se debe ingresar un dato, y se india que se debe ingresar el 0, para terminar el programa
    scanf("%d", &num);//Con esta linea indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "num"
    while (num)//Con esta linea creamos un bucle, el cual se repetira mientra la variable "num" sea diferente de 0
    {
        cua = pow (num, 2);//Con esta linea indicamos que la variable "cua" sera igual al cuadrado de la variable "num"
        printf("%d al cuadrado es %ld", num, cua);//Con esta linea imprimimos el valor de las variable "num" y "cua"
        suc = suc + cua;//Con esta linea, indicamos que la variable "suc", sera igual a su valor mas el valor de la variable "cua"
        printf("\nIngrese un numero entero -0 para terminar-:\t");//Con esta linea imprimimos un mensaje, con el que indicamos que se debe ingresar un dato, y se india que se debe ingresar el 0, para terminar el programa
        scanf("%d", &num);//Con esta linea indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "num"
    }
    printf("\nLa suma de los cuadrados es %ld", suc);//Con esta linea imprimimos la el valor de la variable "suc"
}
