#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    int TRA, EDA, DIA;//Con esta linea creamos 3 variables "TRA" "EDA" y "DIA" de tipo entero
    float COS;//Con esta linea creamos una variable "COS" de tipo real
    printf("Ingrese tipo de tratamiento, edad y dias: ");//Con esta linea imprimimos un mensaje que indica que se deben ingresar 3 datos
    scanf("%d %d %d", &TRA, &EDA, &DIA);//Con esta linea le indicamos al programa que recibira 3 datos y los guardara en las variables "TRA" "EDA" y "DIA"
    switch(TRA)//Con esta linea indicamos al programa que dependiendo del valor de la variable "TRA" realizara un caso u otro.
    {
        case 1: COS = DIA * 2800; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "DIA" multiplicada por 2800
        case 2: COS = DIA *1950; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "DIA" multiplicada por 1950
        case 3: COS = DIA * 2500; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "DIA" multiplicada por 2500
        case 4: COS = DIA * 1150; break;//Con esta linea le indicamos al programa que si este es el caso que se ejecutara la variable "COS" sera igual a la variable "DIA" multiplicada por 1150
        default: COS = -1; break;//Con esta linea le indicamos al programa que en caso de no encontrar un case que corresponda a la variable  "TRA" hara que la variable "COS" sera igual a -1
   }
   if (COS != -1)//Con esta linea creamos una condicion en la que la variable "COS" debe ser diferente a -1
   {
       if (EDA >= 60)//Con esta linea creamos una condicion en la que la variable "EDA" debe ser mayor o igual a 60, esta condicion depende de la condicion anterior
        COS = COS * 0.75;//Con esta linea indicamos que la variable "COS" sera igual a su valor incial multiplicado por 0.75
       else//Com esta linea indicamos lo que se hara en caso de que la condicion no se cumpla
        if (EDA<= 25)//Con esta linea creamos una condicion en la que la variable "EDA" debe ser mayor o igual a 25
        COS = COS * 0.85;//Con esta linea indicamos que la variable "COS" sera igual a su valor inicial multiplicado por 0.85 si se cumple la condicion anterior
       printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);//Con esta linea imprimimos las variables "TRA" "DIA" y "COS"
   }
   else//Com esta linea indicamos lo que se hara en caso de que la primera condicion no se cumpla
    printf("\nLa clave del tratamiento es incorrecta");//Con esta linea imprimimos un mensaje
}
