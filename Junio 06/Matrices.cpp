//<Tipo de datoElemento> <nombre array> [<Número de filas>]

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{

    int numeros [100][100], filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;

    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    //Rellenado de la matriz
    for (int i = 0; i <filas;i++)
    {
        for (int j =0; j< columnas; j++)
        {
            cout << "Digite un número [" << i << "][" << j << "]";
            cin >> numeros [i][j];
        }
    }
    
    cout << "\nMostrando matriz\n\n";

    for (int i = 0; i <filas;i++)
    {
        for (int j =0; j< columnas; j++)
        {
            cout << numeros[i][j];
            cout << "|";
        }
        cout << "\n";
    }

    getch();

    return 0;
}