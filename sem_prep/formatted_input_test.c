#include <stdio.h>

void main(){

    int a,b;
    scanf("%d%d",&a,&b);
    printf("a is %d b is %d \n",a,b);

    scanf("%d %d",&a,&b);
    printf("a is %d b is %d \n",a,b);

    scanf("%d\n%d",&a,&b);
    printf("a is %d b is %d \n",a,b);

    scanf("%dn%d",&a,&b);
    printf("a is %d b is %d \n",a,b);

}