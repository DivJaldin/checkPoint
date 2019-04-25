#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
   char codigoDeBarra [ 13 ];
   char nombre [ 50 ];
   char fechaDeVencimiento [ 50 ];

   float precio;
   char proveedor [ 50 ];

}eProducto;

eProducto pedirProducto();

//void mostraProducto(eProducto);
void cargarArray(int,eProducto[]);
void mostrarArray(int,eProducto[]);
//void mostrarProducto(eProducto unProducto);
/*
void mostrarProducto(eProducto);

void construirArray (int tam, eProducto )
*/
#endif // PRODUCTO_H_INCLUDED
int insertProducto (eProducto, eProducto[]);
int dameLugarLibre (eProducto[]);
int existeProducto (eProducto, eProducto[]);
int borrarProducto (eProducto, eProducto[]);
int editarProcucto (eProducto, eProducto[]);
