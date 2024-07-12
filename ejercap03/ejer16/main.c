#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i, mat, mamat, memat;//Con esta linea, creamos 4 variables de tipo entero, "i", "mat", "mamat" y "memat"
float sum, pro, cal, mapro = 0.0, mepro = 11.0;//Con esta linea, creamos 5 variables de tipo real, "sum", "pro", "mapro", "cal" y "mepro", eh indicando que las variables "mapro" y "mepro" son igual a 0 y 11, respectivamente
printf("Ingrese la matricula del primer alumno:\t");//Con esta linea imprimimos un mensaje, indicando que se debe ingresar un dato
scanf("%d", &mat);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "mat"
while(mat)//Con esta linea, creamos un bucle, con la condicion de que la variable "mat", sea verdader
{
    sum = 0;//Con esta linea, indicamos que la variable "sum" sera igual a 0
    for (i = 1; i <= 5; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor o igual a 5, se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
    {
        printf("\tIngrese la calificacion del alumno; ", i);//Con esta linea imprimimos un mensaje, indicando que se debe ingresar un dato
        scanf("%f", &cal);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "cal"
        sum += cal;//Con esta linea, indicamos que la variable "sum", sera igual a la suma de su valor mas el de la variable "cal"
    }
    pro = sum / 5;//Con esta linea, indicamos que la variable "pro" es igual al cociente de la variable "sum" entre 5
    printf("\nMatricula:%d\tPromedo:%5.2f", mat, pro);//Con esta linea imprimimos las variables "mat" y "pro"
    if (pro > mapro)//Con esta linea, creamos una condicion logica, la cual es que la variable "pro", sea mayor a la variable "mapro"
    {
        mapro = pro;//Con esta linea, indicamos que la variable "mapro" sera igual a la variable "pro"
        mamat = mat;//Con esta linea, indicamos que la variable "mamat" sera igual a la variable "mat"
    }
    if (pro < mepro)//Con esta linea, creamos una condicion, en la que la variable "pro" debe ser menor a la variable "mepro", para que nse cumpla
    {
        mepro = pro;//Con esta linea, indicamos que la variable "mepro" sera igual a la variable "pro"
        memat = mat;//Con esta linea, indicamos que la variable "memat" sera igual a la variable "mat"
    }
    printf("\n\nIngrese la matricula del siguiente alumno: ");//Con esta linea, imprimimos un mensaje indicando que se debe ingresar un dato
    scanf("%d", &mat);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo se guardara en la variable "mat"
}
printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", mamat, mapro);//Con esta linea, imprimimos las variables "mamat" y "mapro"
printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", memat, mepro);//Con esta linea, imprimimos las variables "memat" y "mepro"
}
