#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,f;
  cin>>n>>m;
  string a[n],b[n];
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  for(int i=0;i<m;++i){
    cin>>b[i];
  }

  for(int i=0;i<n-m+1;++i){
    for(int j=0;j<n-m+1;++j){
      cout<<"!"<<endl;
      bool flag = true;
      for(int k=0;k<m;++m){
        string tmp = a[i+k].substr(j,m);
        if(tmp != b[k]){
          flag = false;
          break;
        }
      }
      if(flag){
          cout<<"Yes"<<endl;
          return 0;
      }
    }
  }
  cout<<"No"<<endl;
  cout<<a[1]<<endl;
  cout<<b[1]<<endl;
  return 0;
}
