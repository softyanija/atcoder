#include <bits/stdc++.h>
using namespace std;
int main(){
  int k,s,c=0;
  cin>>k>>s;
  for(int i=0;i<min(k+1,s+1);++i){
    if(0 <= s-i && s-i <= k){
      c += (s-i+1);
    }
    else if(k+1 <= s-i && s-i <= 2*k){
      c += 2*k-(s-i)+1;
    }
  }
  cout<<c;
}
