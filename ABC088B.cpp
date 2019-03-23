#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main(){
    int i,n,sum=0;
        int a[101]={0};
    scanf("%d\n", &n);//”z—ñ‚Ì—v‘f”

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    qsort(a,n,4,compare);

    for(i=0;i<n;i++){
        if(i % 2 == 0){
            sum += a[i];
        }
        else{
            sum -= a[i];
        }
    }
    printf("%d",sum);
}
