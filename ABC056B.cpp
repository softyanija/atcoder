#include <bits/stdc++.h>
using namespace std;
int main(){
  int w,a,b,c;
  cin>>w>>a>>b;
  c=a-b;
  if(abs(c)<=w){
    cout<<"0";
  }
  else{
    cout<<abs(c)-w;
  }
  return 0;
}
