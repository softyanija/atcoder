#include <stdio.h>

int main(){
    int n=0;
    scanf("%d\n", &n);
    int a[200];
    int m=0;//���ꂽ��

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    while(1){
    for(int j=0;j<n;j++){
        if(a[j]%2 == 0){
            a[j] = a[j]/2;
        }
        else{
              printf("%d",m);
            return 0;
        }
    }
    m++;
    }
}
