#include <stdio.h>

int main()
{

    int num, a, b;

    printf("Numero de signos para el cuadrado:");
    scanf("%d",&num);

    for(b=1; b <= num; b++)
    {
        for(a=1; a<= num; a++)
        {
            if(b==1 || b== num)
            {
                if (a%2==0)
                printf("+ ");
                else
                printf("- ");
                
            }else if(a==1 || a== num){
                if (b%2==0)
                    printf("+ ");
                else
                    printf("- ");
            }else{

                printf("  ");
            }
        }
        printf("\n");
    }
}