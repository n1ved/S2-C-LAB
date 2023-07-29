#include <stdio.h>

int fibn(int n){
  if(n == 0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fibn(n-1) + fibn(n-2);
}

void main(){
  int n;
  scanf("%d",&n);
  for(int i=0 ; i<n ;i++){
    printf("%d ",fibn(i));
  }
}
