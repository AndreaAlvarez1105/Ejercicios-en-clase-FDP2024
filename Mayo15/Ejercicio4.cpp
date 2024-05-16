//Realice un programa que ingresando las notas de 6 evaluaciones. Que calcule
//el promedio final de la materia y le indique si paso o no la materia. Utilizando
//los siguientes porcentajes para evaluar.
//Debe de solicitarle al usuario que ingrese su nombre y cada nota de la evaluación.


#include <iostream>

using namespace std;

int main ()
{
    string nombre;
    float corto1;
    float corto2;
    float parcial1;
    float parcial2;
    float laboratorio;
    float proyecto;
    float notafinal;


    cout <<"CALCULADOR DE PROMEDIO FINAL DE LA MATERIA \n";

    cout << "Ingrse su nombre: ";
    cin >> nombre;

    cout << "Ingrese la nota obtenida en el corto 1:  \n";
    cin >> corto1;
    cout << "Ingrese la nota obtenida en el corto 2:  \n";
    cin >> corto2;
    cout << "Ingrese la nota obtenida en el pimer parcial:  \n";
    cin >> parcial1;
    cout << "Ingrese la nota obtenida en el segundo parcial:  \n";
    cin >> parcial2;
    cout << "Ingrese la nota obtenida en el laboratorio:  \n";
    cin >> laboratorio;
    cout << "Ingrese la nota obtenida en el proyecto:  \n";
    cin >> proyecto;


    notafinal = ((corto1 * 0.1)+(corto2*0.1)+(parcial1*0.15)+(parcial2*0.20)+(laboratorio*0.20)+(proyecto*0.25));
    cout << nombre << ", su nota final es " << notafinal<< '\n';

    if (notafinal>=6){
     cout << "Felicidades usted ha pasado con exito la materia" << '\n';   
    } 
    else {
        cout << "Usted no alcanzo el minimo de la nota para aprobar, siga trabajando.";
    } 

    return 0;
}