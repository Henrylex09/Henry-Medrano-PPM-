#include <stdio.h>

int a, b, c, d;

int pa1(int, int);

void main(void)
{
a = 2;
c = 3;
d = 5;
a = pa1(c, d);
printf("\n%d %d %d %d", a, b, c, d);
b = 4;
b = pa1(b, a);
printf("\n%d %d %d %d", a, b, c, d);
}

int pa1(int x, int y)
{
int c;
b = x * y;
c = b + y;
x++;
y = y * (y + 1);
printf("\n%d %d %d %d", b, c, x, y);
return(x);
}
