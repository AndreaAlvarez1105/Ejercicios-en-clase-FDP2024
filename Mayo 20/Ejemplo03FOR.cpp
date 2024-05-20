
#include <iostream>
using namespace std;

int main ()
{
    int numero;

    cout << "-- PROGRAMA PARA CALCULAR EL FACTORIAL DE UN NUMERO -- " << endl;
    cout<< "Ingrese un numeor entero: ";
    cin >> numero;

    if (numero <0)
    {
        cout << "El factorial de un numero negativo no existe" << endl;
    } 
    else {
    int factorial = 1;
        for (int i = numero; i>= 1;i--)
        factorial *= i;
        cout << "El facorial de "<< numero << " es " << factorial << endl;

    }

return 0;

}
