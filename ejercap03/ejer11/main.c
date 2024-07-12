#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;//Con esta linea creamos 5 variables enteras, "r1", "r2", "r3", "r4" y "r5"
float cal;//Con esta linea creamos una variable de tipo real "cal"
printf("Ingresa la calificacion el alumno: ");//Con esta linea, imprimimos un mensaje indicando que se debe de ingresar un dato
scanf("%f", &cal);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "cal"
while (cal != -1)//Con esta linea, creamos un bucle, con la condicion de que la variable "cal" sea diferente de 1, para que se ejecute
{
    if (cal < 4)//Con esta linea, creamos una condicion, en la que la variable "cal" sea menor a 4 para que se cumpla
        r1++;//Con esta linea, indicamos que a la variable "r1" se le sumara 1
    else//Con esta linea indicamos ,lo que se hara en caso de que nose cumpla la condicion del if
        if (cal < 6)//Con esta linea, creamos una condicion, en la que la variable "cal" sea menor a 6 para que se cumpla
            r2++;//Con esta linea, indicamos que a la variable "r2" se le sumara 1
        else//Con esta linea indicamos ,lo que se hara en caso de que nose cumpla la condicion del if
            if (cal < 8)//Con esta linea, creamos una condicion, en la que la variable "cal" sea menor a 8 para que se cumpla
                r3++;//Con esta linea, indicamos que a la variable "r3" se le sumara 1
            else//Con esta linea indicamos ,lo que se hara en caso de que nose cumpla la condicion del if
                if(cal < 9)//Con esta linea, creamos una condicion, en la que la variable "cal" sea menor a 9 para que se cumpla
                    r4++;//Con esta linea, indicamos que a la variable "r4" se le sumara 1
                else//Con esta linea indicamos ,lo que se hara en caso de que nose cumpla la condicion del if
                    r5++;//Con esta linea, indicamos que a la variable "r5" se le sumara 1
    printf("Ingrese la calificacion del alumno: ");//Con esta linea, imprimimos un mensaje indicando que se debe de ingresar un dato
    scanf("%f", &cal);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "cal"
}
printf("\n0..3.99 = %d", r1);//Con esta linea, se imprimira la variable r1
printf("\n4..5.99 = %d", r2);//Con esta linea, se imprimira la variable r2
printf("\n6..7.99 = %d", r3);//Con esta linea, se imprimira la variable r3
printf("\n8..8.99 = %d", r4);//Con esta linea, se imprimira la variable r4
printf("\n9..10 = %d", r5);//Con esta linea, se imprimira la variable r5
}
