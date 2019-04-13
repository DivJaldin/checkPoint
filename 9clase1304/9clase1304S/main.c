#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

int main()
{
    float precios [TAM];
    char codigos [TAM] [7];
    //CHAR CODIGO [7] [TAM];
    int i;
    int respuesta;

    for(i=0; i<TAM; i++)
    {
        //respuesta = getPrecio ("ingrese precio, por fa", &precios [i]));

        while(getPrecio ("ingrese precio, por fa\n", &precios [i])==0)
        {
            printf("error...");
        }
         while(getCodigo ("ingrese codigo, por fa\n", &codigo [i])==0)
        {
            printf("error...");
        }

    }
;    for (i=0; i<TAM;i++)
    {
        printf("precio %f \n", precios [i]);
    }
    printf("de array a estructuras \n");
    return 0;
}
getPrecio (char *mensaje, float *elPrecio)
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
/*
getCodigo(char *mensaje, float *elPrecio)
{
    int ingreso [50]
    int retorno =0;
    printf (mensaje);
    scanf("%s", ingreso);
    if (strlen (ingreso) ==7;)
    {
        retorno=1;
    }
    auxPrecio = atof (ingreso);
    if (auxPrecio>0)
    {
        *elPrecio = auxPrecio;
        retorno = i;

    }
return retorno;
}
*/
