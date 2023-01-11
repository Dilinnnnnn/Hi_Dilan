# Clase 1

__Temas: introduccion a la programacion__

+ En la clase de introduccion lo primero que se realizo es un directorio con nuestro nombre en el cual se guardarian todos los trabajos o proyectos a realizar
+ Tambien se visualizo la descarga de los programas para empezar nuestro curso de programacion como lo son el git, el visual studio code y el compilador de gcc

# Clase 2

__Tema: github__

+ Para esta clase al ya presentarnos toddos lo que se realizo es la descarga y la creacion de cuenta para la aplicacion de github.
+ La funcionalidad de github era que podemos tener nuestro codigo a disposicion en cualquier lugar ya que este lo almacenara a la nube creando repositorios y brench nuevas para cada codigo que queramos crear.

![GitHub](https://play-lh.googleusercontent.com/PCpXdqvUWfCW1mXhH1Y_98yBpgsWxuTSTofy3NGMo9yBTATDyzVkqU580bfSln50bFU)


# Clase 3

__Tema: Git__

+ El tema del git practicamente tiene que ver much con la pagina antes creada github, ya que con esta extencion podemos enlazar nuestra aplicacion de codificacion con la pagina web y poder guardar todo nuestro codigo y datos con los cuales vamos a trabajar.
+ Con esta extension Git lo que se buscaba realizar era el uso de codigos y datos con los cuales se nos facilite el manejo de la nube, algunos de estos codigos o atajps eran:
  + pat_m GitMarkdown Jmaster - el temario inicial desde donde se empieza a trabajar
  + echo tmp.txt>>.gitignore clases.md 1/10/2023
  + gitignore -  ignorar archivos
  + git init - Hacer que la extension git empiece a funcionar  
  + git status -  verificar el status de todos nuestros archivos  
  + git add -  añadir archivos al git
  + cat index.html
+ Los estados de el seguimiento del git se ordenaban asi:
  + A = Actualizado/Guardado
  + U = Sintrackear
  + M = Modificar

![Git](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e0/Git-logo.svg/640px-Git-logo.svg.png)

# Clase 4

**Tema: Visual Code Studio**

+ Tuvimos una vrebe introduccion al tema del visual studio code y con ello nos explicaron la configuracion de el programa, las extensiones, los temas, el compilador que se iba a usar y cual sera el funcionamiento de este en todo el curso.
![VSC](/files/WhatsApp%20Image%202023-01-11%20at%2001.00.04.jpeg)

+ Tambien se revisaron algunos atajos para la consola y el vsc como se muestran en la siguiente foto.
![VSC2](/files/WhatsApp%20Image%202023-01-11%20at%2001.00.14.jpeg)

# Clase 5

**Tema: Markdown**

La clase de markdown se nos mostro cual es la funcionalidad del markdown y como nosotros lo ibamos a usar para seguir detallando y teniendo un historial de cada una de las clases que se tengan explicandonos como por ejemplo:

+ La forma de poner los titulos es la siguiente:

  + # Titulo 1
  + ## Titulo 2
  + ### Titulo 3 
  + #### Titulo 4 

+ *Se usa esta forma de escribir los titulos para poder usarlos en orden de enfasis del mas pequeño al mas grande.
+ Tambien se visualizaban otro tipo de acciones como lo son; el agregar fotos, el escribir en negrita o en cursiva, etc.

# Clase 6

**Tema: Desarrollo en C**

Los pasos a seguir al querer iniciar un programa nuevo en c y empezar a codificar son:

+ Dando control + shift + p, se procede a colocar en el buscador "create c proyect", para crear un nuevo
proyecto en el cual pondremos todos los proyectos que realicemos en el semestre.

+ Ir al directorio de trabajo, como por ejemplo, se ingresa el (DilanR -> Programacion 1)
Como se vio en la clase 3 de git debemos verificar que el git este en uso y con ello escribimos primero un git --version para saber
que se tiene una versión actualizada.

+ tambien se establecio el uso de las librerias van con la forma #include seguido de la libreria a usar y la mas comun en C es <stdio.h>

# Clase 7

**Tema: Hola mundo**

El primer tema realizado en el curso es el Hola mundo el cual se compilo de la siguiente forma como se muestra en el codigo de ejemplo:

> code ;

```c

include <stdio.h>

int main()
{
    printf("Hello world dilan\n") ;
    return 0 ;
}
```

# Clase 8

**Tema: Variables y palabras reservadas**

En los lenguajes informáticos, una palabra reservada es una palabra que tiene un significado gramatical especial para ese lenguaje y no puede ser utilizada como un identificador de objetos en códigos del mismo, como pueden ser las variables, un ejemplo de ello seria:

+ auto
+ else
+ long
+ switch
+ break
+ enum
+ register
+ typede
+ case
+ extern
+ return
+ union
![VSC2](https://i.ytimg.com/vi/6KWUfVME9fU/maxresdefault.jpg)

y como ejemplo de variables estan:

+ > code;

```c

int main(void)
void combinSR ()
int num, a, b;

```

# Clase 9

**Tema: Tipos, operadores y expresiones y estructura general de un programa**

Las expresiones son combinaciones de constantes, variables y operadores de diferentes tipos que nos permiten manipular datos para obtener información nueva. Los operadores aritméticos realizan operaciones equivalentes a las operaciones aritméticas básicas.

Y funciones como:

```c

printf("ingrese cantidad de signos: "); //funcion que imprime lo que dice entre las .comillas

scanf("%d", &numero); //funcion que escanea el valor dentro de las comillas.

if (i%2==0)
    printf("+ ");
else                //funcion que pregunta si´ entonces aplicando un condicional.
    printf("- ");

```
Funcionan de ejemplo paraa entender como son lo operadores y adentrarnos un poco mas a la programacion.

Hay diferentes espacion y tipos de tabulaciones que son útiles para mostrar mensajes en el momento
que se ejecuta un programa determinado, algunos principales utilizados en la programación son:
1. \a (caracter de alarma)
2. \f avance de hoja
3. \r (regreso de carro)
4. \v (tabulador vertical)
5. \b (retroceso)
6. \n (nueva linea)
7. \t (tabulador horizontal)


# Clase 10

**Tema: Algoritmia**

Desde el punto de vista informático un algoritmo es cualquier procedimiento computacional bien definido que parte de un estado inicial y un valor o un conjunto de valores de entrada, a los cuales se les aplica una secuencia de pasos computacionales finitos, produciendo una salida o solución.
Hay una serie de 4 pasos fundamentales que componen al tema de la algoritmia:

1. Pseudocógico
2. Diagrama de flujo
3. Código/Programa (C)
4. Trace (Prueba escrita en papel)

Un ejemplo de codigo conseguido con un proceso de algoritmia es el siguiente hecho en clase:

> code ;

```c
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
```

Con este codigo se puede conseguir el area de un rectangulo cuando ingresamos los valores que necesitamos.

# Clase 11

**Tema: Errores y Bugs**

Como se tiene el conocimiento los errores que existen a la hora de programar son los errores de compilacion que son los mas comunes y los errores logisticos que son mas dificiles de realizar o de encontrar cuando ocurren.
Para ello se realizan los anteriores pasos vistos en la clase 9 de algoritmia para entender en donde puede estar el error de un procedimiento fallido.
![bugs](https://as01.epimg.net/meristation/imagenes/2022/04/28/betech/1651169626_299050_1651169726_noticia_normal_recorte1.jpg)

# Clase 12

**Tema: Bucles y loops**

Un bucle es una secuencia que repite varias veces un mismo trozo de código, hasta que la condición asignada al bucle deja de cumplirse. Los bucles más comunes son

> code ;

```c

for(b=1; b <= num; b++) //Bucle en forma de for
while( !f.() ) //Bucle en forma de while

```

Un ejemplo de codigo usando Bucles es:

> code ;

```c
#include <stdio.h>

int main()
{
    int a=0, b=0, esc=0;
    printf("ingrese el numero de escalones que desea: ");
    scanf("%i", &esc);

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
```

Con esta forma de codigo se puede conseguir una escalera. 

# Clase 13

**Tema: Procedimientos y funciones de extraccion**

Mediante un set de series, el cual contiene un conjunto finito de valores, se efectúa procesos con
entrada y salida.
Dada una "entrada" se ingresa un < tipo de dato > el cual tiene a priorir una "salida" .
Funciona para procedimientos tales como el uso del "void". Para una refactoriazación se debe verificar que el código funcione correctamente. La utilización de parámetros da lugar a que las variables compilen y funciones adecuadamente. Al realizar una secuenca, se sigue los siguientes pasos:

1. Guardar
2. Compilar
3. Ejecutar

# Clase 14

**Tema: Arrays**

Un array, es un tipo de dato estructurado que permite almacenar un conjunto de datos homogeneo, es decir, todos ellos del mismo tipo y relacionados. Cada uno de los elementos que componen un vector pueden ser de tipo simple como caracteres, entero o real, o de tipo compuesto o estructurado como son vectores, estructuras, listas...

Al guardar se debe usar de preferencia las siguientes instrucciones según amerite el caso:
1. Int (entero)
2. Float (flotante)
3. Char (caracter)

Si se desea usar un array, se puede desarrollar mediante los siguientes pasos:
1. int A[5];
2. for (int i=0; i < 5; i++)
3. A[i] = 0;

> code ;

```c
void Matrizinicial()
{
    char inicialN[6][6]
}
```

# Clase 15

**Tema: Matrices**

Un arreglo (matriz) es una colección ordenada de datos (tanto primitivos u objetos dependiendo del lenguaje). Los arreglos (matrices) se emplean para almacenar multiples valores en una sola variable, frente a las variables que sólo pueden almacenar un valor (por cada variable).

+ El array es fundamental para la creación de matrices en el lenguaje de C, además de lenguajes afines al
ya mencionado.

Se crea una matriz, pero solo se crean diagonales, tanto una principal como secundaria para dar lugar a una tarea que consiste en crear una letra con matrices, en función al nombre del usuario como se observa en el codigo a continuacion.

> code ;

```c
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
```

# Clase 16

**Tema: Strindex**

El streamdex lo que realiza es buscar la posicion de una cadena de caracteres en otra cadena Ejemplo del uso del strindex: Al tener almacenado en una variable la palabra "papu", se puede optar por guardarle en strindex.
El caracter que se busque en strindex, se da dado su posición Al colocar una linea como en charline "123", este busca esos tres primeros caracteres ya mencionados en la variable ingresada en el strindex, de tal forma que en "papu", solo te despliega "pap".

![strindex](/files/Screenshot_2.jpg)

# Clase 17

**Tema: Workshop**

No se realizo codigo o explicacion de clase, se realizo en grupos un workshop en el cual constaba un trabajo grupal para poder presentar en las 2 horas de clase el cual constaba con todas las enseñanzas del curso en grupo.
![ws](https://centrodenegocioszaragoza.es/wp-content/uploads/2022/04/organizacion-workshop.jpg)

# Clase 18

**Tema: Correccion del workshop y arrays**

En esta clase se realizo la correccion de el wworkshop de la anterior clase.
Como puntos importantes se podria tomar como:
+ Empleo de arrays y matrices internas para una posterior ejecución eficaz del programa.

+ Uso de las librerías comunes tratadas en otras clases para empezar con el tema de funciones.

+ Se utiliza varios bloques de códigos para efecturar una operación.

+ Las funciones reciben
elementos de entrada y también pueden devolver un valor como salida.
![ws2](https://pleybast.com/wp-content/uploads/2022/01/Workshop-%C2%BFQue-es-y-como-hacer-uno-Objetivos.png)

# Clase 19

**Tema: introduccion a C++**

Es un lenguaje de programación que proviene de la extensión del lenguaje C para que pudiese manipular objetos. A pesar de ser un lenguaje con muchos años, su gran potencia lo convierte en uno de los lenguajes de programación más demandados.

+ En la ejecución bash, se utiliza en lugar de "gcc namefile.c", el "g++ namefile.cpp".
+ La librería que se debe usar en el lenguaje C++ de forma principal es la #include< iostream >, la cual es
fundamental en el desarrollo de programas.

Ejemplos de codigos en c++, proceso para una conbinatoria.

> code ;

```c++
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
```

# Clase 20

**Tema: Archivos y funcionalidad**

Los archivos o ficheros son la forma en la que C++ permite el acceso al disco. Todos los procesos tienen abiertos, por defecto, los archivos 0(entrada), 1(salida) y 2(salida de errores), de manera que en C++ se corresponden con los objetos cin, cout y cerr.

Para el procedimiento de archivos en la clase se aprendieron dos funcionalidades:

+ la de sobreescribir el archivo

> code ;

```c++
#include <iostream>     // entradas salidas en consola y string
#include <fstream>      // manejo de archivos
using namespace std;

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
```

+ La de leer un archivo

> code ;

```c++
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
```

# Clase 21

**Tema: petshop**

Se crea una lista txt y un menu para poder agregar los siguientes datos y usarlos para interactuar con un menu comun.

1. Agregar Mascota
2. Listar la mascota
3. Vender dicha mascota
4. Salir

Lo anteriormente enlistado, estará vinculado con el programa de C++, además de la lista de mascotas. En el apartado de mascota se puede ingresar además del nombre, también se enlista el precio y edad de la mascota.
