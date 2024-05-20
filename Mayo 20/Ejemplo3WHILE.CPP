#include <iostream>
using namespace std;

int main ()
{
    int numero=0;
    int factorial = 1;

    cout << "-- PROGRAMA PARA CALCULAR EL FACTORIAL DE UN NUMERO -- " << endl;
    cout<< "Ingrese un numeor entero: ";
    cin >> numero;

    if (numero <0)
    {
        cout << "El factorial de un numero negativo no existe" << endl;
    } 
    else {
        cout << "El factorial del numero " << numero << " es: ";
        while (numero>0)
        {
            factorial = factorial * numero;
            numero--;
        }
        cout << factorial;

    }

return 0;

}
