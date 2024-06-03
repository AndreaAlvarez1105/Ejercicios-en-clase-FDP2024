#include <iostream>

using namespace std;

int main (){
    cout << " -- ARREGLO NUMERO IMPARES --" << endl;
    int tamano = 0;
    cout << "Ingrese el size del arreglo que necesita: ";
    cin >> tamano;

    int num [tamano];
    int impar [tamano];
    int j = 0;

    for (int i=0; i < tamano; i++)
    {    
    cout << "Ingrese un numero entero: ";
    cin >> num [i];
    
    if (num[i]%2==1 )
    {
        impar [j] = num [i];
        j++;
    } else {
        cout << "El numero ingresado es impar" << endl;
    }

    }
    cout << "El arreglo de impares es: " << endl;

    for (int k = 0; k < j; k++)
    {
        cout << impar [k] << endl;
    }



    return 0;
}