#include <iostream>
using namespace std;

float media (float entero1, float entero2) {
int resultado = 0;
resultado = ((entero1 + entero2)/2);

return resultado;
}


int main (){
    float n1 = 0, n2 = 0, respuesta = 0;

    n1 = 8;
    n2 = 6;

    respuesta = media (n1, n2);
    cout << "La MEDIA de los dos numeros es " << respuesta << endl;

}