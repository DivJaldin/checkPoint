#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50]="juan";//\0 contrabarra 0 es el signo donde aclara que termina la palabra
    int largo;
    int compara;
    strcpy(nombre,"pepe");

    //nombre = "juan";//no te deja y no se puede;
    //printf("%d--%d\n\n",nombre, &nombre);
    printf("Su nombre es: %s",nombre);
    //printf("Ingrese su nombre: ");//evitar usar scanf para leer cadena de caracteres;
    //scanf("%s", nombre);
    //gets(nombre);//toma nombre y apellido todas las palabras ingresadas; esta especializada en lectura de cadenas
    //fgets(nombre, 50, stdin);//esta es para linux; no te desborda el buffer//hacer strlen si yo pongo pepe\n\0 cambiar el \n por el \0
    //scanf("%[^\n]",nombre);//scanf modificado para que no te lea el espacio;

    //largo=strlen(nombre);//cuenta la cantidad de caracteres puedo poner un avariable o un valor constante

    //printf("Su nombre es:  %s",nombre);
    //printf("%d",largo);

    compara=stricmp(nombre,"pepe");//permite comparar dos cadenas
    printf("%d",compara);//0 si son iguales;1 si la primera letra es mayor a la de la segunda palabra; -1 si la primera letra es menor a la de la segunda palabra ASCII
    /*if(nombre == "pepe")//no sirve
    {
        printf("Ud se llama pepe");

    }*/
    /*0= pepe,pepe
     -1=maria,pepe
        43      57
      1=walter,pepe
        70      57
     -1=Pepe,pepe*/
     //stricmp ignora la diferencia de mayusculas entre minusculas

    return 0;
}
