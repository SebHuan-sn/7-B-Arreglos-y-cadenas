#include<iostream>
using namespace std;

int main(){
    char frase[103];
    cin.getline(frase, 105);
    char letterpure[103];
    int cant=0;
    for(int i=0; frase[i]!='\0'; i++){
        if(frase[i]>='a' && frase[i]<='z'){
            letterpure[cant++]=frase[i];
        }
    }
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
    cout<<"\n";
    return 0;
}