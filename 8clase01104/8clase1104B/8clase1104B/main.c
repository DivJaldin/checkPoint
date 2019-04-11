#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4
void listar (char *nombres, char *apellido, int notas[], int edades [], int tam);
void getString (char mensaje [], char input []);
int getStringLetras (char mensaje[], char input []);
int getStringNumeros(char mensaje[], char input[]);
int esSoloLetras(char str[]);

int main()
{
    char nombres [CANTIDAD_ALUMNOS] [50] = {"alfredo","Rogelio","Julieta","Pablo"};
    char apellidos [CANTIDAD_ALUMNOS] [50] = {"Mercurio","Agua","Roberto","McCartney"};
    int notas [CANTIDAD_ALUMNOS] = {2,4,7,10};
    int edades [CANTIDAD_ALUMNOS] = {2,4,7,10};
    int i ;

    char unNombre [50];

    getString("\n\ningrese nombre : ",&unNombre);

    strcpy(nombres[0], unNombre);

    for (i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        getString("\n\nIngrese nombre: ", nombres[i]);
    }
    for (i=0; i < CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\n nombre %s  apellido: %s", nombres [i], apellidos [i], notas [i], edades [i]);
        }
    }
}

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

