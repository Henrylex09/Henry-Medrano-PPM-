#include <stdio.h>

const int max = 10;

void lectura(int vec[], int t);
void imprime(int vec[], int t);
void producto(int *x, int *y, int *z, int t);

void main(void)
{
int ve1[max], ve2[max], ve3[max];
lectura(ve1, max);
lectura(ve2, max);
producto(ve1, ve2, ve3, max);
printf("\nProducto de los vectores");
imprime(ve3, max);
}

void lectura(int vec[], int t)
{
int i;
printf("\n");
for(i=0; i < t; i++)
{
    printf("Ingrese el elemento %d: ", i+1);
    scanf("%d", &vec[i]);
}
}

void imprime(int vec[], int t)
{
int i;
for(i=0; i<t; i++)
printf("\nVec[%d]: %d", i+1, vec[i]);
}

void producto(int *x, int *y, int *z, int t)
{
int i;
for(i=0; i<t; i++)
    z[i] = x[i] * y[i];
}
