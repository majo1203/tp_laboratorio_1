#include <stdio.h>
#include <stdlib.h>
//Aqui se agrega la biblioteca .h
#include "funciones.h"
int main()
{
    int x;
    int y;
    int option;
    printf("Calculadora\n");

    printf("Ingresar el 1er operando \n");
    scanf("%d",&x);
    printf("Ingresar 2do operando \n");
    scanf("%d",&y);

    printf("1. Calcular la suma (x+y) \n");
    printf("2. Calcular la resta (x-y) \n");
    printf("3. Calcular la division (x/y) \n");
    printf("4. Calcular la multiplicacion (x*y) \n");
    printf("5. Calcular el factorial (x y!) \n");
    printf("6. Salir. \n");
    scanf("%i",&option);

    switch(option)
    {
        case 1:
            printf("El resultado de la suma entre %d y %d es de: %d\n",x,y,Suma(x,y));
        break;
        case 2:
            printf("El resultado de la resta entre %d y %d es de: %d\n",x,y,Resta(x,y));
        break;
        case 3:
            if (x==0 || y==0)
            {
                printf("Error, no es posible dividir entre 0 \n");
            }else
                {
            if (y > x)
            {
                printf("Error, no es posible dividir, cambie de lugar los valores \n");
            }else
                {
                printf("El resultado de la division entre %d y %d es de: %d\n",x,y,Division(x,y));
                }
                }
        break;
        case 4:
            printf("El resultado de la multiplicacion entre %d y %d es de: %d\n",x,y,Multiplicacion(x,y));
        break;
        case 5:
            if (x==0 || y==0)
                {
                printf("Error, ingrese un numero diferente a 0 \n");
                }else
                {
                printf("El resultado de la factorizacion de x %d es de: %d\n",x,Factorizacion(x));
                printf("El resultado de la factorizacion de y %d es de: %d\n",x,Factorizacion(y));
                }
        case 6:
        break;
    }
return 0;
}
