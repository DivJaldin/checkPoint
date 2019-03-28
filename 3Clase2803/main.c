#include <stdio.h>
#include <stdlib.h>
#incluide Biblioteca.c
#incluide Header.h


int main()
{


    int miDato = 333;

    cambiarValor (miDato);
    printf("Mi dato es: %d", &miDato);

    cambiarValor(miDato);
    printf("\n Mi Dato es: %d", miDato);

    int edad;
    int retorno =0;

    do{
        printf("Ingrese una edad: ");
        fflush(stdin);
        retorno = scanf(" %d", edad);

    }while (retorno ==0);

    int dato;
    int dato1;
    int dato2;

    dato = dividir (6);
    printf("El dato : %d", dato);
    dato = dividir (0);
    printf ("\n El fato es dato: %d", dato);

    int unFactorial;

    unFactorial = factorial (4);
    printf("\El factorial es : %d", unfactorial);

    return 0;

}
