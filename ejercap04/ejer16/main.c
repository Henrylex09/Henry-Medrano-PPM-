#include <stdio.h>

void acutem(float);
void maxima(float, int);
void minima(float, int);

float act = 0.0;
float max = -50.0;
float min = 60.0;
int hmax;
int hmin;

void main(void)
{
float tem;
int i;
for(i=1; i <= 24; i++)
{
    printf("Ingresa la temperatura de la hora %d ", i);
    scanf("%f", &tem);
    acutem(tem);
    maxima(tem, i);
    minima(tem, i);
}
printf("\nPromedio del dia: %5.2f", (act / 24));
printf("\nMaxima del dia: %5.2f \tHora: %d", max, hmax);
printf("\nMinima del dia: %5.2f \tHora: %d", min, hmin);
}

void acutem(float t)
{
    act += t;
}
void maxima(float t, int h)
{
if(max < t)
{
    max = t;
    hmax = h;
}
}

void minima(float t, int h)
{
if(min > t)
{
    min = t;
    hmin = h;
}
}
