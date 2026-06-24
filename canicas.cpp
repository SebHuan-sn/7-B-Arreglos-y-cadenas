#include <iostream>

using namespace std;

int contavasos[1000010];

int main() {
    int vasos, canicas;
    
    // Solicitamos los datos principales con estilo
    cout << "========================================" << endl;
    cout << "            CONTEO DE CANICAS           " << endl;
    cout << "========================================" << endl;
    cout << "Ingrese la cantidad de vasos (N): ";
    cin >> vasos;
    cout << "Ingrese la cantidad de canicas a lanzar (C): ";
    cin >> canicas;
    cout << "----------------------------------------" << endl;

    cout << "Por favor, introduzca el numero de vaso donde cayo cada canica:" << endl;
    for (int i = 0; i < canicas; i++) {
        int vasocayo;
        cout << "Canica #" << (i + 1) << " cayo en el vaso: ";
        cin >> vasocayo;
        contavasos[vasocayo]++;
    }

    cout << "----------------------------------------" << endl;
    cout << "RESULTADOS FINALES (Canicas por vaso):" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 1; i <= vasos; i++) {
        cout << "Vaso " << i << " contiene: " << contavasos[i] << " canicas" << endl;
    }
    cout << "========================================" << endl;

    return 0;
}