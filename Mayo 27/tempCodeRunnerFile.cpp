#include <iostream>

using namespace std;

int main (){
    cout << " -- ARREGLOS --" << endl;
    int tamaño = 0;
    cout << "Ingrese el tamaño del arreglo que necesita: ";
    cin >> tamaño;

    int num [tamaño];
    int par [tamaño];
    int j = 0;

    for (int i=0; i < tamaño; i++)
    {    
    cout << "Ingrese un numero entero: ";
    cin >> num [i];
    
    if (num[i]%2==0 )
    {
        par [j] = num [i];
        j++;
    } 

    }
    cout << "El arreglo original es " << num << endl;

    for (int i = 0; i < tamaño; i++ )
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