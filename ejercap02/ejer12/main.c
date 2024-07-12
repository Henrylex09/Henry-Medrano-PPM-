#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
#include <math.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del math.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int T, P, N;//Con esta linea creamos 3 variables "T" "P" y "N" de tipo entero
    printf("Ingrese los valores de T, P Y N: ");//Con esta linea imprimimos un mensaje indicando que se deben ingresar unos datos
    scanf("%d %d %d", &T, &P, &N);//Con esta linea le indicamos al programa que recibira 3 datos y los guardara en las variables "T" "P" y "N"
    if (P != 0)//Con esta linea creamos una condicion en la que la variable "P" debe ser diferente de 0
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))//Con esta linea creamos una condicion en la que la tetracion del cociente de las variables T y P a la N, debe ser igual a la tetracion de P a la N, en caso de que se cumpla la ccondicion anterior
            printf("\nSe comprueba la igualdad");//Con esta linea imprimimos un mensaje en caso de que la condicion anterioir fuera cumplida
        else//Con esta linea, indicamos lo que se hara en caso de que la condicion no se cumpla
            printf("\nNo se comprobo la igualdad");//Con esta linea se imprime un mensaje
    }
    else//Con esta linea, indicamos lo que se hara en caso de que la primera condicion no se cumpla
        printf("\nP tiene que ser diferente de cero");//Con esta linea se imprime un mensaje
}
