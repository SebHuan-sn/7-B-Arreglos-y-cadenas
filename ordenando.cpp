#include<iostream>
using namespace std;

int main(){
    cout << "========================================" << endl;
    cout << "   ORDENADOR ALFABETICO DE LINEAS (F)   " << endl;
    cout << "========================================" << endl;
    cout << "Ingrese la linea de texto a ordenar: " << endl;
    char frase[103];
    cin.getline(frase, 103);

    char letterpure[103];
    int cant=0;
    for(int i=0; frase[i]!='\0'; i++){
        if(frase[i]>='a' && frase[i]<='z'){
            letterpure[cant++]=frase[i];
        }
    }
    cout << "----------------------------------------" << endl;
    cout << "Resultado con las letras ordenadas:" << endl;
    cout << "----------------------------------------" << endl;
    for(int i=0; i<cant-1; i++){
        for(int j=0; j<cant-i-1; j++){
            if(letterpure[j]>letterpure[j+1]){
                char aux=letterpure[j];
                letterpure[j]=letterpure[j+1];
                letterpure[j+1]= aux;   
            }
        }
    }
    int indi=0;
    for(int i=0; frase[i]!='\0'; i++){
        if(frase[i]==' '|| frase[i]==','){
            cout<<frase[i];
        }
        else{
            cout<<letterpure[indi++];
        }
    }
    cout << "\n========================================" << endl;
    return 0;
}