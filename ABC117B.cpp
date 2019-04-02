#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,max=0,i,sum=0;
  cin>>n;
  int l[n];
  for(i=0;i<n;++i){
    cin>>l[i];
  }
  for(i=0;i<n;++i){
    if(l[i]>max) {max = l[i];}
    sum+=l[i];
  }
  if(sum-max>max){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}
