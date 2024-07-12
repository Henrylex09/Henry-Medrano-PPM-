#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main (void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int i;//Con esta linea crwamos una variable de tipo entero llamada "i"
    float sal, nom;//Con esta linea creamos 2 variebles de tipo real "sal" y nom"
    nom = 0;//Con esta linea le damos a la variable "nom" el valor de 0
    for(i=1; i<=15; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a 15, se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
    {
        printf("\Ingrese el salario del profesor%d:\t", i);//Con esta linea imprimimos un mensaje indicando que hay que ingresar un valor
        scanf("%f", &sal);//Con esta linea indicamos que se va a ingredar un dato, y el mismo se guardara en la variable "sal"
        nom = nom + sal;//Con esta linea indicamos que la variable "nom" sera igual a el valor que tenga mas el valor de la variable "sal"
    }
    printf("\nEl total de la nomina es : %.2f", nom);//Con esta linea imprimimos la variable "nom"
}
