#include <stdio.h>
#include <stdlib.h>
int dameEdad(int *edad, char *mensaje);


int main()
{
    //MANEJO DE PUNTEROS PASAJE DE DATPOS

    int laEdad;
    if(dameEdad2(&laEdad, "dame la edad : ")==1)
    {
        printf("la edad es : %d", laEdad);
    }else{
    printf("no se pudo");
    }
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
