    #include<iostream>
    using namespace std;

    int main(){
        int n;
        cout << "Ingrese la cantidad de palabras a evaluar: ";
        cin >> n;
        cout << "----------------------------------------" << endl;
        for(int i=0; i<n; i++){
            cout << "Ingrese la palabra #" << (i + 1) << ": ";
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
            cout << "Resultado: "; 
            if (espalin==true){
                cout<<"P"<<endl;
            }
            else{
                cout<<"NP"<<endl;
            }
        }
        return 0;
    }