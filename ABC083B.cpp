#include <stdio.h>

int main(){
    int n,a,b,num;
    scanf("%d %d %d", &n, &a, &b);
    int sum = 0;
    int ans = 0;
    int i; //sum‚ÍŒ…‚Ì‡Œv

    for(i=1; i<=n; i++){
        sum = 0;
        num = i;
        while(num>0){
            sum += num%10;
            num = num/10;
        }
        if(sum >=a && sum <= b){
            ans += i ;
        }
    }

    printf("%d", ans);
    return 0;
}
