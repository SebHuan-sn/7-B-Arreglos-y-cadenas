#include<iostream>

using namespace std;
int main(){
    int p;
    int n;
    cin>>p>>n;
    int votos[102]={0};
    for(int i=0; i<n; i++){
        int votoprim;
        cin>>votoprim;
        votos[votoprim]++;
    }
    for(int i=1; i<=p; i++){
        cout<<i<<"-"<<votos[i]<<endl;
    }
    return 0;
}