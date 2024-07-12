#include <stdio.h>
#include <ctype.h>

void cambio(char ora1[100]);

void main(void)
{
    char oracion0[100], respuesta0 = 'n';
    int p, i;
    printf("Bienvenid@ a mi programa\n");
    printf("\nAqui podras ingresar una cadena de caracteres (De no mas de 100 elementos), y el programa te devolvera la misma cadena,\npero con las mayusculas y minusculas invertidas.\nDebe tener en cuenta, que debe elegir caracteres el abecedario estadounidense \n\n");
    do
    {
        i = 0;
        printf("\nIngresa tu cadena de caracteres: \n\n");
        fflush(stdin);
        gets(oracion0);
        if(oracion0[i] != '\0')
        {
            if(oracion0[100] == '\0')
            {
                printf("\n\nMuy bien, tu cadena de caracteres es:\n%s",oracion0);
                printf("\n\nEstas seguro de haberla ingresado de forma correcta? <S/N>\n");
                fflush(stdin);
                scanf("%c", &respuesta0);
                while((respuesta0 != 's' && respuesta0 != 'S') && (respuesta0 != 'n' && respuesta0 != 'N'))
                {
                    if((respuesta0 != 's' && respuesta0 != 'S') && (respuesta0 != 'n' && respuesta0 != 'N'))
                    {
                        printf("\nLa respuesta ingresada no ha sido reconocida, por favor, ingrese una respuesta valida. <S/N>\nRecuerda que tu cadena es:\n%s\n", oracion0);
                        fflush(stdin);
                        respuesta0 = getchar();
                    }
                }
            }
            else
            {
                printf("\n\nLa cadena ingresada es muy larga, asegurese de que tenga 100 elementos maximos");
                i = strlen(oracion0);
                printf("\n\nla longitud de la cadena es %d",i);
            }

        }
        else
            printf("\nDebe ingresar al menos un caracter");
    }
    while((respuesta0 != 's') && (respuesta0 != 'S'));
    cambio(oracion0);
}
void cambio(char ora1[100])
{
    int i = 0;
    while(ora1[i] != '\0')
    {
        if(isalpha(ora1[i]))
        {
            if(islower(ora1[i]))
                ora1[i] = toupper(ora1[i]);
            else
                if(isupper(ora1[i]))
                ora1[i] = tolower(ora1[i]);
        }
        i++;
    }
    printf("\nLa cadena resultante, con las mayusculas y minusculas invertidas es:\n%s\n", ora1);
}
