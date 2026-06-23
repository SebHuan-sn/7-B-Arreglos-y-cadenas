#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // Añadimos el tamaño para que no rompa el arreglo estático de 1002
  if (n <= 0 || n > 1000) {
    cout << "Tamaño no valido" << endl;
    return 1; 
  }

  int devol[1002];
  for(int i=0; i<n; i++){
    cin >> devol[i];
  }

  // Imprimir en reverso con saltos de línea claros
  for(int i=n-1; i>=0; i--){
    cout << devol[i] << "\n";
  }

  return 0;
}