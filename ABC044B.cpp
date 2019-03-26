#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  string s;
  cin >> s;
  map<char,int>m;
  for(auto&& a : s){
    m[a]++;
  }
  bool even = true;
  for(auto&& p : m){
    if(p.second % 2 == 1){
      even = false;
      break;
    }
  }
  cout << (even ? "Yes" : "No") << endl;
}
