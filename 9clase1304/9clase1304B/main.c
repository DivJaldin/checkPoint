#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3
typedef struct{
    float precios ;
    char codigos[7];
}Producto;

typedef struct{
    float precios;
    char codigos [7];
}Codigo;

typedef struct{
    float precios;
    char codigos [7];
}Region;

typedef struct{
    float precios;
    char codigos [7];
}ArrayDeProductos;


int getPrecio(char *mensaje,float *elPrecio);
int getCodigo(char *mensaje,char *codigo);





/** \brief
 * vamos aadministrar los productos de un comercio
 * cod 6 caracteres
 *  precio

 * \return int
 *
 *
 */
int main()
{

    float precios[TAMANIO] ;
    char codigos[TAMANIO][7];
    //char codigos[7][TAMANIO];
    Producto unProducto;

    /////////////
    Producto Categoria;
    Producto Region;
    Producto ArrayDeProductos [TAMANIO];

    int i;
    int j;
    while(getPrecio(">>>> Ingrese precio  , por fa!!!\n",&unProducto.precios)==0){
        printf("error ...");
       }
    while(getCodigo(">>>> Ingrese Codigo  , por fa!!!\n",unProducto.codigos)==0){
        printf("error ...");
       }
    printf("codigo:%s precio: %f \n",unProducto.codigos,unProducto.precios);

     for(i=0;i<TAMANIO;i++)
    {
       while(getPrecio(">>Z>>Ingrese precio  , por fa!!!\n",&precios[i])==0){
        printf("error ...");
       }


        while(getCodigo(">>Z>>Ingrese Codigo  , por fa!!!\n",codigos[i])==0){
        printf("error ...");
       }

    }

    printf("\n      PROCESANDO .....   \n");
    for(i=0;i<TAMANIO;i++)
    {
        printf("\ncodigo:%s precio: %f \n",codigos[i],precios[i]);
    }

    for(i=0;i<TAMANIO -1 ;i++)
    {
        for(j=i +1 ;j<TAMANIO;j++)
        {
            if(ArrayDeProductos[i].precios<ArrayDeProductos[j].precios)
            {
                Producto aux=ArrayDeProductos[i];
                ArrayDeProductos[i]=ArrayDeProductos[j];
                ArrayDeProductos[j]=  aux;

                //char auxCo[7];
                //strcpy(auxCo,codigos[i]);
                //strcpy(codigos[i],codigos[j]);
                //strcpy(codigos[j],auxCo);
                //CREAR ESTRUCTURA ALUMNO CON

            }
        }

    }

    /*
    /// PROTOTIPO LO SIGUIENTE
    for(i=0;i<TAMANIO -1 ;i++)
    {
        for(j=i +1 ;j<TAMANIO;j++)
        {
            if(ArrayDeProductos[i].codigos<ArrayDeProductos[j].codigos)
            {
                Producto aux=ArrayDeProductos[i];
                ArrayDeProductos[i]=ArrayDeProductos[j];
                ArrayDeProductos[j]=  aux;


            }
        }
    */

    printf("\n      ACA TENGO TU ORDENADO \n");
    for(i=0;i<TAMANIO;i++)
    {
        printf("\n codigo:%s precio: %f \n",codigos[i],precios[i]);
    }
    printf("\n De array a estruturas \n");
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
int getPrecio(char *mensaje,float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    auxPrecio=atof(ingreso);
    if(auxPrecio>0)
    {
      *elPrecio  = auxPrecio;
      retorno= 1;
    }
    return retorno;

}
