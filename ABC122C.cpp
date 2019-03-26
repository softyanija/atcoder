#include <stdio.h>
#include <string.h>

struct pair{
  int l;
  int r;
};

int main(){
  int n,q,i;
  char s[100005];
  scanf("%d%d%s",&n, &q, s);
  struct pair lr[q];
  int a[q]={0};//“š‚¦‚ğŠi”[
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
  printf("%s", &s[1]);
  return 0;
}
