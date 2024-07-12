#include <stdio.h>

int mad(int);

void main(void)
{
int num, res;
printf("\nIngrese el numero: ");
scanf("%d", &num);
res = mad(num);
printf("\nEl mayor divisor de %d es: %d", num, res);
}

int mad(int n1)
{
int i = (n1 / 2);
while (n1 % i)
    i--;
return(i);
}
