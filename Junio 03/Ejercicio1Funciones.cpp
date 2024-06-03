// 1. Declaramos las funciones antes del main, pero asi las varaibles soslo existen para la funcion
// 2. Antes del main, se hace la declaracion de la funcion, se hace el main, y hasta abajo se decalara las variables

// Librerias = conjunto de funciones.

#include <iostream>
using namespace std;

int suma(int entero1, int entero2) {
int resultado = 0;
resultado = (entero1 + entero2);

return resultado;
}

int resta(int entero1, int entero2) {
int resultadoresta = 0;
resultadoresta = (entero1 - entero2);

return resultadoresta;
}

int multiplicacion(int entero1, int entero2) {
int resultadomulti = 0;
resultadomulti = (entero1 * entero2);

return resultadomulti;
}

float division(float entero1, float entero2) {
float resultadodivision = 0;
resultadodivision = (entero1 / entero2);

return resultadodivision;
}

int main (){
    int n1 = 0, n2 = 0, respuesta = 0, respuestaresta = 0, respuestamulti = 0;
    float respuestadivision =0;

    n1 = 8;
    n2 = 6;

    respuesta = suma (n1, n2);
    cout << "La SUMA de los dos numeros es " << respuesta << endl;

    respuestaresta = resta (n1, n2);
    cout << "La RESTA de los dos numeros es " << respuestaresta << endl;

    respuestamulti = multiplicacion (n1, n2);
    cout << "La MULTIPLICACION de los dos numeros es " << respuestamulti << endl;

    respuestadivision = division (n1, n2);
    cout << "La DIVISION de los dos numeros es " << respuestadivision << endl;


    return 0;
}
