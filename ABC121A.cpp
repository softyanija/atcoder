#include <stdio.h>

int main(){
    int h,w,a,b,n;
    scanf("%d %d %d %d", &h,&w,&a,&b);
    n = (h-a)*(w-b);
    printf("%d\n", n);
    return 0;
}
