#include <iostream>
using namespace std;

int main ()
{
    int numero = 0;
    int Indicepares = 0;
    int Indiceimpares = 0;
    int Par [100] = {};
    int Impar [100]= {};

    do
    {
        cout << "Ingrese un numero:   -- (digite 0 para salir)---";
        cin >> numero;

        if ((numero%2 == 0) && (numero !=0))
        {
            Par [Indicepares] = numero;
            Indicepares++;
        }
        else 
        {
            Impar [Indiceimpares] = numero;
            Indiceimpares++; 
        }


    } while (numero !=0);

    cout << "Resultados: \n\n";
    cout << "Cantidad de pares: " << Indicepares << endl;
    cout << "Cantidad de impares: " << Indiceimpares << endl;


    for (int i = 0; i <= Indicepares; i++)
    {
        cout << Par[i] << " ";
    }

    for (int j = 0; j< Indiceimpares; j++)
    {
        cout << Impar [j] << " ";
    }
    
    

return 0;

}