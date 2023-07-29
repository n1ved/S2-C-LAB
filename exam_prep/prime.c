// Not sure if usable on exam but I was so eager to write this way ><

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n){
  for(int i=2 ; i<=sqrt(n) ; i++)
    if(n%i == 0)
      return 0;

  return 1;
}

void main(){
  int n;
  scanf("%d",&n);
  isPrime(n) ? printf("Prime\n") : printf("Not prime\n");
}
