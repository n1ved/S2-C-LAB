#include <stdio.h>

int fact(int n){
    int result = 1 ;
    while(n>0){
        result *= n;
        n--;
    }
    return result;
}

void main(){

    int n , nc , digits=0 , sum =0;

    scanf("%d" , &n);
    
    //keep a copy of number
    nc = n;

    //counting digits
    while(n > 0){
        n /= 10;
        digits++;
    }

    //restoring copy
    n = nc;

    //
    for(int i=1 ; i<=digits ;i++){
        sum += fact(n%10);
        n /= 10;
    }

    sum == nc ? printf("Strong number \n") : printf("Not a strong number\n"); 



}