#include <stdio.h>
void main(){
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  printf((a%2 == 0) ? "even number\n" : "odd number\n");
}
