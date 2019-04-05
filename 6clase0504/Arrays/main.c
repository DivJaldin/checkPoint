#include <stdio.h>
#include <stdlib.h>
#include "BIBLIO.h"
#define TAM 5

//int const LARGO = 5;
int main()
{
    int miArray[TAM]={ };
    int indice;
    //int valor = 9;
    // printf("%d--%d",miArray, &miArray);
    //printf("Direccion del array %d\n",miArray);

    cargarArray(miArray,TAM);
    mostrarArray(miArray,TAM);
    indice=buscarValor(miArray, TAM, 5);

    if(indice!=-1)
    {
        printf("\nEl indice es %d", indice);

    }else
    {
        printf("\nValor inexistente!!");
    }


    return 0;
}
