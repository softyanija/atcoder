#include <stdio.h>

struct pair{
  int l;
  int r;
};

int main(void){
  int n,q,i;
  char s[100005];
  scanf("%d %d %s",&n,&q,s);
  struct pair lr[q];
  for(i=0;i<100005;i++){
      int a[i]={0};
  }
  for(i=0;i<q;i++){
      scanf("%d %d",&lr[i].l,&lr[i].r);
  }

  for(i=0;i<q;i++){
      for(i = lr[i].l-1;i < lr[i].r-1;i++){
          a[i] = 0;
          if(s[i]=='A' && s[i+1]=='C'){
              a[i]==a[i]+1;
          }
      }
  }

  for(i=0;i<q;i++){
      printf("%d\n", a[i]);
  }
  printf("%s", &s[0]);
  return 0;
}
