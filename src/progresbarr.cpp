#include <iostream>
#include <windows.h>
#include <cstring>
#include <stdlib.h>
#include <dos.h>

using namespace std;

int main ()
{
    system("color 0e");
    system("cls");
    printf("\e[?251");

    int bar=177;
    float porcentaje;
    char caracter [1];

    do
    {
        cout<<"-Porcentaje de la barra: ";
        cin>> porcentaje;  
    }
    while (porcentaje > 100);
    
    cout << "-caracter a utilizar: ";
    cin>> *caracter;

    cout <<"\n\n\n\n\t\tCargando...";
    cout <<"\n\n\n\n\t\t";

    for(int i=0; i<25; i++)
        cout<<(char)bar;

    for(int i=0; i<=porcentaje; i++)
    {
        cout <<"\r\t"; 
        cout <<i<<"%"<<"\t";

    for(int j=1; j<i/4; j++)
        cout<< *caracter;
        Sleep (50);
    }
    cout<< endl;
    system ("pause");
    return 0;

}