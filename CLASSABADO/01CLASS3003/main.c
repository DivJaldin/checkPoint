#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    //TESTEO DE DIVIDIR EN MAIN
    int sePudo;
    float respuesta;
    int primerEdad;
    int segundaEdad;

    /*sePudo = dividir (55, 2, &respuesta);*/

    /*while */(pedirEdad(&primerEdad));
    /*while */(pedirEdad(&segundaEdad));

    //con el siguiente solamente voy a poder validar por 0 y 1 el funcionamiento de la division

    //sePudo = dividir (pedirEdad(&primerEdad), pedirEdad(&segundaEdad), &respuesta);

    sePudo = dividir (primerEdad, segundaEdad, &respuesta);


    if (sePudo == 1)
    {
        printf("La respuesta es %.2f", respuesta);
    }else
    {
        printf("no se puede");
    }
    /*
    int miEdad;
    while (pedirEdad(&miEdad) == 0)
    {
        printf("ERROR\n");
    }
    printf("su edad es %d", miEdad);
    */
    //////////////////////////////////////
    /*
    if(pedirEdad (&miEdad) == 1)
    {
        printf("su edad es %d, miEdad);
    }
    else
    {
    printf("no se pudo");
    }
    */
    /*
    first
    verSiAnda();
    int Sueldo;
    print sueldo;
    printf("\n lugar sueldo %d", &sueldo);
    suledo = 1000;
    cambiarValor(sueldo);
    printf("\n por valor: %d", sueldo);
    cambiarReferencia(&sueldo);
    printf("\n por referencia: %d", sueldo);
    */
    return 0;

}
