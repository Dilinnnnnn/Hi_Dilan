#include <stdio.h>

int main()
{
    int a=0, b=0, esc=0;
    printf("ingrese el numero de escalones que desea: ");
    scanf("%d", &esc);

    for (a = 1; a <= esc; a++)
    {
        for (b = 1; b <= esc; b++)
        {
            if((b%2==1)&&(a==b))          
                printf(("|_+_"));
            else if ((a%2==0)&&(a==b))
                printf(("|_-_"));
            else((a!=b));
                printf(("    "));
        }
        printf("\n");
    }
    return 0;
}