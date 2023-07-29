#include <stdio.h>

void main(){
    int array[5] , temp;

    printf("Enter 5 Numbers :");

    for(int i=0 ; i<5 ; i++)
        scanf("%d" , &array[i]);
    
    for(int i= 0 ; i<5 ; i++){
        for(int j=0 ; j<4-i ; j++){
            if(array[j]>array[j+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                }
            printf("Inner-pass %d \n" , j);
        }
        printf("Pass %d \n" , i);
    }

    for(int i=0 ; i<5 ; i++)
        printf("%d\t" , array[i]);
}