#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int*p = (int*)malloc(sizeof(int));
  *p = 100;
  cout<< *p <<endl;
  free(p);
}
