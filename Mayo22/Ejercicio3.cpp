#include <iostream>
using namespace std;

int main ()
{
    float notas[6];
    string nombre;
    float promedio;

    cout << "PROGRAMA CALCULO DE PROMEDIO DE NOTAS" << endl;
    cout <<"Ingrese su nombre: " << endl;
    cin >> nombre;


    for (int i = 0; i < 6; i++){
        cout <<"Introduzca la nota " << i+1 <<": " << endl;
        cin >> notas[i];
    }

   
   
    promedio = (notas [0] + notas [1] + notas [2] + notas [3] + notas [4] + notas [5]) /6;
        
    cout << nombre << ", su promedio es: " << promedio << endl;
    

    return 0;
}