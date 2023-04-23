#include <stdio.h>
void main(){

  int a , r=1;
  scanf("%d" , &a);
  while(a>=1){
    r = r*a;
    a--;
  }
  printf("%d\n" , r);

}
