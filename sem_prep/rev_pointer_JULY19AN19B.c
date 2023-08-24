#include <stdio.h>

void main(){
    char a[50] , rev[50];
    char *ptr = a;
    char *revp = rev;
    int n = 0;
    scanf("%s" , a);

    for(int i=0 ; *(ptr+i) != '\0' ; i++)
        n++;
    
    for(int i=0 ; *(ptr+i) != '\0' ; i++)
        *(revp + i) = *(ptr+n-i-1);

    printf("%s\n" , rev);
}