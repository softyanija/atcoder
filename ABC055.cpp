#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n,m=1;
  cin>>n;
  for(int i=1;i<=n;++i){
    m*=i;
    m=m%1000000007;
  }
  cout<<m;
  return 0;
}
