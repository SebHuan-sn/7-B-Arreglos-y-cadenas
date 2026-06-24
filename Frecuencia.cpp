#include<iostream>

using namespace std;
int main(){
    int p, n;
    cout<<"Ingrese la cantidad de profesores: "<<endl;
    cin>>p;
    cout<<"Ingrese la cantidad de alumnos: "<<endl;
    cin>>n;
    int votos[102]={0};
    cout<<"Ingrese los "<<n<<"votos de los alumnos"<<endl;
    for(int i=0; i<n; i++){
        int votoprim;
        cout<<"Voto del alumno "<<(i+1)<<": ";
        cin>>votoprim;
        votos[votoprim]++;
    }
    cout << "----------------------------------------" << endl;
    cout << "TABLA DE FRECUENCIAS (Resultados):" << endl;
    for(int i=1; i<=p; i++){
        cout<<"Profesor nro "<<i<<"->"<<votos[i]<<" votos"<<endl;
    }
    return 0;
}