#include <stdio.h>

void f1 (void);
int k = 5;
void main(void)
{
int i;
for (i=1; i <= 3; i++)
    f1();
}
void f1 (void)
{
int g = 2;
g += g;
printf("\n\nEl valor de la variable local es : %d", g);
k = k+g;
printf("\nEl valor de la variable global es: %d", k);
}
