#include <iostream>
using namespace std;
int main () {

    int numeros[100], total = 0;  

for (int i = 0; i < 100 ; i++){
    numeros[i]=  1 + i;

    total = total + numeros[i];

    }
cout << "Suma " << total;
return 0;
}