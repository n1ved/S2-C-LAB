#include <stdio.h>

void main(){
  int a=0 , b =1;
  for(int i=0;i<20;i++){
    printf("%d %d ",a,b);
    a += b;
    b += a;
  }
}
