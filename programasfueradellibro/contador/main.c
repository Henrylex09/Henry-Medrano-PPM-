#include <stdio.h>
#include <ctype.h>

int may = 0, min = 0, num = 0;

void main(void)
{
    char cad[100], resp = 'o';
    printf("Bienvenid@ a mi programa\n");
    do
    {
        printf("\nIngrese una cadena de caracteres:\n");
        fflush(stdin);
        gets(cad);
        if(cad[0] != '\0')
        {
            if(cad[100] == '\0')
            {
                printf("\nTu cadena de caracteres es:\n%s\n\nEstas seguro que quieres que se analize esta cadena? <S/N>\n",cad);
                fflush(stdin);
                resp = getchar();
                while((resp != 's' && resp != 'S') && (resp != 'n' && resp != 'N'))
                {
                    if((resp != 's' && resp != 'S') && (resp != 'n' && resp != 'N'))
                    {
                        printf("\nLa respuesta ingresada no ha sido reconocida, por favor, ingrese una respuesta valida. <S/N>\nRecuerda que tu cadena es:\n%s\n", cad);
                        fflush(stdin);
                        resp = getchar();
                    }
                }
            }
            else
                printf("\nTu cadena es muy larga, asegarate que tenga 100 caracteres maximos.");
        }
        else
            printf("Tu cadena no tiene ningun caracter.\n");
    }
    while(resp != 's' && resp != 'S');
    contador(cad);
    printf("\nFelicidades!!!, la cadena fue anaclizada exitosamente.\nEn tu cadena hay %d mayucsculas, %d minucsculas y %d digitos\n",may,min,num);
    }
void contador(char cad0[100])
{
    int i = 0;
    while(cad0[i] != '\0')
        {
            if(isalpha(cad0[i]))
            {
                if(isupper(cad0[i]))
                    may++;
                else
                    if(islower(cad0[i]))
                        min++;
            }
        i++;
        }
    i = 0;
    while(cad0[i] != '\0')
    {
        if(isdigit(cad0[i]))
            num++;
        i++;
    }
}
