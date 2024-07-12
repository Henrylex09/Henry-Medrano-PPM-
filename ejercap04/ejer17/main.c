#include <stdio.h>

void mayor(float, float, float);

void main(void)
{
int i;
float gol, pac, car, agol = 0, apac = 0, acar = 0;
for(i = 1; i <= 12; i++)
{
    printf("\n\nIngresa las lluvias del mes %d", i);
    printf("\nRegiones Golfo, Pacifico y Caribe: ");
    scanf("%f %f %f", &gol, &pac, &car);
    agol += gol;
    apac += pac;
    acar += car;
}
printf("\n\nPromedio de lluvias Region Golfo: %6.2f", (agol / 12));
printf("\nPromedio de lluvias Region Pacifico: %6.2f", (apac / 12));
printf("\nPromedio de lluvias Region Caribe: %6.2f", (acar / 12));
mayor(agol, apac, acar);
}

void mayor(float r1, float r2, float r3)
{
if (r1 > r2)
    if (r1 > r3)
        printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2f", r1/ 12);
    else
        printf("\nRegion con mayor promedio: Region Caribe. Promedio %6.2f", r3 / 12);
else
    if(r2 > r3)
        printf("\nRegion con mayor promedio: Region Pacifico. Promedio %6.2f", r2 / 12);
    else
        printf("\nRegion con mayor promedio: Region Caribe. Promedio %6.2f", r3 / 12);

}
