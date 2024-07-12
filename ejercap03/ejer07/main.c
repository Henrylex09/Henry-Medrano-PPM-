#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i, n;//Con esta linea creamos 2 variables de tipo entero "i" y "n"
float lan, sla = 0;//Con esta linea, creamos 2 variables de tipo real "lan" y "sla"
do//Con esta linea, le indicamos al programa que realizara las ordenes dentro del bucle while y luego analizara la condicion
{
    printf("Ingrese el numero de lanzamiento:\t");//Con esta linea, imprimimos un mensaje, indicando que se debe de ingresar un dato
    scanf("%d", &n);//Con esta linea, se le indica al programa que se introducira un dato, y el mismos se guardara en la variable "n"
}
while (n < 1 || n > 11);//Con esta linea, creamos un bucle, con la condicion logica de que la variable "n" es menor a 1, o, la variable "n" es vayor a 11
for (i=1; i<n; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor a la variable "n", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
{
    printf("\nIngrese el lanzamiento %d: ", i);//Con esta linea, imprimimos un mensaje, indicando que se debe de ingresar un dato
    scanf("%f", &lan);//Con esta linea, se le indica al programa que se introducira un dato, y el mismos se guardara en la variable "lan"
    sla = sla + lan;//Con esta linea indicamos que la variable "sla", sera igual a su vlor mas la variable "lan"
}
sla = sla / n;//Con esta linea indicamos que la variable "sla" sera igual al cociente de su valor entre el de la variable "n"
printf("\nEl promedio de lanzamiento es: %.2f", sla);//Con esta linea imprimimos el valor de la variable "sla"
}
