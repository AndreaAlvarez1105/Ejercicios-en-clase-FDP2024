#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

using namespace std;

int main (){

    string nombrearchivo = "archivo.txt";
    ofstream archivo;

    archivo.open(nombrearchivo.c_str(), fstream :: app);
    archivo << "Instrumentos: " << endl;
    archivo << "guitarra"<< endl;

    archivo.close();
    cout << "listo";

    return 0;
}