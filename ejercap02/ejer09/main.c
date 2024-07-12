#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
#include <math.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del math.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float RES;//Con esta linea creamos una variable de tipo flotante llamada "RES"
    int R, T, Q;//Con esta linea creamos 3 variables de tipo entero "R" "T" Y "Q"
    printf("Ingrese los valores de R, T y Q: ");//Con esta linea imprimimos un mensaje indicando que se deben introducir 3 datos
    scanf("%d %d %d", &R, &T, &Q);//Con esta linea le indicamos al programa que recibir 3 datos y los guardara en las variables "R" "T" "Q"
    RES  = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);//Con esta linea indicamos que la variable "RES" sera igual a "R tetracado a la 4" menos "T tetracado a la 3" mas "4 por Q tetracado 2"
    if(RES < 820//Con esta linea creamos una condicion con la que la variable RES debe ser menor a 820
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);//Con esta linea imprimimos las variables "R" "T" y "Q"
}
