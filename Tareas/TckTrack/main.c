#include <stdio.h>
#include <stdlib.h>
/*Se ingresan numerosenteros(nosesabecuantos).
Losnumeros tienen que estar comprendidos entre -50y 500:
determinar:
>Cuantos numeros pares.5
>Cuantos numeros positivos.5
>Cuantos numeros negativos.5
>Cuantas veces se ingreso el cero
>Promedio de numeros positvos5
>Maximo   y   minim
>la suma de los negativos
la diferencia entre negativos y positivos
cuantos numero estab entre -239 y 5-5

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
    int counterCero=0;
    int counterPar=0;
    int counterPositive=0;
    int counterNegative=0;
    int numberNegative=0;
    int counterTrack=0;
    int flag;
    int numberMax;
    int numberMin;
    int minus=0;
    int maximus=0;
    char rta;
    do
    {
        numberOut = giveNumber ("Ingrese un numero entero que este entre -50 y 500: ", 500, -50);

        system("pause");

        printf("\n >>Correcto<< \nEl numero ingresado fue  : %d \n", numberOut);

        if (numberOut == 0)
        {
            counterCero++;
        };

        if (numberOut%2 == 0)
        {
            counterPar++;
        };

        if (numberOut>0)
        {
            counterPositive++;
        };
        if (numberOut<0)
        {
            counterNegative++;

            numberNegative = numberOut + numberNegative;
        };

        if (flag==0 || numberOut>maximus)
        {
            maximus = numberOut;
        };

        if (flag==0 || numberOut<minus)
        {
            minus = numberOut;
        };

        if(numberOut > -239 || numberOut <5)
        {
            counterTrack++;
        };

        printf("\n\n    Desea analizar datos ingresados? presione 'y' sino enter para seguir ingresando\n");
        rta = getche();

    }   while (rta != 'y');//finalizo do
    printf("\n\n TABLA DE ANALISIS\n ");
    printf("\n- La cantidad de numeros pares ingresados es: %d", counterPar);
    printf("\n- Cantidad de numeros 0 ingresados: %d", counterCero);
    printf("\n- Cantidad de numeros positivos: %d", counterPositive);
    printf("\n- Cantidad de numeros negativos: %d", counterNegative);
    printf("\n- Suma del total de numeros negativos ingresados: %d", numberNegative);
    printf("\n- Numero Maximo digitado: %d", maximus);
    printf("\n- Numero minimo digitado: %d", minus);
    printf("\n- Cantidad de numeros ingresados entre los parametros -239 y 5: %d \n", counterTrack);


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
        printf(" \n>>Error<< \nRecuerde: %s", message);
        scanf("%d",&numberIn);
    }
    return numberIn;
}



