#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int i = 0;//Con esta linea creamos una variable "i" de tipo entero igual a 0
    float sal, pro, nom = 0;//Con esta linea creamos 3 variables de tipo real, "sal" "pro" y "nom", indicando que esta ultima es igual a 0
    printf("Ingrese el salario del profesor:\t");//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato
    scanf("%f", &sal);//Con esta linea le indicamos al programa que se ingresara un dato, y el mismos se guardara en la variable "sal"
    do//Con esta linea, le indicamos al programa que realizara las ordenes dentro del bucle while y luego analizara la condicion
    {
        nom = nom + sal;//Con esta linea indicamos que la variable "nom" sera igual a su valor mas el de la variable "sal"
        i = i + 1;//Con esta linea indicamos que la variable "i" sera igual a su valor mas 1
        printf("Ingrese el salario del profesor -0 para terminar- :\t");//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato, he indicando que se debe ingresar 0 para terminar el programa
        scanf("%f", &sal);//Con esta linea le indicamos al programa que se ingresara un dato, y el mismos se guardara en la variable "sal"
    }
    while(sal);//Con esta linea indicamos que la condicion del bucle es que la variable "sal" sea difernte de 0
    pro = nom / i;//Con esta linea, indicamos que la variable "pro" sera igual a al cociente de la variable "nom" entre la variable "i"
    printf("\nNomina: %.2f \t Promedio de salario: %.2f", nom, pro);//Con esta linea imprimos el valor de las variables "nom" y "pro"
}
