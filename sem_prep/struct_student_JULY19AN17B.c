#include <stdio.h>

struct student {
    char name[100];
    char address[200];
    char dob[100];
};

struct student s[5];

void inputinfo(){
    for(int i=0 ; i<5 ; i++){
        printf("Enter Details of student %d \nName : ",i+1);
        scanf("%s" , &s[i].name);
        printf("Address : ");
        scanf("%s" , &s[i].address);
        printf("DOB : ");
        scanf("%s" , &s[i].dob);
    }
}
void printinfo(){
    for(int i=0 ; i<5 ; i++){
        printf("%s, %s, %s\n",s[i].name,s[i].address,s[i].dob);
    }
}

void main(){
    
    inputinfo();
    printinfo();
    
}