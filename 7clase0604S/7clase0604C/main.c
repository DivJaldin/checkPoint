#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_aLUMNOS 5
int dameEdad(int *edad, char *mensaje);
int dameEdad2 (int *edad, char *mensaje);
int dameEdad3 (int *edad, char *mensaje);

int main()
{
    //MANEJO DE PUNTEROS PASAJE DE DATPOS
    int miEdad;
    int seCargo;
    do
    {
        seCargo = dameEdad3(&miEdad, "\nQue edad tenes?: ");

    }while (seCargo==0);

    printf("\n La edad ingresada es : %d", miEdad);
    //int laEdad;
    /*
    if(dameEdad(&laEdad, "dame la edad : ")==1)
    {
        printf("la edad es : %d", laEdad);
    }else{
    printf("no se pudo");
    }*/
    return 0;

}

int dameEdad (int *edad, char *mensaje)
{
    int sePudo = 0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d", &aux);
    if (sePudo == 1 )
    {
        //*edad == aux;
        *edad = aux;
    }
    return sePudo;
    //if (dameEdad (&laEdad, "dame la edad : "))
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int dameEdad2 (int *edad, char *mensaje)
{
    char cadenaCargada[20];
    int sePudo = 0;
    printf(mensaje);
    sePudo = scanf("%s", cadenaCargada); //guarda en aux o cadena cargada (puntero memoria)
    *edad = atoi(cadenaCargada);

    return sePudo;
    //if (dameEdad (&laEdad, "dame la edad : "))
}


int dameEdad3 (int *edad, char *mensaje)
{
    char cadenaIngresada[20];
    int sePudo = 0;
    int i;
    printf(mensaje);
    sePudo = scanf("%s", cadenaIngresada); //guarda en aux o cadena cargada (puntero memoria)
    *edad = atoi(cadenaIngresada);
    for(i=0;i< strlen (cadenaIngresada);i++)
    {
            if (cadenaIngresada [i]<'0' || cadenaIngresada [i]>'9' && cadenaIngresada [i] != "\n")
            {
                sePudo = 0;
            }

    }    //guarda en aux o cadena cargada (puntero memoria)
    if (sePudo==1)
    {
        *edad=atoi(cadenaIngresada);
    }

    return sePudo;
    //if (dameEdad (&laEdad, "dame la edad : "))
}
