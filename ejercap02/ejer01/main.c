#include <stdio.h> //Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
void main(void)

{
    float PRO;//Con esta linea creamos una variable de tipo real llamada "PRO"
    printf("Ingrese el promedio del alumno: ");//Con esta linea indicamos que se hara una imprecion en la pantalla
    scanf("%f", &PRO);//Con esta linea le indicamos al programa que se va ingresar un dato desde el teclado a la hora de ejecutar y dicho dato se va a guardar en la variable "PRO"
    if (PRO >= 6)//Con esta linea activamos el comando "if" con el que podemos cambiar el flujo del programa evaluando una condicion; En este programa la condicion es que la variable PRO sea mayor o igual a 6
        printf("\nAprobado");//Con esta linea mandamos a imprimri un mensaje empantalla si la condicion if se cumpple
}
