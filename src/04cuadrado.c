#include <stdio.h>

int main()
{

    int numero, a, b;
    
    printf("numero de signos del cuadrado: ");
    scanf("%d", &numero);

    for (b=1; b <= numero; b++)
    {
        for(a=1; a <= numero; a++)
        {
            if (b==1 || b== numero)
            {
                if (a%2==0)
                printf("+ ");
                else
                printf("- ");

            }else if (a==1 || a==numero)
            {
                if (b%2==0)
                    printf("+ ");
                else
                    printf("- ");
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }     
}