#include <stdio.h>
#include <math.h>

void main(){
    int num , dnum=0 , temp;
    temp = scanf("%d" , &num);

    for(int i=0 ; num > 0 ; i++){
        dnum += (num%2 * pow(10,i));
        num /= 2;
    }

    printf("\n%d\n",temp);
}