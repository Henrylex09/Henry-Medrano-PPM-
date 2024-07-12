#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa
#include <math.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int num;//Con esta linea, creamos una variable de ttipo entero "num"
printf("Ingresa el numero para calcular la serie: ");//Con esta linea, imprimimos un mensaje indicando que se debe ingresar un dato
scanf("%d", &num);//Con esta linea, le indicamos al programa que se introducira un dato, y se guardara en la variable "num"
if (num > 0)//Con esta linea creamos una condicion, en la que la variable "num" sea mayor a 0 para que se cumpla
{
    printf("\nSerie de ULAM\n");//Con esta linea, imprimimos un mensaje
    printf("%d \t", num);//Con esta linea imprimimos el valor de la variable "num"
    while (num != 1)//Con esta linea, creamos un bucle, con la condicion de que la variable "num" debe ser diferente de 1 para que se cumpla
    {
        if (pow(-1, num) > 0)//Con esta linea creamos una condicion, evaluando si la variable "num" es par para que se cumpla
            num = num / 2;//Con esta linea, indicamos que la variable "num", sera igual al cociente de su valor entre 2
        else//Con esta linea indicamos lo que se hara en caso de que no se cumpla la condicion del if
            num = num * 3 + 1;//Con esta linea indicamos que la variable "num" sera igual a la suma del producto de su valor por 3, mas 1
        printf("%d \t", num);//Con esta linea imprimimos el valor de la variable "num"
    }
}
else//Con esta linea indicamos lo que se hara en caso de que no se cumpla la condicion del if
    printf("\n Num debe ser un entero positivo");//Con esta linea, imprimimos un mensaje indicando que hubo un error en con el valor introducido
}
