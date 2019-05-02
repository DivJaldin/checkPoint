#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "utn.h"
#define TAM 3

int menu(void)
{
    int opcion;

    system("cls");

    printf("1- MENU");
    printf("\n2- EMPLEADO");
    printf("\n3- ALMUERZO");
    printf("\n4- SECTOR");
    printf("\n5- SALIR");
    printf("\n\nIngrese opcion: ");

    scanf("%d",&opcion);
    return opcion;
}

int menuEmpleado(void)
{
    int opcion;

    system("cls");

    printf("1- Modificar apellido");
    printf("\n2- Modificar nombre");
    printf("\n3- Modificar sexo");
    printf("\n4- Modificar salario");
    printf("\n5- Modificar fecha ingreso");
    printf("\n4- Modificar sector");
    printf("\n\nIngrese opcion: ");

    scanf("%d",&opcion);
    return opcion;
}

void valFlag(int f1)
{
    if(f1==0)
    {
        printf("\nDebe ingresar datos primero");
    }
}

void inicializarEmpleados(eEmpleado vec[], int tam)
{
    for(int i=0; i<tam; i++)
		vec[i].legajo=0;
}
void mostrarEmpleado(eEmpleado empleado)
{
    printf("%d\t\t%s\t\t%c\t%.2f\t\t%d %d %d\n",empleado.legajo,empleado.nombre,empleado.sexo,empleado.sueldo,empleado.fechaIngreso.dia,empleado.fechaIngreso.mes,empleado.fechaIngreso.anio);
}

int buscarLibre(eEmpleado empleado[], int tam)
{
	int index=-1;
	for(int i=0; i<tam; i++)
	   if(empleado[i].legajo==0){
		index=i;
		break;
	   }
	return index;
}

int buscarEmpleado(eEmpleado empleado[], int tam, int legajo)
{
   int index=-1;
   for(int i=0; i<tam; i++)
   {
       if(empleado[i].isEmpty == 0 && empleado[i].legajo == legajo)
       {
           index = i;
           break;
       }
   }
    return index;
}

void altaEmpleado(eEmpleado empleado[], int tam)
{
    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo=1;//autoincremental
    char auxLegajo[10];
    char auxApellido[100];
    char auxNombre[100];
    char auxSalario[30];
    char auxSexo;
    char auxSector[10];
    float acumSalarios=0;

    printf("---Alta Empleados---\n\n");

    indice = buscarLibre(empleado, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo");
    }
    else
    {
        /*printf("Ingrese legajo: ");
        scanf("%d",&legajo);*/
        while(!getStringNumeros("Ingrese legajo: ",auxLegajo))
        {
            printf("El legajo debe ser numerico\n");
        }
        legajo = atoi(auxLegajo);

        esta=buscarEmpleado(empleado, tam, legajo);

        if(esta != -1)
        {
            printf("El legajo ya esta dado de alta en el sistema\n");
            mostrarEmpleado(empleado[esta]);
        }
        else
        {

            nuevoEmpleado.isEmpty = 0;
            nuevoEmpleado.legajo = legajo;

            /*printf("Ingrese nombre: ");
            fflush(stdin);
            gets(nuevoEmpleado.nombre);*/
            while(!getStringLetras("Ingrese Apellido: ",auxApellido))
            {
                printf ("El apellido debe estar compuesta solo por letras\n");
            }
            fflush(stdin);
            strcpy(nuevoEmpleado.apellido,auxApellido);
            valString(nuevoEmpleado.apellido, 10);

            while(!getStringLetras("Ingrese nombre: ",auxNombre))
            {
                printf ("El nombre debe estar compuesta solo por letras\n");
            }
            fflush(stdin);
            strcpy(nuevoEmpleado.nombre,auxNombre);
            valString(nuevoEmpleado.nombre, 10);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c",&auxSexo);
            valSexo(auxSexo);
            nuevoEmpleado.sexo=auxSexo;

            /*printf("Ingrese sueldo: ");
            scanf("%f",&nuevoEmpleado.sueldo);*/
            while(!getStringNumerosFlotantes("Ingrese salario: ",auxSalario))
            {
                printf ("El salario debe ser numerico\n");
            }
            nuevoEmpleado.salario = atof(auxSalario);
            acumSalarios=acumSalarios+nuevoEmpleado.salario;

            printf("Ingrese fecha de ingreso d m a: ");
            scanf("%d %d %d",&nuevoEmpleado.fechaIngreso.dia,&nuevoEmpleado.fechaIngreso.mes,&nuevoEmpleado.fechaIngreso.anio);

            while(!getStringNumeros("Ingrese sector: ",auxSector))
            {
                printf("El sector debe ser numerico\n");
            }
            sector = atoi(auxSector);

            empleado[indice] = nuevoEmpleado;

            printf("\Alta exitosa!\n\n");
        }
    }
}

