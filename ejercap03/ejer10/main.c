#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa
#include <math.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int i, n, num, spa = 0, sim = 0, cim = 0;//Con esta linea creamos 6 variables de tipo entero "i", "n", "num","spa" "sim" y "cim" indicando que son iguales a 0 estas ultimas 3
printf("Ingrese el numero el numero de datos que se van a procesar:\t");//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato
scanf("%d", &n);//Con esta linea se le indica al programa que se introducira un dato, y el mismo se guardara en la variable "n"
if (n > 0)//Con esta linea, creamos una condicion, en la que la varible "n" debe de ser mayor a 0 para que se cumpla
{
    for (i=1; i <= n; i++)//Con esta linea creamos un bucle con "i" como variable de conteo, y la condicion logica es que mientras la variable "i" sea menor a la variable "n", se ejecutara el bucle, y al final de cada vuelta del bucle se le sumara 1 a la variable "i"
    {
        printf("\nIngrese el numero %d: ", i);//Con esta linea imprimimos un mensaje, indicando que se debe de ingresar un dato
        scanf("%d", &num);//Con esta linea se le indica al programa que se introducira un dato, y el mismo se guardara en la variable "num"
        if (num)//Con esta linea, creamos una condicion, en la que la variable "num" sea verdadera para que se cumpla
            if (pow(-1, num) > 0)//Con esta linea, creamos una condicion, con la que evaluamos si la variable "num" es par para que se cumpla
                spa = spa + num;//Con esta linea, indicamos que la variable "spa", sera iguala su valor mas el valor de la variable "num"
            else//Con esta linea, indicamos lo que se hara en caso de que la conmdicion del if no se cumnpla
            {
                sim = sim + num;//Con esta linea, indicamos que la variable "sim" sera igual a su valor, mas el valor de la variable "num"
                cim++;//Con esta linea, indicamos que a la variable "cim", se le sumara 1
            }
    }
    printf("\n La suma de los numeros pares es : %d", spa);//Con esta linea, imprimimos el valor de la variable "spa"
    printf("\n El promedio de numeros impares es: %5.2f", (float)(sim / cim));//Con esta linea, imprimimos el valor convertido en real del cociente de las variables "sim" entre la variable "cim"
}
else//Con esta linea, imprimimos el valor de la variable "spa"
    printf("\n El valor de N es incorrecto");//Con esta linea, imprimimos un mensaje, indicando que hay un error, en el valor introducido
}
