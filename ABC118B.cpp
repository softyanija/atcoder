#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int k,a;
  int r[n][m];
  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      r[i][j]=0;
    }
  }
  for(int i=0;i<n;++i){
    cin>>k;
    for(int j=0;j<k;++j){
      cin>>a;
      r[i][a-1]=1;
    }
  }
  int ans=0;
  bool flag;
  for(int j=0;j<m;++j){
    flag = true;
    for(int i=0;i<n;++i){
      if(r[i][j]==0){
        flag = false;
      }
    }
    if(flag){ ans++; }
  }
  cout<<ans;
}
