#include <stdio.h>
void main(){
    float p , n , r , i;
    printf("Enter principle ammount : ");
    scanf("%f", &p);
    printf("Enter number of months  : ");
    scanf("%f", &n);
    printf("Enter interest rate     : ");
    scanf("%f", &r);

    i = p * n * r;

    printf("Simple interest = %f\n" , i);
}