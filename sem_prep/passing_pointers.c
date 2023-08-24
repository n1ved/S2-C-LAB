#include <stdio.h>
void testfun (int* a , int*b);
void main(){
    int a = 3 , b = 2 ;
    int *c = &a ;
    int *d = &b ;
    testfun(c , d);
}
void testfun(int *a , int *b){
    printf("%d" , *a + *b);
}