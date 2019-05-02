#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int pedirInt(char mensaje[]);
float pedirFloat(char mensaje[]);
char pedirString(char mensaje[]);
char pedirSexo(void);
void validarLegajo(int num);
void validarSueldo(int num);
void validarString(char cadena[]);

int main()
{
    printf("Hello world!\n");
    return 0;
}

int pedirInt(char mensaje[]){

    int num;

    printf("%s\n", mensaje);
    scanf("%d", &num);

    return num;
}

float pedirFloat(char mensaje[]){

    float num;

    printf("%s\n", mensaje);
    scanf("%f", &num);

    return num;
}

char pedirString(char mensaje[]){

    char cadena[20];

    printf("%s\n", mensaje);
    gets(cadena);

    return cadena;
}

char pedirSexo(void){

    char sexo;

    printf("Ingrese el sexo: \n");
    scanf("%c", &sexo);

    while(sexo != 'f' || sexo != 'm'){

        printf("Error, Reingrese el sexo: \n");
        scanf("%c", &sexo);
    }


    return sexo;
}

void validarLegajo(int num){

    while(num < 1000 || num > 9999){

        pedirInt("Error, Reingrese el legajo: \n");
    }
}

void validarSueldo(int num){

    while(num < 1000 || num > 100000){

        pedirInt("Error, Reingrese el legajo: \n");
    }
}

void validarString(char cadena[]){

    while(strlen(cadena) > 20){

        pedirString("Error, Reingrese nombre: \n");
    }
}
