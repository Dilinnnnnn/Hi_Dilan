#include <stdio.h>

int main()
{
    int longitud =0, ancho=0, rta=0;

    printf("ingrese la longitud: ");
    scanf("%i", &longitud);

    printf("ingrese el ancho: ");
    scanf("%i", &ancho);

    rta = longitud * ancho;

    printf("el area del rectangulo es: %i ", rta);

    return 0;

}