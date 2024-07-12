#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int CLA, CAT, ANT, RES;//Con esta linea creamos 4 variables "CLA" "CAT" "ANT" y "RES" d tipo entero
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");//Con ests linea imprime un mensaje indicando que se debe introducir un dato
    scanf("%d %d %d", &CLA, &CAT, &ANT);//Con esta linea le indicamos al programa que se introduciran 3 datos y se guardaran en las variables "CLA" "CAT" y "ANT"
    switch(CAT)//Con esta linea le indicamos al pograma que dependindo de la variablre "CAT", realizara un caso u otro
    {
    case 3://Con esta linea le indicamos al programa que si este es el caso que se ejecutara, se realizara la accion del siguiente case hasta llegar a un break
    case 4: if (ANT >= 5)//Con esta linea le indicamos que en caso de ejecutarse este case, se crecara una condiicion en la que la variable "ANT" sea mayor o igual a 5
                (RES = 1);//Con esta linea, indicamos que la variable "RES" sera igual a 1, en caso de que la condicion anterioir se cumpla
            else//Con esta linea indicamos lo que se hara en caso de que no se cumpla la ondicion
                 RES = 0;//Con esta linea hacemos que la variable "RES" sea igual a 0
            break;//Con esta lines, le decimos al programa que salga del comando switch
    case 2: if (ANT >= 7)//Con esta linea le indicamos que en caso de que se ejecute este case, se creara una condicion en la que la variable "ANT" sea mayor o igaul a 7
                     RES = 1;//Con esta linea indicamos que la variable "RES" sera igual a 1, en caso de que se cumpla la condicion anterior
            else//Con esta linea indicamos lo que se hara en caso de que no se cumpla la ondicion
                        RES = 0;//Con esta linea hacemos que la variable "RES" sea igual a 0
            break;//Con esta lines, le decimos al programa que salga del comando switch
    default: RES = 0;//Con esta linea le indicamos al programa que en caso de que no encuentre ningun case que se asocie a la variable "CAT" la variable "RES" sera iigual a 0
            break;//Con esta lines, le decimos al programa que salga del comando switch
    }
    if (RES)//Con esta linea estamos creando una condicion en la que la variable "RES" sea verdadera o igual a 1
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA);//Con esta linea estamos imprimiendo la varible "CLA" si se cumple la condicion anterior
    else//Con esta linea indicamos lo que se hara en caso de que no se cumpla la ondicion
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLA);//Con esta linea estamos imprimiendo la variable "CLA"
}
