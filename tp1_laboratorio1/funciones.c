#include <stdio.h>
#include <stdlib.h>

//Se cre� esta biblioteca para hacer los cuerpos de cada operacion solicitada

//En esta funcion se inica la operacion de la suma
int Suma(int x, int y)
    {
        return x + y;
    }
//En esta funcion se inica la operacion de la resta
int Resta(int x, int y)
    {
        return x - y;
    }
//En esta funcion se inica la operacion de la multiplicacion
int Multiplicacion(int x, int y){
        return x * y;
    }
//En esta funcion se inica la operacion de la division
unsigned int Division(int x, int y){
        return x / y;
    }
//En esta funcion se inica la operacion de las factorizaciones
unsigned int Factorizacion (int x, int y)
    {
        int resp=1;
        int i;
        for (i=1; i>x; i--)
{
resp=resp*i;
}
return (resp);
    }


