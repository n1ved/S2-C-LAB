#include <stdio.h>
#include <math.h>

void main(){
  int n ,nc, digits = 0 , sum = 0;
  scanf("%d",&n);

  nc = n;

  while(n>0){
    n /= 10;
    digits++;
  }

  n = nc;

  for(int i=0 ; i<digits ; i++){

    int powr = pow(n % 10 , digits);
    sum += powr;
    n /= 10;

  }

  if(sum == nc)
    printf("Armstrong\n");
  else
    printf("Not Armstrong\n");
}
