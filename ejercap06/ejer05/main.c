#include <stdio.h>

const int max = 50;
const int exa = 4;

void lectura(float[max][exa], int);
void funcion1(float[max][exa], int);
void funcion2(float[max][exa], int);

void main(void)
{
int nal;
float alu[max][exa];
do
{
    printf("Ingrese el numero de alumnos del grupo: ");
    scanf("%d", &nal);
}
while(nal > max || nal < 1);
lectura(alu, nal);
funcion1(alu, nal);
funcion2(alu, nal);
}

void lectura(float a[][exa], int n)
{
int i, j;
for(i=0; i<n; i++)
    for(j=0; j<exa; j++)
    {
        printf("Ingrese la calificacion %d del alumno %d: ", j+1, i+1);
        scanf("%f", &a[i][j]);
    }
}

void funcion1(float a[][exa], int t)
{
int i, j;
float sum, pro;
for(i=0; i<t; i++)
{
    sum = 0;
    for(j=0; j<exa; j++)
        sum += a[i][j];
    pro = sum / exa;
    printf("\nEl promedio del alumno %d es: %5.2f", i+1, pro);
}
}

void funcion2(float a[][exa], int t)
{
int i, j, may;
float sum, pro, mpro = 0;
printf("\n");
for(j=0; j<exa; j++)
{
    sum = 0;
    for(i=0; i<t; i++)
        sum += a[i][j];
    pro = sum / t;
    if(pro > mpro)
    {
        mpro = pro;
        may = j;
    }
    printf("\nEl promedio del examen %d es: %f", j+1, pro);
}
printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2", may+1, mpro);
}
