
#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
int main()
{
    eProducto unProducto;
    unProducto = pedirProducto();
    mostrarProducto(unProducto);
    return 0;
}
