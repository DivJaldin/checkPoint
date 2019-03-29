#include <stdio.h>
#include <stdlib.h>
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int pedirOpcionMenu (char[]);

int main()
{
    float opcion; //podria ser del tipo char entero
    char seguir = 's';

    do
    {
        //listado de opciones
        //opcion = pedirOpcionMenu();
        opcion = pedirOpcionMenu ("- - TABLA DE CALCULUS - -\n\n1. Ingresar 1er operando (A=x)\n2. Ingresar 2do operando (B=y)\n3. Calcular todas las operaciones\na) Calcular la suma (A+B)\nb) Calcular la resta (A-B)\nc) Calcular la division (A/B)\nd) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A!)\n4. Informar resultados\n5. Salir");
        system("cls");
        switch (opcion)
        //switch (opcion=pedirOpcionMenu)
        {

        case 1:
            printf("Ingresar operando (A=x)\n ");
            system("pause");
            break;

        case 2:
            printf("Ingresar 2do operando (B=y)\n ");
            system("pause");
            break;

        case 3:
            printf("CALCULANDO todas las operaciones");
            system("pause");
            break;

        case 'a':
            printf("Calcular la suma (A+B)\n");
            system("pause");
            break;

        case 'b':
            printf("Calcular la resta (A-B)\n");
            system("pause");
            break;

        case 'c':
            printf("Calcular la division (A/B\n");
            system("pause");
            break;

        case 'd':
            printf("Calcular la multiplicacion (A*B)\n");
            system("pause");
            break;

        case 'e':
            printf("Calcular el factorial (A!)\n");
            system("pause");
            break;

        case 9:
            printf("Informar resultados\n");
            system("pause");
            break;

        case 10:
            printf("Salir\n");
            system("pause");
            seguir = 'n';
            break;
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
    scanf("%f", &opcion);
    return opcion;
}
