#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,i,j,sum;
  int t[100],p[100],x[100];
  cin>>n;
  for(i=0;i<n;++i){
    cin>>t[i];
  }
  cin>>m;
  for(i=0;i<m;++i){
    cin>>p[i]>>x[i];
  }
  for(i=0;i<m;++i){
    sum=0;
    for(j=0;j<n;++j){
      if(j==p[i]-1) sum+=x[i];
      else sum+=t[j];
    }
    cout<<sum<<endl;
  }
  return 0;
}
