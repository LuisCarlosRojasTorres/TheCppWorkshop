// TestVector.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>

void printVector(std::vector<int> v) {
    for (int e : v) {
        std::cout << e << " - ";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> myVector = { 1,2,3,4,5 };
    printVector(myVector);
    
    myVector.pop_back(); //delete last element i.e 5
    printVector(myVector);
    
    myVector.push_back(6); //add 6 at the end of the vector 
    printVector(myVector);

    //Insert and Erase use iterators to work,
    // an iterator is an object that points to items 

    //begin() returns an iterator pointing to the fisrt element in the vector
    myVector.insert(myVector.begin()+2,7); //7 is inserted in third position
    printVector(myVector);

    myVector.erase(myVector.begin() + 3); // the fourth element is deleted i.e. 3
    printVector(myVector);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
