#include <bits/stdc++.h>
using namespace std;

char hoge(string s,int d){
  if(s[d] == 'a'){
    return 'a';
  }
  else if(s[d] == 'b'){
    return 'b';
  }
  else{
    return 'c';
  }
}

int main(){
  string A,B,C;
  char tem;
  int a,b,c,x=0,y=0,z=0;
  cin>>A>>B>>C;
  a = A.length();
  b = B.length();
  c = C.length();
  tem = 'a';
  while(1){
      if(tem == 'a'){
        if(x==a) {cout<<'A'<<endl; break;}
        tem=hoge(A,x);
        x++;
      }
      else if(tem == 'b'){
        if(y==b) {cout<<'B'<<endl; break;}
        tem=hoge(B,y);
        y++;
      }
      else{
        if(z==c) {cout<<'C'<<endl; break;}
        tem=hoge(C,z);
        z++;
      }
    }
    return 0;
}
