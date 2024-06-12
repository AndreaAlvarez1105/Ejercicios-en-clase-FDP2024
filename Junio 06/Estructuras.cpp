#include <iostream>
using namespace std;

struct datosPersona {
    string nombre;
    char inicial;
    int edad;
    float nota;
};

int main (){
    datosPersona persona;
    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 9;
    cout << persona.nombre;

    return 0;
}