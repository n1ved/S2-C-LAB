#include <stdio.h>

int fact(int n){
  if(n>0)
    return n*fact(n-1);
  else
    return 1;
}

void main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fact(n));
}
