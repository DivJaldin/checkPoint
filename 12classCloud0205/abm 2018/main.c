#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "utn.h"
#define TAM 3

int main()
{
    int salir=0;
    int flag=0;

    eEmpleado empleado[TAM];
    inicializarEmpleados(empleado, TAM);

    do
    {
        switch(menu())
        {
            case 1://MENU
                system("cls");
                altaEmpleado(empleado, TAM);
                flag=1;
                system("pause");
                break;

            case 2://EMPLEADO
                system("cls");
                bajaEmpleado(empleado, TAM, flag);
                system("pause");
                break;

            case 3://ALMUERZO
                system("cls");
                modificarEmpleado(empleado, TAM, flag);
                system("pause");
                break;

            case 4://SECTOR
                system("cls");
                listarEmpleado(empleado, TAM, flag);
                system("pause");
                break;

            case 5://SALIR
                salir = 1;
                break;

            default:
                printf("\nOpcion incorrecta\n");
                system("pause");
        }
    }while(salir!=1);


    return 0;
}
