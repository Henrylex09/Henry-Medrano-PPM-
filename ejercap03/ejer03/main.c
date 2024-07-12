#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main (void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float pag, spa;//Con esta linea creamos 2 variables de tipo real, "pag" y "spa"
    spa = 0;//Con esta linea indicamos que la variable "spa" es igual a 0
    printf("Ingrese el primer pago: \t");//Con esta linea imprimimos un mensaje con el que indicamos que se debe ingresar un dato
    scanf("%f", &pag);//Con esta linea indicamos al programa que se introducira un dato, y el mismo se guarda en la variable "pag"
    while(pag)//Con esta linea creamos un bucle, el cual se repetira siempre que la variable "pag" sea sea distinto de 0
    {
        spa = spa + pag;//Con esta linea indicamos que la variable "spa" sera igual a su valor mas el valor de la variable "pag"
        printf("Ingrese el siguiebte pago:\t ");//Con esta linea imprimimos un mensaje, con el que se indica que se debe ingresar un dato
        scanf("%f", &pag);//Con esta linea indicamos al programa que se introducira un dato, y el mismo se guardara en la variable "pag"
    }
    printf("\nEl total de pagos del mes es: %.2f", spa);//Con esta linea imprimimos el valor de la variable "spa"
}
