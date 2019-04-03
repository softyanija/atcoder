#include <bits/stdc++.h>
using namespace std;
int main(){
  string A,B;
  cin>>A>>B;
  if(A.length()>B.length()){
    cout<<"GREATER";
    return 0;
  }
  else if(A.length()<B.length()){
    cout<<"LESS";
    return 0;
  }
  else{
    /*for(int i=0;i<A.length();++i){
      if(A.compare(B)>0){
        cout<<"GREATER";
        return 0;
      }
      else if(A.compare(B)<0){
        cout<<"LESS";
        return 0;
      }
    }
    cout<<"EQUAL";
    return 0;
  }*/
  if(A.compare(B)>0){
    cout<<"GREATER";
    return 0;
  }
  else if(A.compare(B)<0){
    cout<<"LESS";
    return 0;
  }
  else{
    cout<<"EQUAl";
    return 0;
  }
}}
