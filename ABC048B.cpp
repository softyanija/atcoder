#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,x,c,d=0;
  cin>>a>>b>>x;
  c = a/x;
  d = b/x;
  if(a==c*x) d++;
  cout<<d-c;
}
