#include <stdio.h>
#include <stdlib.h>
//Aqui se agrega la biblioteca .h
#include "funciones.h"

int main()
{
    int x;
    int y;
    int option;

    printf("Calculadora\n\n");

    printf("1. Calcular la suma (x+y) \n");
    printf("2. Calcular la resta (x-y) \n");
    printf("3. Calcular la division (x/y) \n");
    printf("4. Calcular la multiplicacion (x*y) \n");
    printf("5. Calcular el factorial (x y!) \n");
    printf("6. Ingrese 6 para continuar\n");
    printf("7. Salir. \n\n");
    scanf("%i",&option);

    printf("Ingresar el 1er operando (A=x) \n\n","%d");
    scanf("%d",&x);


    printf("\n");
    printf("Ingresar 2do operando (B=y) \n\n");
    scanf("%d",&y);
    printf("\n");

    printf("\n");

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
            printf("Error, no es posible dividir \n");
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
        if (x<0 || y<0)
        {
            printf("Error, ingrese valores validos \n");
        }else
        {
            printf("El resultado de la factorizacion de x %d es de: %d\n",x,factorial(x));
            printf("El resultado de la factorizacion de y %d es de: %d\n",y,factorial(y));
        }
        }
    case 7:
    break;
        }
return 0;
}
