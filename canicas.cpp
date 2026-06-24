#include <iostream>

using namespace std;

// Creamos el arreglo AQUÍ AFUERA (global). 
// Lo hacemos de 1000005 para asegurarnos de que quepan los 1,000,000 de vasos.
// Al declararlo aquí afuera, C++ automáticamente lo llena de CEROS.
int contavasos[1000005];

int main() {
    int vasos, canicas;
    cin>>vasos>>canicas;

    for (int i = 0; i < canicas; i++) {
        int vasocayo;
        cin>>vasocayo;
        
        contavasos[vasocayo]++;
    }

    for (int i = 1; i <= vasos; i++) {
        cout<<contavasos[i] << "\n";
    }

    return 0;
}