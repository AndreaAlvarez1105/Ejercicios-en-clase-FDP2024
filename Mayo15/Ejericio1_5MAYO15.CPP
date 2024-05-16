
#include <iostream>

using namespace std;

int main ()
{

    float angulo1 = 0.00; 
    float angulo2 = 0.00;
    float resultado = 0.00;
    
    cout << "PROGRAMA PARA CALCULAR EL TERCER ANGULO DE UN TRIANGULO" << '\n';
    cout << "Ingrese el primer angulo del triangulo: "<< '\n';
    cin >> angulo1;

    cout << "Ingrese el segundo angulo del triangulo: " << '\n';
    cin >> angulo2;
    
    if ((angulo1 <0||angulo2<0)||(angulo1> 180||angulo2 > 180))
    {
        cout << "Uno de los angulos ingresado no esta permitido \n";

    } else 
    {
        resultado = 180 - angulo1 - angulo2;
        cout << " El valor del tercer angulo es " << resultado << '\n';
    }

        
    return 0;

}