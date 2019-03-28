#include <stdio.h>
#include <stdlib.h>

int esUnNumero (char *cadena)
{
    printf("\npalabra por parametros: %s", cadena);
    int indice = 0;
    int retorno = 0;
    while (cadena [indice] != '\0');
    {
        if(cadena [indice]<'0' || cadena [indice]>'9')
        {
            break;
        }else{
            indice++;
        }
        if(cadena [indice] =='\0')
        {
            retorno =1;
        }
        return retorno;
    }
}

int main()
{
    char letra;
    char palabra [10];
    int numero;
    int es;
    printf("Ingrese una palabra\n");

    scanf(" %s", &palabra);
    fflush(stdin);
    printf("\n palabra: %s", palabra);

    es=esUnNumero(palabra);
    if (es==1)
    {
        printf("es correcto");

    }else{
    printf("no lo es");
    }
    /*
    int indice = 0;

    while (indice<20)
    //while (palabra [indice]<10)
    {
        if (palabra [indice] == '\0')
        {
            printf("\nEl barra cero esta en: %d", indice);
        }

        printf("\n letra %c", palabra [indice]);
        indice ++;
    }
    return 0;
    */
    /*
    scanf("\n %d", &numero);
    fflush(stdin);
    printf("numero %d", numero);

    scanf("\n %c", &letra);
    fflush(stdin);
    printf("letra %d", letra);
    scanf("\n %s", &letra);
    fflush(stdin);
    printf("\nletra %d", letra);
    */

}
