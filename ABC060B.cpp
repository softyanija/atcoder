#include <bits/stdc++.h>
using namespace std;
int main (){
  int a,b,c,d=1;
  cin>>a>>b>>c;
  if(a==1 || b==1){
    cout<<"YES";
    return 0;
  }
  for(int i=2;i<min(a,b)+1;++i){
    if(a%i==0 && b%i==0){
      d = i;
    }
  }
  if(d==1){
    cout<<"YES";
    return 0;
  }
  if(c%d==0){
    cout<<"YES";
    return 0;
  }
  else{
    cout<<"NO";
    return 0;
  }
}
