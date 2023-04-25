#include <stdio.h>
void main(){
  int num , digits = 1 , numc , prod = 0;

  printf("Enter a number : ");
  scanf("%d",&num);

  numc = num ; //copy num for later checking

  while(num>=10){ //while loop to count number of digits
    num /= 10;
    digits++;
  }
  num = numc; //restores num

  for(int i=1 ; i<=digits ; i++){
    int temp = 1;
    for(int j= 1 ; j<= digits ; j++){
      temp = temp * (num%10);
    }
    prod = prod + temp ;
    num /=10 ;
  }
  
  if(prod == numc)
    printf("Armstrong number\n");
  else
    printf("Not an Armstrong number\n");
}
