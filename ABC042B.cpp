#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

     vector<string> s(n);
     for(int i=0;i<n;i++){
        cin >> s[i];
     }

     sort(s.begin(),s.end());

     for(int i=0;i<n;i++){
        cout << s[i];
     }
}
