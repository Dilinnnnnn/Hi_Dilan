#include <stdio.h>

//autor: Dilan Real
//Fecha: 15/12/2022
//inicial: D

void Matrizinicial()
{
    char inicialN[6][6]={
                         {'x','x','x','x','x','x'}     
                        ,{'x','x','x','x','x','x'}  
                        ,{'x','x','x','x','x','x'}  
                        ,{'x','x','x','x','x','x'}  
                        ,{'x','x','x','x','x','x'}  
                        ,{'x','x','x','x','x','x'}  
                        };
    char fila = sizeof(inicialN)/sizeof(inicialN[0]);
    char columna = sizeof(inicialN[0])/sizeof(inicialN[0][0]);

    for (char fi = 0; fi < fila; fi++)
    {
        for (char co = 0; co < columna; co++)
        {
            if ((co==0) || (fi==0) && (co!=5) || (fi==5) && (co!=5)||(fi==1) && (co==5)||(fi==2) && (co==5)||(fi==3) && (co==5)||(fi==4) && (co==5))
            {
            printf("%c  ", inicialN[fi][co]);
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}

int main()
{
    Matrizinicial();
}