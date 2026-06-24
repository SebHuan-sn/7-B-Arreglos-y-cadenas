#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        char palabra[105];
        cin>>palabra;

        int t=0;
        while(palabra[t]!='\0'){
            t++;
        }
        
        bool espalin=true;
        for(int j=0; j<t/2; j++){
            if(palabra[j]!=palabra[t-1-j]){
                espalin=false;
                break;
            }
        }
        if (espalin==true){
            cout<<"P"<<endl;
        }
        else{
            cout<<"NP"<<endl;
        }
    }
    return 0;
}