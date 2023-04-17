#include <stdio.h>

void main(){

  int a ;
  printf("Enter a year : ");
  scanf("%d", &a);

  if(a%100 == 0){
    if(a%400 == 0){
      printf("Leap year\n");
    }
    else{
      printf("Not a leap year\n");
    }
  }
  else{
    if(a%4 == 0){
      printf("Leap year\n");
    }
    else{
      printf("Not a leap year\n");
    }
  }

}
