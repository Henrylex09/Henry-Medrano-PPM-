#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main (void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float pag, spa = 0;//Con esta linea creamos 2 variables de tipo flotante "pag" y "spa"
    printf("Ingrese el primer pago:\t ");//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato
    scanf("%f", &pag);//Con esta linea le indicamos al programa que se introducira un dato, y el mismo se guardara en la variable "pag"
    do//Con esta linea, le indicamos al programa que realizara las ordenes dentro del bucle while y luego analizara la condicion
{
    spa = spa + pag;//Con esta linea indicamos que la variable "spa" sera igual a su valor mas el valor de la variable "pag"
    printf("Ingrese el siguiente pago -0 para terminar- :\t ");//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato, he indicando que se debe ingresar 0 para terminar el programa
    scanf("%f", &pag);//Con esta linea nindicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "pag"
}
while(pag);//Con esta linea indicamos que la condicion del bucle es que la variable "pag" sea difernte de 0
printf("\nEl total de pagos del mes es: %.2f", spa);//Con esta linea imprimimos la variable "spa"
}
