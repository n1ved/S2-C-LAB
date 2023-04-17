#include <stdio.h>

void main(){
  int a , b;
  printf("Enter two numbers : ");
  scanf("%d%d" , &a , &b);
  
  int smallest = a<=b ? a : b ;

  printf("Smallest is %d\n" , smallest);
  

}

