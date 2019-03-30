#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0,max=0;
  string s;
  cin>>n>>s;
  for(int i=0;i<n;++i){
    if(s[i]=='I') ++sum;
    else --sum;

    if(sum>max) max = sum;
  }
  cout<<max;
}
