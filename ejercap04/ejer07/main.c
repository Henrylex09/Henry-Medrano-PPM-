#include<stdio.h>

int f1(int);

void main(void)
{
int i, k = 4;
for (i=1; i <= 3; i++)
{
    printf("\n\nValor de k antes de llamr a la funcion: %d", ++k);
    printf("\nValor de k despues de llamr a la funcion: %d", f1(k));

}
}
int f1(int r)
{
r += r;
return(r);
}
