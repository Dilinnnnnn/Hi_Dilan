#include <stdio.h>

int main(void)
{
    int nosignos=0;

    printf("ingrese cantidad de signos: ");
    scanf("%i", &nosignos);

    for (int i = 0; i < nosignos; i++)
        printf("+ ");

    printf("\n\n");
    return 0;

    

}