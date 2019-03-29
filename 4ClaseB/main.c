#include <stdio.h>
#include <stdlib.h>


int pedirOpcionMenu (char[]);

int main()
{
    int opcion; //podria ser del tipo char entero
    char seguir = 's';

    do
    {
        //listado de opciones
        //opcion = pedirOpcionMenu();
        opcion = pedirOpcionMenu ("- - TABLA DE OPCIONES - -\n\n>1. Alta\n>2. Baja\n>3. Modificacion\n>4. informes\n>5. Salir\n  ELIJA UNA OPCION: ");

        switch (opcion)
        //switch (opcion=pedirOpcionMenu)
        {

        case 1:
            printf("Estoy dando de alta\n");
            system("pause");
            break;

        case 2:
            printf("Estoy dando de baja\n");
            system("pause");
            break;

        case 3:
            printf("Estoy modificando\n");
            system("pause");
            break;

        case 4:
            printf("Estoy informando\n");
            system("pause");
            break;
        case 5:
            printf("Saliendo\n");
            system("pause");
            seguir = 'n';
        default:
            printf("Opcion incorrecta\n");
            system("pause");
            break;
        }

        system("cls");

    }while(seguir == 's');
    return 0;
}

int pedirOpcionMenu(char texto[])
{
    int opcion;

    //printf("> Alta\n2.> Baja\n2.> Modificacion\n2.> informes\n2.> Salir\n2.ELIJA UNA OPCION: ");
    printf("%s",texto);
    scanf("%d", &opcion);
    return opcion;
}
