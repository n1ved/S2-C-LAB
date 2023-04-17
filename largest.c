#include <stdio.h>

void main(){
  int a , b;
  printf("Enter two numbers : ");
  scanf("%d%d" , &a , &b);
  
  int largest = a>=b ? a : b ;

  printf("Laregest is %d\n" , largest);
  

}
