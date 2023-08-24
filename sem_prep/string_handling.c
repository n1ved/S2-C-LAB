#include <stdio.h>
#include <string.h>

void main(){
    int len;
    char str1[100] , str2[100] , str3[100];

    scanf("%s",str1);
    scanf("%s",str2);

    //String length
    len = strlen(str1);
    printf("Lenght is %d \n" , len);

    //String copy 
    strcpy(str1,str3);
    printf("%s\n",str3);

    //String concatination
    strcat(str3,str2);
    printf("%s\n",str3);

    //String compare
    printf("%d\n",strcmp(str1,str2));

    //Does not work anymore

    // //String Uppercase
    // strupr(str1);
    // printf("%s\n",str1);

    // //String lower
    // strlwr(str2);
    // printf("%s\n",str2);
}