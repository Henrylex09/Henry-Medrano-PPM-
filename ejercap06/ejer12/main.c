#include <stdio.h>

const int pro = 24;
const int mes = 12;
const int ano = 10;

void lectura(float [pro][mes][ano], int, int, int);
void funcion1(float[pro][mes][ano], int, int, int);
void funcion2(float[pro][mes][ano], int, int, int);
void funcion3(float[pro][mes][ano], int, int, int);

void main(void)
{
float llu[pro][mes][ano];
lectura(llu, pro, mes, ano);
funcion1(llu, pro, mes, ano);
funcion2(llu, pro, mes, ano);
funcion3(llu, 18, mes, 5);
}

void lectura(float a[][mes][ano], int f, int c, int p)
{
int k, i, j;
for(k=0; k<p; k++)
    for(i=0; i<f; i++)
        for(j=0; j<c; j++)
        {
            printf("Ano: %d\tProvincia: %d\tMes: %d", k+1, i+1, j+1);
            scanf("%f", &a[i][j][k]);
        }
}

void funcion1(float a[][mes][ano], int f, int c, int p)
{
int i, k, j, emay = -1;
float ellu = -1.0, sum;
for(i=0; i<f; i++)
{
    sum = 0.0;
    for(k=0; k<p; k++)
        for(j=0; j<c; j++)
            sum += a[i][j][k];
    sum /= p * c;
    if(sum > ellu)
    {
        ellu = sum;
        emay = i;
    }
}
printf("\n\nProvincias con mayor registro de lluvias: %d", emay+1);
printf
("\nRegistro: %.2f", ellu);
}

void funcion2(float a[][mes][ano], int f, int c, int p)
{
int i, j, emen;
float ellu = 1000, sum;
for(i=0; i<f; i++)
{
    sum = 0;
    for(j=0; j<c; j++)
        sum += a[i][j][p-1];
    sum /= c;
    if(sum < ellu)
    {
        ellu = sum;
        emen = i;
    }
}
printf("\n\nProvincia con menor registro anual de lluvias en el ultimo ano: %d", emen+1);
printf("\nRegistro anual: %.2f", ellu);
}

void funcion3(float a[][mes][ano], int f, int c, int p)
{
int j, emes = -1;
float ellu = -1.0;
for(j=0; j<c; j++)
{
    if(a[f-1][j][p-1] > ellu)
    {
        ellu = a[f-1][j][p-1];
        emes = j;
    }
}
printf("\n\nMes: %d Lluvia: %.2f", emes+1, ellu);
}
