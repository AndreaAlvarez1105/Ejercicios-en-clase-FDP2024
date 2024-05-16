
#include <iostream>

using namespace std;

int main ()
{
    string nombretrabajador;
float horastrabajo, salariobruto, salarioliquido;


    cout <<"Ingrese su nombre: "<< '\n';
    cin >> nombretrabajador; 
    cout <<"Ingrese la cantidad de horas trabajadas: "<< '\n';
    cin >> horastrabajo;
    
    if (horastrabajo <= 160)
    {
        cout <<"Su salario sin impuesto es " << horastrabajo*10 << '\n';
        cin >> salarioliquido;

        }else {
            cout << "Su salario sin impuesto es " << horastrabajo*10*1.5 << '\n';
        cin >> salarioliquido;
        
    }
    
    float impuesto;

    if (salarioliquido<=2000)
    {
        cout << nombretrabajador << ", su salario es libre de impuestos, su salario es " << salarioliquido << '\n';
    } else if (salarioliquido>=2000) { 
        impuesto = salarioliquido*0.2;
        cin >> salariobruto;
        cout << nombretrabajador << ", su salario con impuesto es " << salariobruto << '\n';
  
    } else {
        impuesto = salarioliquido*0.3;
        cin >> salariobruto;
        cout << nombretrabajador << ", su salario con impuesto es " << salariobruto << '\n';
    }




    return 0;

}
