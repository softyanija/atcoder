#include <stdio.h>
#include <stdlib.h>

struct pair{
    long a;
    int b;
};

int compare(const void *x, const void *y)
{
    return ((struct pair *)x)->a - ((struct pair *)y)->a;
}



int main() {
    int i,n,m;//合計金額
    scanf("%d %d\n",&n,&m);
    struct pair AB[n];
    for(i=0;i<n;i++){
        scanf("%ld %d",&AB[i].a,&AB[i].b);
    }


    qsort(AB,n,sizeof(struct pair),compare);// ソート

    struct pair ab = {0,m};
    for (i = 0; i < n; i++) {
        if(ab.b <= AB[i].b){
            ab.a += AB[i].a * ab.b;
            break;
        }
        else{
            ab.a += AB[i].a*AB[i].b;
            ab.b -= AB[i].b;
        }
    }
    printf("%ld\n", ab.a);
    return 0;
}
