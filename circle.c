#include <stdio.h>
void main(){
    float radius , a , c, pi=3.14;
    printf("Enter radius of the circle : ");
    scanf("%f" , &radius);
    a = pi * radius * radius;
    c = 2 * pi * radius;
    printf("Area of circle = %f\nCircumference of circle = %f\n" , a , c);
    
}