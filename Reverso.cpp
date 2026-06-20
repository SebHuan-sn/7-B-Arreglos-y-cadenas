#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int devol[1002];
  for(int i=0; i<n; i++){
    cin>>devol[i];
  }
  for(int i=n-1; i>=0; i--){
    cout<<devol[i]<<" ";
  }
  return 0;
}