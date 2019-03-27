#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  long int a = 0;
  a = k;

  for(int i=0;i<n-1;i++){
    a = a*(k-1);
  }
  cout<<a;
}
