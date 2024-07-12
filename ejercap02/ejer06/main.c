#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float sal;//Con esta linea creamos una variable de tipo real llamada sal
    int niv;//Con esta linea creamos una variable de tipo intero llamada niv
    printf("Ingrese el nivel acadmico del profesor: ");//Con esta linea imprimimos un mensaje indicando que se ingrese un dato
    scanf("%d", &niv);//Con esta linea indicamos al programa que recibira un dato y lo guardara en la variable "niv"
    printf("Ingrese el salario: ");//Con esta linea imprimimos un mensaje en pantalla indicando que se ingrese un valo
    scanf("%f", &sal);//Con esta linea indicamos al programa que recibira un dato y lo guardara en la variable sal
    switch(niv)//Con esta linea indicamos al programa que dependiendo del valor de la variable "niv" realizara un caso u otro.
    {
        case 1: sal = sal * 1.0035; break;//con esta linea indicamos al programa que verifique si niv es igual a 1, de ser asi, la variable sal sera igual a sal * 1.0035, y luego salga del comando switch
        case 2: sal = sal * 1.0041; break;//con esta linea indicamos al programa que verifique si niv es igual a 2, de ser asi, la variable sal sera igual a sal * 1.0041, y luego salga del comando switch
        case 3: sal = sal * 1.0048; break;//con esta linea indicamos al programa que verifique si niv es igual a 3, de ser asi, la variable sal sera igual a sal * 1.0048, y luego salga del comando switch
        case 4: sal = sal * 1.0053; break;//con esta linea indicamos al programa que verifique si niv es igual a 4, de ser asi, la variable sal sera igual a sal * 1.0053, y luego salga del comando switch
    }
    printf("\nNivel: %d \tNuevo salario> %8.2f", niv, sal);//Con esta linea imprimimos las variables "niv" y "sal" con un salto de linea eh, indicando que solo se imprimiran los 2 primeros decimales de la parte decimal del numero real
}
