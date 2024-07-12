#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int mat, car, sem;//Con esta linea creamos 3 variables "mat" "car" y "sem" de tipo entero
    float pro;//Con esta linea creamos una variable "pro" de tipo real
    printf("Ingrese matricula: ");//Con esta linea imprimimos un mensage indicando que se ingrese un valor
    scanf("%d", &mat);//Con esta linea le indicamos al programa que recibir un dato y lo guardara en la variable mat
    printf("Ingrese carrera(1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");//Con esta linea imprimimos un mensage indicando que se ingrese un valor y dando a conocer las opciones que se tienen
    scanf("%d", &car);//Con esta linea le indicamos al programa que recibir un dato y lo guardara en la variable cat
    printf("Ingrese semestre: ");//Con esta linea imprimimos un mensage indicando que se ingrese un valor
    scanf("%d", &sem);//Con esta linea le indicamos al programa que recibir un dato y lo guardara en la variable sem
    printf("Ingrese promedio: ");//Con esta linea imprimimos un mensage indicando que se ingrese un valor
    scanf("%f", &pro);//Con esta linea le indicamos al programa que recibir un dato y lo guardara en la variable pro
    switch(car)//Con esta linea indicamos al programa que dependiendo del valor de la variable "car" realizara un caso u otro.
    {
    case 1: if (sem >= 6 && pro >= 8.5)//Con esta linea indicamos que en caso de ejecutarse este case, se creara un if con la condicion de que la variable sem sea mayor o igual a 6 y la variable pro sea mayor o igual a 8.5
            printf("\n%d %d %5.2f", mat, car, pro);//Con esta linea imprimimos las variables "mat" "car y "pro"
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
    case 2: if (sem >= 5 && pro >= 9.0)//Con esta linea indicamos que en caso de ejecutarse este case, se creara un if con la condicion de que la variable sem sea mayor o igual a 5 y la variable pro sea mayor o igual a 9.0
            printf("\n%d %d %5.2f", mat, car, pro);//Con esta linea imprimimos las variables "mat" "car y "pro"
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
    case 3: if (sem >= 6 && pro >= 8.8)//Con esta linea indicamos que en caso de ejecutarse este case, se creara un if con la condicion de que la variable sem sea mayor o igual a 6 y la variable pro sea mayor o igual a 8.8
            printf("\n%d %d %5.2f", mat, car, pro);//Con esta linea imprimimos las variables "mat" "car y "pro"
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
    case 4: if (sem >= 7 && pro >= 9.0)//Con esta linea indicamos que en caso de ejecutarse este case, se creara un if con la condicion de que la variable sem sea mayor o igual a 7 y la variable pro sea mayor o igual a 9.0
            printf("\n%d %d %5.2f", mat, car, pro);//Con esta linea imprimimos las variables "mat" "car y "pro"
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
     default: printf("\n Error en la carrera");//Con esta linea indicamos que en caso de ejecutarse este case, se imprima un mensaje indicando que hay un error en los datos introducidos
        break;//Con esta linea decimos que de haberse ejecutado este caso el programa salga del comando switch
        }
}
