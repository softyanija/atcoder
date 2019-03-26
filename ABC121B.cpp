#include <stdio.h>
int main(){
    int n,m,c=0,i,j,ans,sum=0;
    scanf("%d %d %d",&n,&m,&c);
    int b[m];
    int a[n][m];
    for(i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
      ans = 0;
        for(j=0;j<m;j++){
            ans = ans + b[j]*a[i][j];
          }
        if((ans + c) > 0){
            sum++;
        }
    }

    printf("%d", sum);
}
