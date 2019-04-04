#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ARRAYS//UNION NO FISICA NI LOGICA, SINO EN LA SEMANTICA DEL CODIGO.
//UTILISAREMOS STRING "UNA CADENA DE CARACTERES" A PARTIR DE UNA PALABRAS, NUESTROS VECTORES O ARRAYS TIENEN LA PARTICULARIDAD
//DE GUARDAR MULTIPLES DATOS EN UN MISMO PUNTO QUE TIENEN UN VALOR ESPECIFICO A PARTIR DEL 0, APUNTA A LA
//DIRECCION DE MEMORIA
void mostrarVector(int datos[], int tamanio);

void mostrarPalabras(int datos[], int tamanio);

void ordenarPalabras(int datos[], int tamanio);
int main()
{
    char usuario[][10] = {"Laura","Carlos","Mica","Carlitox","Jose"};//lo que hace es multiplicar, esto es utilizado como un todo
    //nuestro array se comportara como un string, **se tomo como 1 solo dato...una sola palabra
    int nota [10]={8,5,2,10,3};//puntero,**con 10 datos...10palabras
    int i;
    int j;
    // USUARIOS
    mostrarVector(nota, 5);
    cargarVector(nota, 5);
    mostrarVector(nota, 5);
    for(i=0;i<5;i++)
    {
        printf("Alumno: %s  \n                    Promedio: %d\n--------------------------------- \n", usuario[i], nota[i]);
    }

     for (i=0;i<5;i++)
    {
           for(j=0;j<4;j++)
           {
               if(strcmp(usuario[i] , usuario[j])==1)
               {
                   int aux = nota [i];
                   nota[i] = nota [j];
                   nota[j] = aux;


                   char auxString [10];
                   strcpy(auxString, usuario [i]);
                   strcpy(usuario[i], usuario[j]);
                   strcpy(usuario[j], auxString);

               }
            }
    }

    for(i=0;i<5;i++)
    {
        printf("Alumno: %s  \n                    Promedio: %d\n--------------------------------- \n", usuario[i], nota[i]);
    }
     return 0;
}

void mostrarVector(int datos[], int tamanio)
{
    int i;
    for (i=0; i < tamanio; i++)
    {
        printf("nota:%d \n", dato[i]);

    }
}
void cargarVector(int datos[], int tamanio)
{
    int i;
    for (i=0; i < tamanio; i++)
    {
        dato[i] =-1;

    }
}
