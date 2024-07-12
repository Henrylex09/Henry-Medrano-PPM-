#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h
#include <math.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del math.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int OP, T;//Con esta linea creamos una variable de tipo entero llamadas "OP" y "T"
    float RES;//Con esta linea creamos una variable de tipo real llamada "RES"
    printf("Ingrese la opcion del calculo y el valor entero: ");//Con esta linea imprimimos un mensajes para indicar que se iingresen unos datos
    scanf("%d %d", &OP, &T);//Con esta linea damos la opcion de introducir 2 datos y guardarlos en las variables "OP" y "T"
    switch(OP)//Con esta linea indicamos al programa que dependiendo del valor de la variable "OP" realizara un caso u otro.
    {
    case 1://con esta linea indicamos al programa que verifique si OP es igual a 1
        RES = T / 5;//Con esta linea indicamos la accion que se tomara en caso de que OP sea igual a 1
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
    case 2: RES = pow(T,T);//con esta linea indicamos al programa que verifique si OP es igual a 2, de ser el caso ejecute la orden del caso
        break;//Con esta linea decimos que de haberse ejecutado este casos el programa salga del comando switch
    case 3://con esta linea indicamos al programa que verifique si OP es igual a 3
    case 4: RES = 6 * T/2;//con esta linea indicamos al programa que verifique si OP es igual a 4, de ser el caso ejecute la orden del caso 3 y 4
       break;//Con esta linea decimos que de haberse ejecutado estos casos el programa salga del comando switch
    default: RES = 1;//Con esta linea indicamos que de no encontrarse ningun caso seleccionado se ejecute esta orden
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
    }
    printf("\nResultado:    %7.2f", RES);//Con esta linea imprimimos la variable "RES" teniendo en cuanta que solo imprimira los 2 primeros decimales en la prte decimal del numero
}
