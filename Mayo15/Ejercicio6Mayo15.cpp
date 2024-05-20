//Considere que está desarrollando una para empresa que trabaja con tipos de motor 
// (suponemos que se trata del tipo de motor de una bomba para mover fluidos). 
// Defina una variable que se llame: tipoMotor . Los valores posibles son 0,1, 2, 3, 4. 

#include <iostream>
using namespace std;

int main ()
{
    int tipoMotor;
    
    cout << "TIPOS DE MOTOR DE UNA BOMBA PARA MOVER FLUIDOS" << endl;

    cout << "Ingrese el valor del tipo de motor que requiere: ";
    cin >> tipoMotor;

    switch (tipoMotor)
    {
        case 0:
            cout<< "No esta establecido un valor definido para el tipo de bomba" << endl;
            break;
    
        case 1:
            cout << "La bomba es una bomba de agua." << endl;
            break;
    
        case 2:
            cout << "La bomba es una bomba de gasolina." << endl;
            break;
        
        case 3:
            cout << "La bomba es una bomba de hormigón. " << endl;
            break;

        case 4: 
            cout << "La bomba es una bomba de pasta alimenticia. " << endl;
            break;
        
        default:
            cout <<"No existe un valor valido para tipo de bomba" << endl;
            break;
    }


return 0;
}
