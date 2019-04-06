#include <stdio.h>
#include <stdlib.h>
//Aqui se agrega la biblioteca .h
#include "funciones.h"

int main()
{

    //Aqui se definen las variables.
    int x=0; // Primer valor.
    int y=0; // Segundo valor.
    int option = 0; // Opcion seleccionada del menu.

    // Variables donde se almacenaran los resultados.
    int sumaResultado = 0;
    int restaResultado = 0;
    int divisionResultado = 0;
    int multiplicacionResultado = 0;
    int factorialAResultado = 0;
    int factorialBResultado = 0;

    // Variable de ayuda para determinar si se muestran los errores o los resultados en el ciclo.
    int mostarResultados = 0;

    // Se aplica un ciclo para poder actualizar el menu.
    while(option < 6){

    printf("************* \n");
    printf("        Calculadora\n\n");
    printf("************* \n");

    // Se evalua si el valor de x es mayor a 0 para determinar que mensaje mostrar.
    if(x>0){
      printf("1. Ingresar el 1er operando (A=%d) \n",x);
    }else{
      printf("1. Ingresar el 1er operando (A=x) \n");
    }

    // Se evalua si el valor de y es mayor a 0 para determinar que mensaje mostrar.
    if(y>0){
      printf("2. Ingresar el segundo operando (B=%d) \n",y);
    }else{
      printf("2. Ingresar el segundo operando (B=y) \n");
    }

    // Opciones del menu.
    printf("3. Calcular todas las operaciones \n");
    printf("  a) Calcular la suma (x + y) \n");
    printf("  b) Calcular la resta (x - y) \n");
    printf("  c) Calcular la division (x/y) \n");
    printf("  d) Calcular la multiplicacion (x*y) \n");
    printf("  e) Calcular el factorial (x y!) \n\n");

    printf("4. Informar resultados \n");
    printf("   El resultado de la suma (A + B) \n");
    printf("   El resultado de la resta (A - B) \n");
    printf("   El resultado de la division (A / B) \n");
    printf("   El resultado de la multiplicacion (A * B) \n");
    printf("   El resultado de el factorial (A! B!) \n\n");

    printf("5. Reiniciar \n");
    printf("6. Salir. \n\n");

    if(mostarResultados == 1){
        printf("El resultado de la suma entre %d y %d es de: %d\n",x,y,sumaResultado);
        printf("El resultado de la resta entre %d y %d es de: %d\n",x,y,restaResultado);
        if (x==0 || y==0){
            printf("Error, no es posible dividir entre 0 \n");
        }else{
        if (y > x){
            printf("Error, no es posible dividir \n");
        }else{
            printf("El resultado de la division entre %d y %d es de: %d\n",x,y,divisionResultado);
            }
        }

        printf("El resultado de la multiplicacion entre %d y %d es de: %d\n",x,y,multiplicacionResultado);

        if (x==0 || y==0){
            printf("Error, ingrese un numero diferente a 0 \n");
        }else{
            if (x<0 || y<0){
                printf("Error, ingrese valores validos \n");
            }else{
                printf("El resultado de la factorizacion de y %d es de: %d\n\n",y,factorialAResultado);
                printf("El resultado de la factorizacion de y %d es de: %d\n\n",y,factorialBResultado);
            }
        }
    }

    printf("Por favor, ingrese una opcion: \n");
    scanf("%i",&option);

    switch(option){
      case 1:
        printf("1. Ingresar el 1er operando (A=x) \n\n");
        scanf("%d",&x);
        system("cls"); // Limpia la pantalla.
      break;
      case 2:
        printf("2. Ingresar el segundo operando (B=x) \n\n");
        scanf("%d",&y);
        system("cls"); // Limpia la pantalla.
      break;
      case 3:
        sumaResultado = Suma(x,y);
        restaResultado = Resta(x,y);
        divisionResultado = Division(x,y);
        multiplicacionResultado = Multiplicacion(x,y);
        factorialAResultado = factorial(x);
        factorialBResultado = factorial(y);

        system("cls"); // Limpia la pantalla.
      break;

      case 4:
         mostarResultados = 1;
        system("cls"); // Limpia la pantalla.
      break;
      case 5:
        x = 0;
        y = 0;
        mostarResultados = 0;
        system("cls");
      break;
      case 6:
        break;
    }
    }

return 0;
}
