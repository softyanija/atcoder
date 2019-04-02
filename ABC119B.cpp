#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  cin>>n;
  double x[n];
  double sum=0;
  string u[n];
  for(i=0;i<n;++i){
    cin>>x[i]>>u[i];
  }
  for(i=0;i<n;++i){
    if(u[i]=="JPY"){
      sum += x[i];
    }
    else{
      sum += x[i]*380000.0;
    }
  }
  cout<<sum;
}
