#include <stdio.h>

int main()
{
    char personajes[4]={'l','o','c','u'};
    int numero=0;
    printf("El lobo, la caperucita y las uvas. \n \n");
    printf("-Hay un lobo, un observador, una caperucita y unas uvas; los cuales quieren cruzar el rio en un barco en el cual caben 2 personajes y el observador siempre va en el barco, pero tienen que cruzar en un orden especifico por que si no ocurre lo siguiente- \n");
    printf("*Si la caperucita se queda con las uvas, se las va a comer. \n");
    printf("*Si el lobo se queda con la caperucita, se la va a comer. \n \n");
    printf("+Ingresa el primer personaje en cruzar con el observador: \n");
    printf("\n 1)Lobo \n 2)Caperucita \n 3)Uvas \n \n");
    scanf("%i",&numero);
        if (numero==2)
        {
            printf("-El observador lleva a la caperucita y regresa, ahora ¿con quien debe viajar?- \n 1)Uvas \n 2)Lobo \n \n");
            scanf("%i",&numero);
                if(numero==2)
                {
                    printf("-El observador viaja con el lobo a la otra orilla, ¿a quien debe llevar a la orilla original ahora?- \n 1)Caperucita \n 2)Lobo \n \n");
                    scanf("%i",&numero);
                        if (numero==1)
                        {
                            printf("-El observador regresa con la caperucita a la orilla original, ahora a quien debe llevar a la otra orilla?- \n 1)Caperucita \n 2)Uvas \n \n");
                            scanf("%i",&numero);
                                if(numero==2)
                                {
                                    printf("-El observador lleva las uvas a la otra orilla, en la cual ahora estan el lobo y las uvas, a quien debe llevar ahora a la orilla original?- \n 1)Lobo \n 2)Uvas \n 3)Ninguno \n \n");
                                    scanf("%i",&numero);
                                        if(numero==3)
                                        {
                                            printf("-El observador regresa solo a la orilla original, entonces para acabar el reto, a quien lleva ahora? \n 1)Caperucita \n 2)Nadie \n");
                                            scanf("%i",&numero);
                                                if(numero==1)
                                                printf("Lo lograste, llevaste a los 3 personajes y al observador sanos y salvos a la oriila, has ganado el juego :D ");
                                                return 0;
                                        } 
                                        else
                                            printf("Perdiste, vuelve a ejecutar para obtener un nuevo intento");
                                }
                                else
                                    printf("Perdiste, vuelve a ejecutar para obtener un nuevo intento");
                        }
                        else
                            printf("Perdiste, vuelve a ejecutar para obtener un nuevo intento");
                }
                else
                    printf("Perdiste, vuelve a ejecutar para obtener un nuevo intento");
        }
        else
            printf("Perdiste, vuelve a ejecutar para obtener un nuevo intento");
        return 0;   
}