#include <stdio.h>
#include <math.h>


void  main(){
  int num ,  rev=0;
  scanf("%d",&num);
  for(int i=1 ; i<=3 ; i++){
    rev = rev + (num%10)*pow(10,3-i);
    num /= 10;
  }
  printf("%d\n",rev);
}
