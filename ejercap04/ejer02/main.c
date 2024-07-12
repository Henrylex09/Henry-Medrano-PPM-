#include <stdio.h>

int cubo(void);
int i;

void main(void)
{
int cub;
for (i=1; i <= 10; i++)
{
    printf("\nEl cubo de %d es : %d", i, cub);
    cub = cubo();
}
}
int cubo(void)
{
int i = 2;
return(i * i * i);
}
