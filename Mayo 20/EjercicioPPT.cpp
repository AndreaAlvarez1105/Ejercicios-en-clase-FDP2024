#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int valora = 1;
    int maquina = 1;
    int intentos = 3;

    maquina = 1 + rand() % 3;
    do
    {
        cout << "JUEGO PIEDRA, PAPEL Y TIJIERA" << endl;
        cout << "Elija su primer movimiento: " << endl;
        cout << "1 - Piedra" << endl;
        cout << "2 - Papel" << endl;
        cout << "3 - Tijera" << endl;
        cin >> valora;

        if (valora == maquina)
        {
            cout << "Es un empate. La maquina eligio " << maquina << endl;
        }
        else if (((valora == 1) && (maquina == 3)) || ((valora == 2) && (maquina == 1)) || ((valora == 3) && (maquina == 3)))
        {
            cout << "La maquina eligio " << maquina << " Felicidades, usted ha ganado. Felicidades." << endl;
        }
        else if (((valora == 1) && (maquina == 2)) || ((valora == 2) && (maquina == 3)) || ((valora == 3) && (maquina == 1)))
        {
            cout << "La maquina eligio " << maquina << " Usted ha perdido. Suerte a la proxima." << endl;
        }

        intentos--;
    } while (intentos > 0);

    return 0;
}