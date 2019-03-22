#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    char palabra [5];
    /*char opcion [6] ;
    char cont [6];*/
    ////////////////////////
   /* do
    {*/
    ////////////////////////////
        printf("\t Hola \n\n >Ingrese un numero: ");
        scanf("%d", &numero);

        fflush(stdin);

        printf(" >Ingrese una letra: ");
        scanf("%c", &letra);

        fflush(stdin);

        printf(" >Ingrese una palabra: ");
        scanf("%s", palabra);

        printf("\nEl numero es: %d, la letra es: %c y la palabra es: %s \n", numero, letra, palabra);

///////////////////////////////////
/*
        printf(" >Continuar o Finalizar ? ");
        fflush(stdin);
        scanf("%s", opcion);
    } while (opcion == cont);
/////////////////////////////////////*/


    system("pause");

    return 0;
}
