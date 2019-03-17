#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d %d %d", &n, &a, &b);
    int sum = 0;
    int ans = 0;
    int i; //sum‚ÍŒ…‚Ì‡Œv

    for(i=1; i<=n; i++){
        sum = 0;
        sum = i/10000
            + (i/1000 - (i/10000)*10)
            + (i/100 - (i/1000)*10)
            + (i/10 - (i/100)*10)
            + (i - (i/10)*10);
        if(sum >=a && sum <= b){
            ans += i ;
        }
    }

    printf("%d", &ans);
    return 0;
}
