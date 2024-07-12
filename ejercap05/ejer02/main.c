#include <stdio.h>

void main(void)
{
int ele[5] = {0};
int i, vot;
printf("Ingresa el primer voto (0 - para terminar): ");
scanf("%d", &vot);
while (vot)
{
    if((vot > 0) && (vot < 6))
        ele[vot-1]++;
    else
        printf("\nEl voto ingresado es incorrecto.\n");
    printf("Ingresa el siguiente voto (0 - para terminar): ");
    scanf("%d", &vot);
}
printf("\n\nResultados de la eleccon\n");
for(i = 0; i <= 4; i++)
    printf("\nCandidato %d: %d", i+1, ele[i]);
}
