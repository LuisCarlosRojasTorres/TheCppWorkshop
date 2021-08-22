// P001.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
/*
Um MACRO é um NOME que representa um VALUE ou uma FUNCIONALIDADE

Ao definir um nome e.g. HELLO_RUFO e associar ao string "Hola Rufo"
     #define HELLO_RUFO "Hola Rufo"
apartir dai ao chamar HELLO_RUFO será chamado o string "Hola Rufo"

Da mesma forma ao asociar o NOME SUMA(a,b) e associar a funcionalidade (a+b)
    #define SUMA(a,b) (a+b)
ao chamar SUMA(a,b) será retornado o valor.

Para eliminar o MACRO se usa #undef
    #undef HELLO_RUFO
    #SUMA(a,b)
*/

#define HELLO_RUFO "Hola Rufo"
#define SUMA(a,b) (a+b)
int main()
{
    //std::cout << HELLO_RUFO << "\n";
    std::cout << SUMA(3,4) << "\n";

#undef SUMA(a,b)
    std::cout << SUMA(5, 6) << "\n";
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
