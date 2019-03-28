
int cambiarValor(int valor)
{
    valor = 999;
     return 1;
}

int cambiarValorReferncia (int* valor)
{

    /*valor == 999;*/
    printf(" El valor es: %d ", valor);
    *valor = 999;

    return 1;
}

int dividirPorReferencia (int dato1; int dato2, float *respuesta)
{
    if(dato1 !=0)
    {
        *respuesta = (float) dato1 / dato2;

        return 1;
    }
    return 0;
}

int saludar()
{
    printf("Hola Bibioteca");

}

int dividir (int numero)
{

    int respuesta;
    int resultado;

    respuesta = esDistintoAcero(numero);

    if (respuesta ==1)
    {
        resultado = numero / 2;
    }

    return respuesta;
}

int esDistintoAcero(int numero)
{
    if (numero !=0)
    {
        return 1;
    };

    return 0;
}

int factorial(int numero)
{

    int respuesta;

    if (numero ==1)
    {
        return numero;
    }
    respuesta = numero * factorial (numero-1);

    return respuesta;
}
