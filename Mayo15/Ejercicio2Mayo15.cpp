//Escriba un programa que al ingresar la edad de un usuario y que indique si es mayor de edad o no.

#include <iostream>

using namespace std;

int main ()

{

    int edad = 0;

    cout << "PROGRAMA PARA VERIFICAR LA MAYORIDAD DE EDAD \n";
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <0)
    {
        cout << "El dato ingresado no esta permitido.";
    } 
    else if (edad >= 18){
        cout << "Usted es mayor de edad";
    } else 
    {
        cout << "Usted no cumple con la mayoridad de edad.";
    }



    return 0;
}
