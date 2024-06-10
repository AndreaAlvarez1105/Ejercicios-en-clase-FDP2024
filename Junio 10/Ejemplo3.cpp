//Espacio de memoria en puntero &
//Espacio de memoria en puntero *

#include <iostream>
using namespace std;

int main (int argc, char * argv[])
{
    int x;
    int *apuntador = &x; //Creamos un apuntador a la mexcla x
    cout << "Ingrese su edad: ";
    cin >> *apuntador; //Almacenamos en la memoria el dato
    
    if (*apuntador >= 18)
    {
    cout << "Usted es mayor de edad ";
    cout << *apuntador;

    }
   
    delete [] apuntador; //Despues de operar con punteros es necesario liberar la memoria.
    apuntador = NULL;

    cout << "El espacio de memoria es: " << &apuntador << endl;
    
    return 0;

}