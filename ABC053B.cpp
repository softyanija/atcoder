#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int i,n,a=0,b=0;
  cin>>s;
  n = s.length();
  for(i=0;i<n;++i){
    if(s[i]=='A') {a=i; break;}
  }
  for(i=n-1;i>=0;--i){
    if(s[i]=='Z') {b=i; break;}
  }
  cout<<b-a+1;
}
