#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int CLA, TIE;//Con esta linea creamos 2 variables "CLA" y "TIE" de tipo entero
    float COS;//Con esta linea creamos una variable "COS" de tipo flotante
    printf("Ingresa la clave y el tiempo> ");//Con esta linea imprimimos un mensaje indicando que se deben ingresar 2 datos
    scanf("%d %d", &CLA, &TIE);//Con esta linea le indicamos al programa que recibira 2 datos y los guardara en las variables "CLA" y "TIE"
    switch(CLA)//Con esta linea indicamos al programa que dependiendo del valor de la variable "CLA" realizara un caso u otro.
    {
        case 1: COS = TIE * 0.13 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.13 y dividida entre 60
        case 2: COS = TIE * 0.11 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.11 y dividida entre 60
        case 5: COS = TIE * 0.22 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.22 y dividida entre 60
        case 6: COS = TIE * 0.19 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.19 y dividida entre 60
        case 7://Con esta linea le indicamos al programa que si este es el caso que se ejecutara, se realizara la accion del siguiente case hasta llegar a un break
        case 9: COS = TIE * 0.17 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.17 y dividida entre 60
        case 10: COS = TIE * 0.20 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.20 y dividida entre 60
        case 15: COS = TIE * 0.39 / 60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.39 y dividida entre 60
        case 20: COS = TIE * 0.28 /60; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "TIE" multiplicada por 0.28 y dividida entre 60
        default : COS = -1; break;//Con esta linea le indicamos al programa que en caso de no encontrar un case que corresponda a la variable  "CLA" hara que la variable "COS" sera igual a -1
    }
    if (COS != -1)//Con esta linea creamos una condicion con la que la variable "COS" debe ser diferente de -1
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);//Con esta linea imprimos las variales "CLA" "TIE" y "COS" en caso de que la condicion anterioir se cumpla
    else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
        printf("\nError en la clase");//Con esta linea imprimimos un mensaje en pantalla
}
