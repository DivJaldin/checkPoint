#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3


int getPrecio (char *mensaje, float *elPrecio);
int getCodigo(char *mensaje, char *codigo);

int main()
{
    float precios [TAM];
    char codigos [TAM] [7];
    //CHAR CODIGO [7] [TAM];
    int i;
    //int respuesta;

    for(i=0; i<TAM; i++)
    {
        //respuesta = getPrecio ("ingrese precio, por fa", &precios [i]));

        while(getPrecio ("ingrese precio, por fa\n", &precios [i])==0)
        {
            printf("error...");
        }
        while(getCodigo ("ingrese precio, por fa\n", codigos [i])==0)
        {
            printf("error...");
        }

    }

     for (i=0; i<TAM;i++)
    {
        printf("codigo:%s precio: %f \n", codigos [i],precios[i]);
    }
    /*for (i=0; i<TAM;i++)
    {
        printf("precio %f \n", precios [i]);
    }*/


    printf("de array a estructuras \n");
    return 0;
}
int getCodigo(char *mensaje,char *codigo)
{
    char ingreso[50];
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    if( strlen(ingreso)==6)
    {
        strcpy(codigo,ingreso);
        retorno=1;
    }
    return retorno;

}
int getPrecio (char *mensaje, float *elPrecio)
{
    int retorno =0;
    char ingreso[50];
    float auxPrecio;
    printf (mensaje);
    scanf("%s", ingreso);
    auxPrecio = atof (ingreso);
    if (auxPrecio>0)
    {
        *elPrecio = auxPrecio;
        retorno = 1;

    }
return retorno;
}

