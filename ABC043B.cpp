#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i] == '0' or s[i] == '1'){
            ans.push_back(s[i]);
        }
        else if(ans.size() > 0){
            ans.pop_back();
        }
    }
    cout << ans;
}
