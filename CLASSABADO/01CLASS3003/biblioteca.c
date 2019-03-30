#include <stdio.h>
#include <stdlib.h>

void verSiAnda(void)
{
    printf("funciona");

}
/*
int cambiarValor(int dato)
{
    dato = 0;
    printf("\n lugar valor %d", &dato);
}
int cambiarReferencia(int *dato)
{
    *dato = 0;
    printf("\n lugar referencia %d", &*dato);
}
*/
int dividir (int datoUno, int datoDos, float *resultado)
{
        float aux;
        if (datoDos ==0)
        {
            return 0;
        }else{
            aux = (float) datoUno/datoDos;
            *resultado = aux;
            return 1 ;
        }
}
int pedirEdad (int *edad)
{
    int aux = 0;
    int retorno;
    retorno = 0;
    printf("ingrese su edad: ");
    if (scanf("%d", &aux) == 1)
    {
        if(aux >= 0 && aux <=150)
        {
            *edad = aux;
            retorno = 1;
            return 1;
        }
    }
    return retorno;
    // retorno = 0;
}
