#include <stdio.h>

void main(){
  int a=0 , b =1 ,c,n;
  scanf("%d",&n);
  printf("%d %d ",a,b);
  for(int i=3;i<=n;i++){
    c = a+b;
    a = b;
    b = c;
    printf("%d ",c);
  }
}
