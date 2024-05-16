//Desarrolle un programa que considere las siguientes reglas: Un ángulo se considera agudo si es menor de 90°, 
// obtuso si es mayo de 90° y recto si es igual a 90°.
// El programa debe de solicitarle a un usuario que ingrese un ángulo en grados y
// que le muestre un mensaje de que tipo de ángulo es.

#include <iostream> 

using namespace std;

int main ()
{
    float angulos = 0.00;
    cout << "CLASIFICADOR DE ANGULOS" << '\n';
    cout << "Ingrese su angulo en grados: " << '\n';
    cin >> angulos;

    if ((angulos <0))
    {
        cout <<"El valor ingresado no esta permitido";
    } else if ( angulos < 90){
        cout <<"El angulo ingresado es AGUDO.";
    } else if (angulos > 90) {
        cout << "El angulo ingresado es OBTUSO.";
    } else if (angulos == 90){
        cout << "El angulo ingresado RECTO. ";
    }

     return 0;   

}