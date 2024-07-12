#include <stdio.h>//Con esta linea se le dice a CodeBlocks que trabajara con los comandos del estudio.h

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
    float p, s, r;//Con esta linea creamos 3 variables de tipo entero "p" "s" y "r"
    printf("\nIngrese las ventas de los 3 vendedores: ");//Con esta linea imprimimos un mensaje indicando que se ingresen 3 datos
    scanf("%f %f %f", &p, &s, &r);//Con esta linea indicamos al programa que recibira 3 dato y los guardara en las variables "p" "s" y "r" respectivamente
    if (p > s)//Con esta linea creamos una condicion en la que la variable p sea mayor a la variable s
        if(p > r)//Con esta linea creamos una condicion dentro del primer if, en la que la variable p es mayor a la variable r, este if depende que de que el anterior se cumpla
            if(s > r)//Con esta linea creamos una condicion dentro del 2 if, en la que la variable s es mayor a la variable r, este if depende de que se cumplan los 2 anteriores
                printf("\n\n El orden es p, s y r: %8.2f %8.2f %8.2f", p, s, r);//Con esta linea imprimimos las variables "p" "s" y "r" en ese mismo orden con solo 2 de sus deciamles con 2 saltos de linea, este printf depende de que se cumplan los 3 if
            else//Con esta linea indicamos lo que se hara en caso de que no se cumpla el if, dentro de los otros 2 if
                printf("\n\n El orden es p, r y s: %8.2f %8.2f %8.2f", p, r, s);//Con esta linia imprimimos las variables "p" "r" y "s" en ese mismo orden con solo 2 de sus decimales
        else//Con esta linea indicamos lo que se hara en caso de que no se cumpla el segundo if
            printf("\n\n El orden es r, p y s: %8.2f %8.2f %8.2f", r, p, s);//Con esta linea imprimimos las cariables "r" "p" y "s" en ese mismo orden con solo 2 de sus decimales
    else//Con esta linea indicamos lo que se hara en caso de que no se cumpla el primer if
      if (s > r)//Con esta linea creamos una condicion en lan que la variable "s" debe ser mayor a "r"
        if (p > r)//Con esta linea creamos una condicionn dentro del primer if, en la que la variable "p" es mayor a la variable "r", este if depende de que el anterior se cumpla
             printf("\n\n El orden es s, p y r: %8.2f %8.2f %8.2f", s, p, r);//Con esta linea imprimimos las variables "s" "p" y "r" en ese mismo ordn con solo 2 de sus decimales, este printf depende de que se cumplan los 2 if
      else//Con esta linea indicamos lo se hara en caso de que no se cumpla el segundo if
             printf("\n\n El orden es s, r y p: %8.2f %8.2f %8.2f", s, r, p);//Con esta linea imprimiremos las variables "s" "r" y "p" en ese mismo orden con solo 2 de sus decimales y un salto de linea
    else//Con esta linea indicamos lo que se hara en caso de que no se cumpla el primer if
       printf("\n\n El orden es r, s y p: %8.2f %8.2f %8.2f", r, s, p);//Con esta linea imprimiremos las variables "r" "s" y "p" en ese mismo orden con solo 2 de sus deciamles y un salto de linea
}
