#include <iostream>     // entradas salidas en consola y string
#include <fstream>      // manejo de archivos
using namespace std;
 
void leerArchivo(string pathFile)
{
    int pag =1;
    string s;
    ifstream f( pathFile );
 
    if ( !f.is_open() )
        cerr << "Error de abrir el archivo." << endl;
    else
        do
        {
            getline( f, s );
            cout << s << endl;
           
            if(pag++%5 == 0)
                getchar();
        }while( !f.eof() );
    f.close();
}
void escribirArchivo(string pathFile)
{
    ofstream f;
    //f.open(pathFile, ios_base::out);  // crear + esc
    f.open(pathFile, ios_base::app);    // agregar
 
    f << "PEPE\n";
    f << "JULIA\n";
    f << "DORA\n";
    f.close();
}

int main()
{
    leerArchivo("..\\files\\ListadoAlumnos.txt");
    escribirArchivo("..\\files\\ListadoAlumnos.txt");
}
