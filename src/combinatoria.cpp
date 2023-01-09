#include <iostream>

using namespace std;

void combinSR (char *iteams, int n, int r, int x=0, int aux=0, int *indices=NULL)
{
    if (indices==NULL)
    {
        indices = new int [r];
    }
    if (aux<r)
    {
        for (int c1 = x; c1 < n; c1++)
        {
            indices[aux]=c1;
            combinSR (iteams, n, r, c1+1, aux+1, indices);
        }    
    }
    else
    {
        cout<<"\n\t";
            for (int p = 0; p < r; p++)
            {
                cout<<iteams[indices[p]];
            }       
    }           
}

int main()
{
    char datos[] = {'a','b','c','d','e','f','g','h','i'};
    int n, r;

    cout <<"\n\nNunero: "; cin >> n;
    cout <<"Respuesta: "; cin >> r;

    combinSR (datos, n, r);

    return 0;
}