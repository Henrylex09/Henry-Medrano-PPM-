#include <stdio.h>
#include <string.h>

void main(void)
{
char cad1[50], cad2[50], *cad0[50] = {""};
int i = 0;
printf("\n Ingresela primera cadena de caracteres: ");
gets(cad1);
printf("\n Ingrese la cadena a buscar: ");
gets(cad2);
strcpy(cad0, cad1);
strstr(cad0, cad2);
printf("la cadena cad0 es: %s", cad0);
while(cad0 != NULL)
{
    i++;
    strstr(cad0 + 1, cad2);
}
printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);
}
