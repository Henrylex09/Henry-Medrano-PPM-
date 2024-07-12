#include <stdio.h>

void f1(int *);

void main(void)
{
int i, k = 4;
for (i=1; i <= 3; i++)
{
    printf("\n\nValor de K antes de llamar a la funcion: %d", ++k);
    printf("\nValor de K despues de llamar a la funcion: %d", f1(int *k));
}
}
void f1(int *r)
{
*r += *r;
}
