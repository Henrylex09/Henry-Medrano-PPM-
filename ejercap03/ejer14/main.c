#include <stdio.h>//Con esta linea indicamos que lista de comando se usaran en este programa

void main(void)//Con esta linea se le indica al programa que iniciara aqui y que no arrojara ciertos datos y no tiene parametros
{
int vot, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nu = 0, svo;//Con esta linea creamos 8 variables de tipo entero "vot", "c1", "c2", "c3", "c4", "c5", "nu" y "svo", he indicadno que las variables "c1", "c2", "c3," "c4", "c5" y "nu" son igual a 0
float po1, po2, po3, po4, po5, pon;//Con esta linea creamos 6 variables de tipo real, "po1", "po2", "po3", "po4", "po5" y "pon"
printf("Ingrese el primer voto: ");//Con esta linea, imprimimos un mensaje, indicando que se debe de ingresar un dato
scanf("%d", &vot);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo, se guardara en la variable "vot"
while (vot)//Con esta linea, creamos un bucle, con la condicion de que la variable "vot" sea verdadera
{
    switch(vot)//Con esta linea, indicamos que dependiendo de la variable "vot", se ejecutara un caso u otro
    {
        case 1: c1++; break;//Con esta linea, indicamos que en el caso 1, a la variable "c1" se le sumara 1
        case 2: c2++; break;//Con esta linea, indicamos que en el caso 2, a la variable "c2" se le sumara 1
        case 3: c3++; break;//Con esta linea, indicamos que en el caso 3, a la variable "c3" se le sumara 1
        case 4: c4++; break;//Con esta linea, indicamos que en el caso 4, a la variable "c4" se le sumara 1
        case 5: c5++; break;//Con esta linea, indicamos que en el caso 5, a la variable "c5" se le sumara 1
        default: nu++; break;//Con esta linea, indicamos que en caso de no encontrarse el case a la variable "nu" se le sumara 1
    }
    printf("Ingrese el siguiente voto -0 Para terminar-: ");//Con esta linea, imprimimos un mensaje, indicando que se debe de ingresar un dato, he indicadno que se debe inghresar 0, para terminar el programa
    scanf("%d", &vot);//Con esta linea, le indicamos al programa que se ingresara un dato, y el mismo, se guardara en la variable "vot"
}
svo = c1 + c2 + c3 + c4 + c5 + nu;//Con esta linea, indicamos que la variable "svo" sera igual a la suma de las variables "c1" mas "c2" mas "c3" mas "c4" mas "c5" mas "nu"
po1 = ((float) c1 / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "c1" por la variable "svo", por 100
po2 = ((float) c2 / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "c2" por la variable "svo", por 100
po3 = ((float) c3 / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "c3" por la variable "svo", por 100
po4 = ((float) c4 / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "c4" por la variable "svo", por 100
po5 = ((float) c5 / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "c5" por la variable "svo", por 100
pon = ((float) nu / svo) * 100;//Con esta linea, hacemos que la variable "po1" sea igual al producto, del cociente de la variable "nu" por la variable "svo", por 100
printf("\nTotal de votos: %d", svo);//Con esta linea imprimimos el valor de la variable "svo"
printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", c1, po1);//Con esta linea, imprimimos las variables "c1" y "po1"
printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", c2, po2);//Con esta linea, imprimimos las variables "c2" y "po2"
printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", c3, po3);//Con esta linea, imprimimos las variables "c3" y "po3"
printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", c4, po4);//Con esta linea, imprimimos las variables "c4" y "po4"
printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", c5, po5);//Con esta linea, imprimimos las variables "c5" y "po5"
printf("\nNulo: %d votos -- Porcentaje: %5.2f", nu, pon);//Con esta linea, imprimimos las variables "nu" y "pon"
}
