// P001.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
/*
MACROS
-------
Um MACRO é um NOME que representa um VALUE ou uma FUNCIONALIDADE ele é executado antes
da compilacao

Ao definir um nome e.g. HELLO_RUFO e associar ao string "Hola Rufo"
     #define HELLO_RUFO "Hola Rufo"
apartir dai ao chamar HELLO_RUFO será chamado o string "Hola Rufo"

Da mesma forma ao asociar o NOME SUMA(a,b) e associar a funcionalidade (a+b)
    #define SUMA(a,b) (a+b)
ao chamar SUMA(a,b) será retornado o valor.

Para eliminar o MACRO se usa #undef
    #undef HELLO_RUFO
    #SUMA(a,b)

CONDITIONAL COMPILATION
-----------------------
Se depois de utilizar #undef HELLO_RUFO tentamos chamar HELLO_RUFO teremos um erro de compilacao.
Uma forma de contornar isso é utilizar #ifdef junto com #endif, se HELLO_RUFO foi definido com 
#define entao é exucutado o codigo.

    #ifdef HELLO_RUFO
        std::cout << HELLO_RUFO << "\n";
    #endif

Outra forma é utilizar #ifndef junto com #endif, se HELLO_RUFO NAO foi definido com 
#define , (ou foi definido porem depois foi deletado com #undef) entao é exucutado o codigo.

    #ifdef HELLO_RUFO
        std::cout << HELLO_RUFO << "\n";
    #endif

    OU SEJA dentro das sentencias NAO SERA COMPILADO caso nao cumpra com o #ifdef ou #ifndef

CONDITIONAL IN CONSTANT EXPRESSIONS
------------------------------------
Uma expressao constante é aquela que o valor é determinado em tempo de compilacao
Ao definir com um valor #define value este valor pode ser utilizado por #if #else #elif 

#definr LEVEL 3   

#if LEVEL == 0
    #define SCORE 0
#else
#if LEVEL == 1
    #define SCORE 15
#endif
#endif

Outra forma utilizando #elif seria 

#if LEVEL == 2
    #define SCORE 30
#elif LEVEL == 3
    #define SCORE 45
#endif

Assim pode se associar o valor SCORE com a definicao de LEVEL

#ifdef SCORE
    std::cout << SCORE
#endif


*/

#define HELLO_RUFO "Hola Rufo"
#define SUMA(a,b) (a+b)
int main()
{
#ifdef HELLO_RUFO
    std::cout << HELLO_RUFO << " HELLO_RUFO foi definido\n";
#endif  HELLO_RUFO

#undef HELLO_RUFO

#ifndef HELLO_RUFO
    std::cout << "HELLO_RUFO foi deletado\n";
#endif  HELLO_RUFO

    
    
    
    //std::cout << SUMA(3,4) << "\n";
       
    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
