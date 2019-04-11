#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_ALUMNOS 4
void listar (char *nombres, char *apellido, int notas[], int edades [], int tam);
void getString (char mensaje [], char input []);
int getStringLetras (char mensaje[]), char input []);
int getStringNumeros(char mensaje[], char input[]);

int main()
{
    char nombres [CANTIDAD_ALUMNOS] [50] = {"alfredo","Rogelio","Julieta","Pablo"};
    char apellidos [CANTIDAD_ALUMNOS] [50] = {"Mercurio","Agua","Roberto","McCartney"};
    int notas [CANTIDAD_ALUMNOS] = {2,4,7,10};
    int edades [CANTIDAD_ALUMNOS] = {2,4,7,10};
    int i ;

    for (i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\n nombre %s  apellido: %s", nombres [i], apellidos [i], notas [i], edades [i]);
        }
    }
}
