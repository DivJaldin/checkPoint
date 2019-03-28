#include <stdio.h>
#include <stdlib.h>
/*Se ingresan numerosenteros(nosesabecuantos).
Losnumeros tienen que estar comprendidos entre -50y 500:
determinar:
>Cuantos numeros pares.
>Cuantos numeros positivos.
>Cuantos numeros negativos.
>Cuantas veces se ingreso el cero
>Promedio de numeros positvos
>Maximo   y   minim
>la suma de los negativos
la diferencia entre negativos y positivos
cuantos numero estab entre -239 y 5

*/
int giveNumber(char message[], int,int);

int averageInteger (int numberIn, int numberMin, int numberMax, char message[]);
/*
int giveAveragePositive();
int giveAverageNegative();
*/

int main()
{
    int numberOut;

    numberOut = giveNumber ("Ingrese un numero entero que este entre -50 y 500: ", 500, -50);

    printf("El numero elegido fue verificado : %d", numberOut);
    return 0;

}

int giveNumber(char message[], int numberMax,int numberMin)
{
    int numberIn;
    printf("%s", message);
    //%c para un solo caracter/mensaje
    //%s para varios caracteres

    scanf("%d",&numberIn);

    numberIn = averageInteger (numberIn, numberMin, numberMax, message);
    return numberIn;
}

int averageInteger (int numberIn, int numberMin, int numberMax, char message[])
{
    while (numberIn < numberMin || numberIn > numberMax)
    {
        printf("Error: Reingrese numero entero %s", message);
        scanf("%d",&numberIn);
    }
    return numberIn;
}



