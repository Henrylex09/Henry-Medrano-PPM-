#include <stdio.h>

void lectura(int *, int);
void imprime(int *, int);
void elimina(int *, int);

void main(void)
{
int tam, arre[100];
do
{
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &tam);
}
while (tam > 100 || tam < 1);
lectura(arre, tam);
elimin(arre, &tam);
imprime(arre, tam);
}
 void lectura(int a[], int t)
 {
     printf("\n");
     int i;
     for(i=0; i<t; i++)
     {
         printf("Ingrese el elemento %d: ", i+1);
         scanf("%d", &a[i]);
     }
 }

void imprime(int a[], int t)
{
int i;
for (i=0; i<t; i++)
    printf("\nA[%d]: %d", i, a[i]);
}

void elimin(int a[], int *t)
{
int i = 0, k, l;
while (i < (*t-1))
{
    k = i + 1;
    while (k <= (*t-1))
    {
        if (a[i] == a[k])
        {
            for(l = k; l < (*t-1); l++)
                a[l] = a[l+1];
            *t = *t - 1;
        }
        else
            k++;
    }
    i++;
}
}
