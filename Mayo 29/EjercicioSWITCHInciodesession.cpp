// CHRISTIAN-LOPEZ/GUIaFundamentosProgramacion
#include <iostream>
using namespace std;

int main (){
    int menu = 0;
    string nombre [100] = {};
    int edad [100] = {};
    string usuario [100] = {};
    string contrasena [100] = {};
    int indiceUsuario = 0;
    string usuarioTemporal = 0;
    string contrasenatemporal = 0;
    bool iniciosesion;


   
    do {
    cout << "-- Menu de INICIO DE SESION -- " << endl;
    cout << "1. Inicio de sesion \n 2. Registro \n 3. Salir \n";
    cin >> menu;


    switch (menu)
    {
        case 1:
            cout << "Ingrese nombre de usuario: ";
            cin >> usuarioTemporal;

            for (int i = 0; i<100; i++) {
                if (usuarioTemporal == usuario [i]) {
                    cout << "Ingrese su contrasena"; 
                    cin >> contrasenatemporal;

                    if (contrasenatemporal == contrasena [i]) {
                        iniciosesion = true;
                    }
                }
            }
            if (iniciosesion == false) {
                cout << "Usuario no existe! " ;
            }

            if (iniciosesion == true) {
                cout << "Bienvenido";
            }
            
            break;

        case 2:
            cout << "Ingrese nombre completo: " ;
            cin >> nombre [indiceUsuario];
            cout << "Ingrese su Edad: " ;
            cin >> edad [indiceUsuario];
            cout << "Ingrese nombre de usuario: " ;
            cin >> usuario [indiceUsuario];
            cout << "Ingrese contrasena: " ;
            cin >> contrasena [indiceUsuario];

            break;

        case 3:
            break;

    }
    } while (true);
    
    
    return 0;
}