
#include <iostream>

using namespace std;

int main (){
    cout << " -- ARREGLO NUMERO PARES --" << endl;
    int tamano = 0;
    cout << "Ingrese el size del arreglo que necesita: ";
    cin >> tamano;

    int num [tamano];
    int par [tamano];
    int j = 0;

    for (int i=0; i < tamano; i++)
    {    
    cout << "Ingrese un numero entero: ";
    cin >> num [i];
    
    if (num[i]%2==0 )
    {
        par [j] = num [i];
        j++;
    } 

    }
    cout << "El arreglo original es " << endl;

    for (int i = 0; i < tamano; i++ )
    {
        cout << num [i] << endl;
    }
    cout << "El arreglo de pares es: " << endl;

    for (int k = 0; k < j; k++)
    {
        cout << par [k] << endl;
    }



    return 0;
}