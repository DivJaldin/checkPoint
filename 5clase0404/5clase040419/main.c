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
               /*
               printf("%d => %d \n", usuario[i], usuario[j]);
               int resultado;
               resultado = strcmp("hola", "hola");
               printf("\n iguales: %d, resultado");
               resultado = strcmp("Hola", "hola");
               printf("\n primera :%d ", resultado);
               resultado = strcmo("hola","Hola");
               printf("\n segunda :%d ", resultado);
               resultado = strcmp("hola", "hola");
               printf("\n la A: %d, resultado");
               resultado = strcmp("Hola", "hola");
               printf("\n a-b :%d ", resultado);
               resultado = strcmo("hola","Hola");
               printf("\n b-a :%d ", resultado);
               resultado = strcmp(usuario[i], usuario[j])
                */


               /*
                if(strcmp(usuario[i] < usuario[j])
               {
                   int aux = usuario [i];
                   usuario[i] = usuario [j];
                   usuario[j] = aux;

                   char auxString [10];
                   strcpy(auxString, usuario [i]);
                   strcpy(usuario[i], usuario[j]);
                   strcpy(usuario[j], auxString);

               }
               */
           }
       }
    //ORDENAMIENTO POR NOTA
    /*
    for (i=0;i<5;i++)
       {
           for(j=0;j<4;j++)
           {
               printf("%d => %d \n", nota[i], nota[j]);
               if(nota[i] < nota[j])
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
       */

    for(i=0;i<5;i++)
    {
        printf("Alumno: %s  \n                    Promedio: %d\n--------------------------------- \n", usuario[i], nota[i]);
    }
        //INICIALIZACION DE ARRAYS EN PARALELO
/*
    for(i=0;i<5;i++)
    {
        //usuario[i][0]=" ";
        //ordenar array la nota y el usuario
        // usuario [i] [0] ="" esto no se puede hacer, solamente para inicializacion o cuando #define

        strcpy(usuario[i], " ");
        //nota[i]=0;
    }
    strcpy(usuario[0], "hola");
    printf("test %s \n", usuario[0]);
    printf("test %s \n", usuario[1]);
*/
//NOTAS
// CARGA SECUENCIAL DE ARRAYS EN PARALELO
/*
    for(i=0;i<5;i++)
        {
            printf("ingrese usuario# %d: ", i+1);
           // scanf ("%s", usuario [i]);
            gets(usuario[i]);
            printf("ingrese nota# %d: ", i+1);
            scanf ("%s", &nota [i]);

        }
        */

/*
    printf("ingrese usuario: ");
    scanf ("%s", usuario [0]);//scaneo el string con %s
    //scanf ("%s", usuario [0][0]); de esta forma se pasa una funcion de memoria de array de arrays
    printf("ingrese usuario: ");
    scanf ("%s", usuario [1]);
*/
    /*int tamano = strlen(usuario [9]);
    printf("tamaño : %d \n", tamano);

*/
    /*
    printf("Hello %s\n", usuario[0]);
    printf("Hello %s\n", usuario[1]);
    printf("Hello %s\n", usuario[2]);

    */return 0;
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
