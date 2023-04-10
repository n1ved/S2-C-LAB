#include <stdio.h>
void main(){
	int a , b , c , d , r;
	printf("Enter four numbers : ");
	scanf("%d %d %d %d" , &a , &b , &c , &d);
	r = (a + b) * (c - d);
	printf("Result is %d",r);
}
