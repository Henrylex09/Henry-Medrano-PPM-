#include <stdio.h>
#include <string.h>

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
}ubicacion;

typedef struct
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
}propiedades;

void lectura(propiedades *, int);
void f1(propiedades *, int);
void f2(propiedades *, int);

void main(void)
{
propiedades propie[100];
int tam;
do
{
    printf("Ingrese el numero de propiedades: ");
    scanf("%d", &tam);
}
while(tam > 100 || tam < 1);
lectura(propie, tam);
f1(propie, tam);
f2(propie, tam);
}

void lectura(propiedades a[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        printf("\n\tIngrese datos de la propiedad %d", i+1);
        printf("\nClave: ");
        fflush(stdin);
        gets(a[i].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &a[i].scu);
        printf("Superficie terreno: ");
        scanf("%f", &a[i].ste);
        printf("Caracteristicas: ");
        fflush(stdin);
        gets(a[i].car);
        printf("\tZona: ");
        fflush(stdin);
        gets(a[i].ubi.zona);
        printf("\tCalle: ");
        fflush(stdin);
        gets(a[i].ubi.calle);
        printf("\tColonia: ");
        fflush(stdin);
        gets(a[i].ubi.colo);
        printf("Precio: ");
        scanf("%f", &a[i].precio);
        fflush(stdin);
        printf("Disponibilidades (Venta-V Renta-R): ");
        scanf("%c", &a[i].dispo);
    }
}

void f1(propiedades a[], int t)
{
    int i;
    printf("\n\t\tListado de Propiedades para Ventas en Miraflores");
    for(i=0; i<t; i++)
        if((a[i].precio >= 450000) && (a[i].precio <= 650000))
        {
            printf("\nClave de la propiedad: ");
            puts(a[i].clave);
            printf("\nSuperficie cubierta: %f", a[i].scu);
            printf("\nSuperficie terreno: %f", a[i].ste);
            printf("\nCaracteristicas: ");
            puts(a[i].car);
            printf("Calle: ");
            puts(a[i].ubi.calle);
            printf("colonia: ");
            puts(a[i].ubi.colo);
            printf("Precio: %.2f\n", a[i].precio);
        }
}

void f2(propiedades a[], int t)
{
    int i;
    float li, ls;
    char zon[20];
    printf("\n\t\tListado de Propiedades para Renta");
    printf("\nIngrese zona geografica: ");
    fflush(stdin);
    gets(zon);
    printf("Ingrese el limite inferior del precio: ");
    scanf("%f", &li);
    printf("Ingrese el limite superior del precio:");
    scanf("%f", &ls);
    for(i=0; i<t; i++)
        if((a[i].dispo == 'R') && (strcmp(a[i].ubi.zona, zon) == 0))
            if((a[i].precio >= li) && (a[i].precio <= ls))
            {
                printf("\nClave de la propiedad: ");
                puts(a[i].clave);
                printf("\nSuperficie cubierta: %f", a[i].scu);
                printf("\nSuperficie terreno: %f", a[i].ste);
                printf("\nCaracteristicas: ");
                puts(a[i].car);
                printf("Calle: ");
                puts(a[i].ubi.calle);
                printf("Colonia: ");
                puts(a[i].ubi.colo);
                printf("Precio: %.2f", a[i].precio);
            }
}
