#include <stdio.h>

int main(){
  char a[11];
  int n,cur=0,max=0,i,j;
  scanf("%s",&a);
  n = sizeof(a);
  for(i=0;i<n;i++){
      if((a[i] != 'A')&&(a[i] != 'T')&& (a[i] != 'C')&& (a[i] != 'G')){
        cur = 0;
      }
      else{
        cur++;
        if(cur>max){
          max = cur;
        }
      }
  }
  printf("%d",max);
}
