#include <iostream>
#include <string>
using namespace std;

int main(){
    char a[3];
    cin >> a;
    int n,i;
    n = 0;
    for(i=0; i<3; i++){
        if(a[i] == '1')
        n++;
    }
    cout<<n<<endl;
    return 0;
}
