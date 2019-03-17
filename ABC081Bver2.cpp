#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[3];
    int cnt=0;
    scanf("%s",a);
    for(int i=0;i<3;i++){
        if(a[i] =='1'){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
