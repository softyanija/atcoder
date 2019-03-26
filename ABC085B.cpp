#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int i,n=0;
    int a[100];
    scanf("%d\n",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i] );
    }

    qsort(a,n,4,compare);

    int c=1;
    if(n>1){
    for(i=0;i<(n-1);i++){
        if(a[i] != a[i+1]){
        c++;
        }
    }
  }
  printf("%d", c);
}
