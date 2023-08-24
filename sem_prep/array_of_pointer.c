#include <stdio.h>

void main(){
    int arr[10];
    int *p[10];

    for(int i=0;i<10;i++){
        p[i] = &arr[i];

        printf("%d\n" , p[i]);
        printf("%d\n" , p) ;
    }

}