void bajaEmpleado(eEmpleado empleado[], int tam, int flag)
{
    int esta;
    int legajo;
    char auxLegajo[30];
    char confirma;

    if(flag==1){
    printf("---Baja Empleado---\n\n");
    /*printf("Ingrese legajo: ");
    scanf("%d", &legajo);*/
    while(!getStringNumeros("Ingrese legajo: ",auxLegajo))
        {
            printf("El legajo debe ser numerico\n");
        }
    legajo = atoi(auxLegajo);

    esta = buscarEmpleado(empleado, tam, legajo);

    if(esta == -1)
    {
        printf("\nEl legajo %d no se encuentra en el sistema\n\n",legajo);
    }
    else
    {
        mostrarEmpleado(empleado[esta]);

        printf("Confirma la baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's')
        {
            empleado[esta].legajo = 0;
            printf("\nSe ha realizado la baja\n\n");
        }
        else
        {
            printf("\Se ha cancelado la baja\n\n");
        }

    }
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }

}

void modificarEmpleado(eEmpleado empleado[], int tam, int flag)
{
    int esta;
    int legajo;
    int opcion;
    float sueldo;
    char confirma;
    char auxLegajo[30];

    if(flag==1){
    printf("---Modificar Empleado---\n\n");
    /*printf("Ingrese legajo: ");
    scanf("%d", &legajo);*/
    while(!getStringNumeros("Ingrese legajo: ",auxLegajo))
    {
        printf("El legajo debe ser numerico\n");
    }
    legajo = atoi(auxLegajo);

    esta = buscarEmpleado(empleado, tam, legajo);

    if(esta == -1)
    {
        printf("\nEl legajo %d no se encuentra en el sistema\n\n",legajo);
    }
    else
    {
        mostrarEmpleado(empleado[esta]);

        do
        {
            switch(menuEmpleado())
            {
                case 1://MENU
                    //system("cls");
                    system("pause");
                    break;

                case 2://EMPLEADO
                    //system("cls");
                    system("pause");
                    break;

                case 3://ALMUERZO
                    //system("cls");
                    system("pause");
                    break;

                case 4://SECTOR
                    //system("cls");
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









        printf("Ingrese nuevo sueldo: ");
        scanf("%f", &sueldo);

        printf("Confirma modificacion?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's')
        {
            empleado[esta].sueldo = sueldo;
            printf("\nSe ha modificado el sueldo\n\n");
        }
        else
        {
            printf("\Se ha cancelado la modificacion\n\n");
        }

    }
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }
}

void empleadosMayorSueldo(eEmpleado vec[], int tam, int flag2)
{
    int flag=0;
	float maxSueldo;
    if(flag2==1){
    fflush(stdin);
	for(int i=0; i<tam; i++)
	{
		if(vec[i].legajo!=0)
		  if(flag ==0 || vec[i].sueldo>maxSueldo)
		  {
			maxSueldo = vec[i].sueldo;
			flag=1;
		  }
	}

	printf("El o los Empleados con mayor sueldo (%.2f) son:\n", maxSueldo);
    for(int i=0; i<tam; i++)
	{
		if(vec[i].legajo!=0)
		  if(vec[i].sueldo==maxSueldo)
		  {
                mostrarEmpleado(vec[i]);
		  }
	}
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }
}

void ordenarEmpleado(eEmpleado vec[], int tam, int flag)
{
    if(flag==1){
    eEmpleado auxEmpleado;
    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(vec[i].sexo > vec[j].sexo)
            {
                auxEmpleado = vec[i];
                vec[i] = vec[j];
                vec[j] = auxEmpleado;
            }
            else
            {
                if(vec[i].sexo == vec[j].sexo)
                {
                    if(strcmp(vec[i].nombre, vec[j].nombre)>0)
                    {
                        auxEmpleado = vec[i];
                        vec[i] = vec[j];
                        vec[j] = auxEmpleado;
                    }
                }
            }
        }
    }
    printf("Ordenamiento realizado!\n\n");
    /*printf("Legajo\t\tNombre\t\tSexo\tSueldo\t\tFecha de ingreso\n");
	for(int i=0; i<tam; i++)
	{
		if(vec[i].legajo!=0)
        mostrarEmpleado(vec[i]);
    }*/
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }
}

void listarEmpleado(eEmpleado vec[], int tam, int flag)
{
    if(flag==1){
    printf("Legajo\t\tNombre\t\tSexo\tSueldo\t\tFecha de ingreso\n");
	for(int i=0; i<tam; i++)
	{
		if(vec[i].legajo!=0)
        mostrarEmpleado(vec[i]);
    }
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }
}

void totalSueldos(eEmpleado vec[], int tam, int flag)
{
    if(flag==1){
    float acumSueldos=0;
    fflush(stdin);
	for(int i=0; i<tam; i++)
	{
		acumSueldos=acumSueldos+vec[i].sueldo;
	}
    printf("El total de sueldos es: %.2f\n\n",acumSueldos);
    }else{
        printf("Error, primero debe ingresar datos.\n\n");
    }
}
