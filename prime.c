#include <stdio.h>

void main(){

  int a , i =0;
  int isPrime = 1 ;
  printf("Enter a number : ");
  scanf("%d", &a);

  for(i = 2 ; i<= a/2 ; i++){
    if(a%i == 0){
      isPrime = 0;
      break;
    }
  }

  if(isPrime == 1){
    printf("Prime number\n");
  }
  else{
    printf("Not a prime number\n ");
  }

}
