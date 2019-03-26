#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,k,n=0,i;
    cin>>a>>b>>k;
    for(i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            n++;
        }
        if(n==k){
          break;
        }
    }
    cout<<i<<endl;
}
