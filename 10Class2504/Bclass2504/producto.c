#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"

#define TAM 5

void mostrarArray (int tam, eProducto listado[])
{
    int i;
    for (i=0; i < tam ; i++)
    {
        // error pensar mostrar el array a traves de listado[i]
        mostrarProducto(listado[i]);
    }
}

void cargarArray (int tam, eProducto listado[])
{
    int i;
    for (i=0; i<tam; i++)
    {
        listado[i] = pedirProducto();
    }
}

int insertProducto (eProducto, eProducto[]);
int dameLugarLibre (eProducto[]);
int existeProducto (eProducto, eProducto[]);
int borrarProducto (eProducto, eProducto[]);
int editarProcucto (eProducto, eProducto[]);

void construirArray (int tam, eProducto listado[])
{
    int i;
    for (i=0; i < tam ; i++)
    {

        listado[i].estado = 0;
        strcpy(listado[i].nombre,"");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaDeVencimiento,"");
        strcpy(listado[i].proveedor,"");


    }
}

int insertProducto(eProducto elProducto, eProducto listado[])
{

    int indice;
    indice = dameLugarLibre(listado);
    if (indice!=1)
    {
        listado [indice] = elProducto;
    }
    return indice;

}
int borrarProducto(eProducto elProducto, eProducto listado[])
{

    int indice;
    indice = existeProducto(elProducto.listado);
    if (indice!=1)
    {
        listado [indice] = elProducto;
    }
    return indice;

}

eProducto pedirProducto()
{
        eProducto productoParaRetornar;
        printf("Ingrese codigo de barra: ");
        gets(productoParaRetornar.codigoDeBarra);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(productoParaRetornar.nombre);

        printf("Ingrese fecha de vencimiento: ");
        fflush(stdin);
        gets(productoParaRetornar.fechaDeVencimiento);

        printf("Ingrese precio: ");
        fflush(stdin);
        scanf("%f", &productoParaRetornar.precio);

        printf("Ingrese proveedor: ");
        fflush(stdin);
        gets(productoParaRetornar.proveedor);

        return productoParaRetornar;
}

void mostrarProducto(eProducto elParametroProducto)
{
    printf("\n\n <<<TABLA DE STOCK>>>");
    printf("\n\n <<<--------------------->>>");
    printf("\n Codigo \\_______________ %s", elParametroProducto.codigoDeBarra);
    printf("\n Nombre \\_______________ %s", elParametroProducto.nombre);
    printf("\n Proveedor \\____________ %s", elParametroProducto.proveedor);
    printf("\n Fecha de Vencimiento \\_ %s", elParametroProducto.fechaDeVencimiento);

}
