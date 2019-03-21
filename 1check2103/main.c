#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura;
    int suma;
    int contador;
    int numero;
    float promedio;
    //O utilizar la inicializacion de i en 0 desde afuera del for
/*
    altura = 82,5;
    edad = 66;
    printf("\n ingrese su edad: ");
    scanf("%d", &edad);
    printf("\n ingrese su altura: ");
    scanf("%f", &altura);

    printf("La altura es: %.2f",altura);
    printf(" y la edad %d" ,edad );
    /*
    for (i=0 ;i<5; i>0 )
    {
        printf("\n ingrese su altura: ");
        scanf("%f", &altura);
        i++
    }
    */
    //mas dinamico el siguiente
    suma=0;
    contador=0;    while(contador<5)
    {
        printf("\n ingrese numero: ");
        scanf("%d", &numero);

        suma = suma+numero;
        contador++;
    }

    promedio =  (float)suma / contador;

    printf("\n el promedio es : %.2f", promedio);
    //casteamos (suma) para que la funcion de la suma me de un promedio decimal
    return 0;
}
