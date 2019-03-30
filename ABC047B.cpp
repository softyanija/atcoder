#include <bits/stdc++.h>
using namespace std;
int main(){
  int w,h,n;
  cin>>w>>h>>n;
  int x[n],y[n],a[n];
  for(int i=0;i<n;++i){
    cin>>x[i]>>y[i]>>a[i];
  }
  int x1=0,x2=w,y1=0,y2=h;

  for(int i=0;i<n;++i){
      switch(a[i]){
        case 1:
          if(x1 < x[i]) x1 = x[i];
          break;
        case 2:
          if(x2 > x[i]) x2 = x[i];
          break;
        case 3:
          if(y1 < y[i]) y1 = y[i];
          break;
        case 4:
          if(y2 > y[i]) y2 = y[i];
          break;
      }
  }
  if(x2-x1>0 && y2-y1>0){
    cout<<(x2-x1)*(y2-y1);
  }
  else{cout<<0;}
}
