#include <stdio.h>

void main(){
  int num , digits=0;
  scanf("%d",&num);
  while(num>0){
    num /=  10;
    digits++;
  }
  printf("%d\n",digits);
}
