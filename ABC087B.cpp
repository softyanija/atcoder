#include <bits/stdc++.h>

int main(){
    int a,b,c,d,x,i,j,k,sum;
    int n=0;
    scanf("%d %d %d %d", &a, &b, &c, &x);
    //scanf("%d\n",&a);
    //scanf("%d\n",&b);
    //scanf("%d\n",&c);
    //scanf("%d",&x);
     d = x/500;
    for(i=0;(i<=a && i<=d);i++){
        for(j=0;j<=b;j++){
            for(k=0;k<=c;k++){
                sum = 500*i+100*j+50*k;
                if(sum == x) n++;
            }
        }
    }

    printf("%d",&n);
    return 0;
}
