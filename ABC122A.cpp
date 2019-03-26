#include <stdio.h>

int main(){
  char x;
  scanf("%s", &x);
  if(x == 'A'){
    printf("T");
  }
  else if(x == 'T'){
    printf("A");
  }
  else if(x == 'C'){
    printf("G");
  }
  else{
    printf("C");
  }
  return 0;
}
