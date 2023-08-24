#include <stdio.h>

void main(){
    int isPalindrome = 1 , n=0;
    char str1[100];
    scanf("%s" , str1);
    for(int i=0 ; str1[i] != '\0' ; i++){
        n++;
    }
    for(int i=0; str1[i] != '\0';i++){
        if(str1[i] != str1[n-i-1]){
            isPalindrome = 0;
            break;
        }
    }

    isPalindrome == 1 ? printf("Palindrome\n") : printf("not palindrome\n");

}